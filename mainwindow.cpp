#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "newdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

   // connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->progressBar,SLOT(setValue(int)));

   // connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->progressBar_2,SLOT(setValue(int)));

   // disconnect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->progressBar,SLOT(setValue(int)));
    //connect(ui->pushButton_25,SIGNAL(clicked()),ui->textEdit,SLOT(append(QString));

    //connect(ui->pushButton,SIGNAL(clicked(bool)),ui->textEdit,SLOT(append(QString));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_Window_triggered()
{
    NewDialog nDialog;
   nDialog.setModal(true);

   nDialog.exec();
}
