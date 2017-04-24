#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QTextEdit>
#include <QPushButton>
#include <QRadioButton>
#include <QListWidget>
#include <QListWidgetItem>
#include <QString>
#include <QComboBox>
#include <QSize>
#include <QSpinBox>
#include "gpastore.h"

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow();
    MainWindow(GPAStore* g);
    ~MainWindow();
private slots:
    void showNewWindow();
private:
    void initializingComponents();
    void connectEvents();
    GPAStore* data;
private:
    QVBoxLayout* interfaceLayout;
    QListWidget* classList;
    QPushButton* addClassButton;
    QPushButton* removeClassButton;
    QWidget* newWindow;
    QVBoxLayout* overallLayout;
    QVBoxLayout* headline_area;
    QLabel* headline;
    QVBoxLayout* class_1_area;
    QHBoxLayout* class_1_label_area;
    QLabel* class_1_label;
    QLineEdit* class_1_name_input;
    QLabel* blank_1;
    QHBoxLayout* hw_1_percent_area;
    QLabel* hw_1_label;
    QSpinBox* hw_1_percent;
    QLabel* blank_percent_1;
    QHBoxLayout* hw_1_list_area;
    QListWidget* hw_1_list;
    QVBoxLayout* hw_input_area;
    QHBoxLayout* hw_input_label_area;
    QLabel* hw_input_label;
    QSpinBox* hw_input;
    QHBoxLayout* hw_score_area;
    QLabel* hw_score;
    QLineEdit* hw_grade_input;
    QLabel* outof;
    QLineEdit* hw_total_input;
    QPushButton* addHwButton;
    QPushButton* removeHwButton;

    QHBoxLayout* midterm_label_area;
    QLabel* midterm_label;
    QSpinBox* midterm_percent;
    QHBoxLayout* midterm_area;
    QListWidget* midterm_list;
    QVBoxLayout* midterm_input_area;
    QHBoxLayout* midterm_input_label_area;
    QLabel* midterm_input_label;
    QSpinBox* midterm_input;

};

#endif // MAINWINDOW_H
