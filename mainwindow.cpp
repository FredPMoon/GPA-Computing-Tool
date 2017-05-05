#include "mainwindow.h"

MainWindow::MainWindow()
{

}

MainWindow::MainWindow(GPAStore* g)
    : data(g)
{
    initializingComponents();
    connectEvents();
    setLayout(interfaceLayout);
}

MainWindow::~MainWindow()
{

}

void MainWindow::initializingComponents()
{
    setWindowTitle("GPA Computing Tool 1.1");
    interfaceLayout = new QVBoxLayout();
    headline_area = new QVBoxLayout();
    //interfaceLayout->addLayout(headline_area);
    headline = new QLabel("Welcome to GPA Computing Tool 1.0");
    interfaceLayout->addWidget(headline);
    interfaceLayout->addLayout(headline_area);
    classList = new QListWidget(this);
    interfaceLayout->addWidget(classList);
    addClassButton = new QPushButton("add class");
    interfaceLayout->addWidget(addClassButton);
    removeClassButton = new QPushButton("remove class");
    interfaceLayout->addWidget(removeClassButton);
    quitButton = new QPushButton("quit");
    interfaceLayout->addWidget(quitButton);

    interfaceLayout->addStretch();

    newWindow = new QWidget;
    newWindow->setWindowTitle("GPA Computing Tool 1.1");
    newWindow->setFixedHeight(670);
    newWindow->setFixedWidth(650);
    overallLayout = new QVBoxLayout();
    class_1_area = new QVBoxLayout();
    overallLayout->addLayout(class_1_area);
    class_1_label_area = new QHBoxLayout();
    class_1_area->addLayout(class_1_label_area);
    class_1_label = new QLabel("Class :");
    class_1_label_area->addWidget(class_1_label);
    class_1_name_input = new QLineEdit("");
    class_1_name_input->setFixedWidth(100);
    class_1_label_area->addWidget(class_1_name_input);
    //class_1_label_area->setAlignment(class_1_label,Qt::AlignLeft);
    blank_1 = new QLabel("                                                                                            ");
    class_1_label_area->addWidget(blank_1);
    hw_1_percent_area = new QHBoxLayout();
    class_1_area->addLayout(hw_1_percent_area);
    hw_1_label = new QLabel("1. Homework:");
    hw_1_percent_area->addWidget(hw_1_label);
    hw_1_percent = new QSpinBox();
    hw_1_percent->setFixedWidth(100);
    hw_1_percent->setSuffix(QString::fromStdString("%"));
    hw_1_percent->setRange(0,100);
    hw_1_percent->setSingleStep(10);
    hw_1_percent->setAlignment(Qt::AlignRight);
    hw_1_percent_area->addWidget(hw_1_percent);
    blank_percent_1 = new QLabel("                                                                                     ");
    hw_1_percent_area->addWidget(blank_percent_1);
    hw_1_list_area = new QHBoxLayout();
    class_1_area->addLayout(hw_1_list_area);
    hw_1_list = new QListWidget(newWindow);
    hw_1_list_area->addWidget(hw_1_list);
    //hw_1_list_area->setAlignment(Qt::AlignLeft);
    hw_1_list->setFixedWidth(400);
    hw_1_list->setFixedHeight(119);
    hw_input_area = new QVBoxLayout();
    hw_input_label_area = new QHBoxLayout();
    hw_input_area->addLayout(hw_input_label_area);
    hw_1_list_area->addLayout(hw_input_area);
    hw_input_label = new QLabel("hw:");
    hw_input_label_area->addWidget(hw_input_label);
    hw_input = new QSpinBox();
    hw_input->setRange(1,50);
    hw_input->setAlignment(Qt::AlignRight);
    hw_input_label_area->addWidget(hw_input);
    hw_score_area = new QHBoxLayout();
    hw_input_area->addLayout(hw_score_area);
    hw_score = new QLabel("score:");
    hw_score_area->addWidget(hw_score);
    hw_grade_input = new QLineEdit();
    hw_score_area->addWidget(hw_grade_input);
    outof = new QLabel("out of");
    hw_score_area->addWidget(outof);
    hw_total_input = new QLineEdit();
    hw_score_area->addWidget(hw_total_input);
    addHwButton = new QPushButton("add homework");
    hw_input_area->addWidget(addHwButton);
    removeHwButton = new QPushButton("remove homework");
    hw_input_area->addWidget(removeHwButton);

    class_1_area->addStretch();

    midterm_label_area = new QHBoxLayout();
    class_1_area->addLayout(midterm_label_area);
    midterm_label = new QLabel("2. midterm:");
    midterm_label_area->addWidget(midterm_label);
    midterm_percent = new QSpinBox();
    midterm_percent->setRange(0,100);
    midterm_percent->setAlignment(Qt::AlignRight);
    midterm_percent->setSuffix(QString::fromStdString("%"));
    midterm_percent->setSingleStep(10);
    midterm_label_area->addWidget(midterm_percent);
    midterm_label_area->addWidget(blank_percent_1);
    midterm_area = new QHBoxLayout();
    class_1_area->addLayout(midterm_area);
    midterm_list = new QListWidget(newWindow);
    midterm_list->setFixedWidth(400);
    midterm_list->setFixedHeight(125);
    midterm_area->addWidget(midterm_list);
    midterm_input_area = new QVBoxLayout();
    midterm_area->addLayout(midterm_input_area);
    midterm_input_label_area = new QHBoxLayout();
    midterm_input_area->addLayout(midterm_input_label_area);
    midterm_input_label = new QLabel("midterm:       ");
    midterm_input_label_area->addWidget(midterm_input_label);
    midterm_input = new QSpinBox();
    midterm_input->setRange(1,10);
    midterm_input->setAlignment(Qt::AlignRight);
    midterm_input->setFixedWidth(90);
    midterm_input_label_area->addWidget(midterm_input);
    midterm_score_area = new QHBoxLayout();
    midterm_input_area->addLayout(midterm_score_area);
    midterm_score_label = new QLabel("score: ");
    midterm_score_area->addWidget(midterm_score_label);
    midterm_grade_input = new QLineEdit();
    midterm_score_area->addWidget(midterm_grade_input);
    outof2 = new QLabel("out of");
    midterm_score_area->addWidget(outof2);
    midterm_total_input = new QLineEdit();
    midterm_score_area->addWidget(midterm_total_input);
    addMtButton = new QPushButton("add midterm");
    midterm_input_area->addWidget(addMtButton);
    removeMtButton = new QPushButton("remove midterm");
    midterm_input_area->addWidget(removeMtButton);

    midterm_area->addStretch();
    midterm_input_area->addStretch();

    final_area = new QVBoxLayout();
    overallLayout->addLayout(final_area);
    final_label_area = new QHBoxLayout();
    final_area->addLayout(final_label_area);
    final_label = new QLabel("3. final:");
    final_label_area->addWidget(final_label);
    final_percent = new QSpinBox();
    final_percent->setRange(0,100);
    final_percent->setAlignment(Qt::AlignRight);
    final_percent->setSuffix(QString::fromStdString("%"));
    final_percent->setSingleStep(10);
    final_label_area->addWidget(final_percent);
    final_percent_blank = new QLabel("                                                                                            ");
    final_label_area->addWidget(final_percent_blank);
    final_list_area = new QHBoxLayout();
    final_area->addLayout(final_list_area);
    final_list = new QListWidget(newWindow);
    final_list->setFixedWidth(400);
    final_list->setFixedHeight(125);
    final_list_area->addWidget(final_list);
    final_input_area = new QVBoxLayout();
    final_list_area->addLayout(final_input_area);
    final_input_label_area = new QHBoxLayout();
    final_input_area->addLayout(final_input_label_area);
    final_input_label = new QLabel(" final:             ");
    final_input_label_area->addWidget(final_input_label);
    final_input = new QSpinBox();
    final_input->setRange(1,10);
    final_input->setAlignment(Qt::AlignRight);
    final_input->setFixedWidth(90);
    final_input_label_area->addWidget(final_input);
    final_score_area = new QHBoxLayout();
    final_input_area->addLayout(final_score_area);
    final_score_label = new QLabel(" score: ");
    final_score_area->addWidget(final_score_label);
    final_grade_input = new QLineEdit();
    final_score_area->addWidget(final_grade_input);
    outof3 = new QLabel("out of");
    final_score_area->addWidget(outof3);
    final_total_input = new QLineEdit();
    final_score_area->addWidget(final_total_input);
    addFinalButton = new QPushButton("add final");
    final_input_area->addWidget(addFinalButton);
    removeFinalButton = new QPushButton("remove final");
    final_input_area->addWidget(removeFinalButton);

    final_list_area->addStretch();
    final_input_area->addStretch();

    addClassDoneButton = new QPushButton("done");
    overallLayout->addWidget(addClassDoneButton);

    overallLayout->addStretch();

    newWindow->setLayout(overallLayout);
}

void MainWindow::connectEvents()
{
    connect(addClassButton, SIGNAL(clicked()), this, SLOT(showNewWindow()));
    connect(quitButton, SIGNAL(clicked()), this, SLOT(quit()));
    connect(addClassDoneButton, SIGNAL(clicked()), this, SLOT(done()));
}

void MainWindow::showNewWindow()
{
    newWindow->show();
}

void MainWindow::quit()
{
    this->close();
}

void MainWindow::done()
{
    newWindow->hide();
}
