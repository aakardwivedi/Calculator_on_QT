#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionNew_Window_triggered();


    /*
     * This function opens a dialog box that gives the details about the software. Version details, copyrights
     * and every detail related to the software.
    */
    void on_actionAbout_triggered();

   /*
    *These Functions hear the btton clicks and display them on the number display
    */
    void on_pushButton_1_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_0_clicked();


     // This function reurns true if any one of the function is selected or not.
    bool OperatorSelected();

    /*
     * These functions hear the button clicks of the arithmetic operations, and manipulates the inputs.
    */
    void on_pushButton_CLEAR_clicked();

    void on_pushButton_PLUS_clicked();

    void on_pushButton_MULTI_clicked();

    void on_pushButton_DIVIDE_clicked();

    void on_pushButton_MINUS_clicked();

   /*
    * This function displays the final result by hearing for the '=' button click.
    */

    void on_pushButton_EQUAL_clicked();

   // void on_pushButton_DOT_clicked();

private:
    Ui::MainWindow *ui;

    double a;
    double b;
    bool aentered;
    bool bentered;
    bool multi;
    bool divide;
    bool add;
    bool minus;
    bool equal;
    bool foper;
    char previousoper;
    char newoper;
    bool dot_on;

};

#endif // MAINWINDOW_H
