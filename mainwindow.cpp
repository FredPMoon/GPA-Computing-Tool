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

    interfaceLayout->addStretch();

    newWindow = new QWidget;
    newWindow->setWindowTitle("GPA Computing Tool 1.1");
    newWindow->setFixedHeight(700);
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
    hw_1_list = new QListWidget(this);
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

    midterm_label_area = new QHBoxLayout();
    class_1_area->addLayout(midterm_label_area);
    midterm_label = new QLabel("2. midterm");
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
    midterm_list = new QListWidget(this);
    midterm_list->setFixedWidth(400);
    midterm_list->setFixedHeight(119);
    midterm_area->addWidget(midterm_list);
    midterm_input_area = new QVBoxLayout();
    midterm_area->addLayout(midterm_input_area);
    midterm_input_label_area = new QHBoxLayout();
    midterm_area->addLayout(midterm_input_label_area);
    midterm_input_label = new QLabel("  midterm:       ");
    midterm_input_label_area->addWidget(midterm_input_label);
    midterm_input = new QSpinBox();
    midterm_input->setRange(1,10);
    midterm_input->setAlignment(Qt::AlignRight);
    midterm_input->setFixedWidth(90);
    midterm_input_label_area->addWidget(midterm_input);

    midterm_area->addStretch();
    midterm_input_area->addStretch();





    class_1_area->addStretch();
    overallLayout->addStretch();

    newWindow->setLayout(overallLayout);
}

void MainWindow::connectEvents()
{
    connect(addClassButton, SIGNAL(clicked()), this, SLOT(showNewWindow()));
}

void MainWindow::showNewWindow()
{
    newWindow->show();
}
