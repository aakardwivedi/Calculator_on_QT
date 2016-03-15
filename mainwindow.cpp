#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "newdialog.h"
#include "about.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    a=0;
     b=0;
     aentered=false;
    bentered=false;
    multi=false;
    divide=false;
    add=false;
    minus=false;
    equal=false;
    foper=false;
     dot_on=false;
    newoper='$';
    previousoper='$';
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


void MainWindow::on_actionAbout_triggered()
{    About nAbout;

   nAbout.setModal(true);

   nAbout.exec();
}

void MainWindow::on_pushButton_1_clicked()
{
    if(newoper=='=')
    {
        aentered=false;
        newoper='$';
    }
   if(!aentered)
   {
       a=1;
       ui->lcdNumber->display(a);
       aentered=true;

   }
   else
   {
       if(OperatorSelected())
       {
           if(!bentered)
           {
               b=1;
               ui->lcdNumber->display(b);
               bentered=true;
           }
           else
           {
               b=b*10+1;
               ui->lcdNumber->display(b);

           }
       }
       else
       {
           a=a*10+1;
           ui->lcdNumber->display(a);
       }
   }
}
void MainWindow::on_pushButton_9_clicked()
{
    if(newoper=='=')
    {
        aentered=false;
        newoper='$';
    }
   if(!aentered)
   {
       a=9;
       ui->lcdNumber->display(a);
       aentered=true;

   }
   else
   {
       if(OperatorSelected())
       {
           if(!bentered)
           {
               b=9;
               ui->lcdNumber->display(b);
               bentered=true;
           }
           else
           {
               b=b*10+9;
               ui->lcdNumber->display(b);

           }
       }
       else
       {
           a=a*10+9;
           ui->lcdNumber->display(a);
       }
   }
}
void MainWindow::on_pushButton_2_clicked()
{
    if(newoper=='=')
    {
        aentered=false;
        newoper='$';
    }
   if(!aentered)
   {
       a=2;
       ui->lcdNumber->display(a);
       aentered=true;

   }
   else
   {
       if(OperatorSelected())
       {
           if(!bentered)
           {
               b=2;
               ui->lcdNumber->display(b);
               bentered=true;
           }
           else
           {
               b=b*10+2;
               ui->lcdNumber->display(b);

           }
       }
       else
       {
           a=a*10+2;
           ui->lcdNumber->display(a);
       }
   }
}
void MainWindow::on_pushButton_3_clicked()
{
    if(newoper=='=')
    {
        aentered=false;
        newoper='$';
    }
   if(!aentered)
   {
       a=3;
       ui->lcdNumber->display(a);
       aentered=true;

   }
   else
   {
       if(OperatorSelected())
       {
           if(!bentered)
           {
               b=3;
               ui->lcdNumber->display(b);
               bentered=true;
           }
           else
           {
               b=b*10+3;
               ui->lcdNumber->display(b);

           }
       }
       else
       {
           a=a*10+3;
           ui->lcdNumber->display(a);
       }
   }
}
void MainWindow::on_pushButton_4_clicked()
{
    if(newoper=='=')
    {
        aentered=false;
        newoper='$';
    }
   if(!aentered)
   {
       a=4;
       ui->lcdNumber->display(a);
       aentered=true;

   }
   else
   {
       if(OperatorSelected())
       {
           if(!bentered)
           {
               b=4;
               ui->lcdNumber->display(b);
               bentered=true;
           }
           else
           {
               b=b*10+4;
               ui->lcdNumber->display(b);

           }
       }
       else
       {
           a=a*10+4;
           ui->lcdNumber->display(a);
       }
   }
}
void MainWindow::on_pushButton_5_clicked()
{
    if(newoper=='=')
    {
        aentered=false;
        newoper='$';
    }
   if(!aentered)
   {
       a=5;
       ui->lcdNumber->display(a);
       aentered=true;

   }
   else
   {
       if(OperatorSelected())
       {
           if(!bentered)
           {
               b=5;
               ui->lcdNumber->display(b);
               bentered=true;
           }
           else
           {
               b=b*10+5;
               ui->lcdNumber->display(b);

           }
       }
       else
       {
           a=a*10+5;
           ui->lcdNumber->display(a);
       }
   }
}
void MainWindow::on_pushButton_6_clicked()
{
    if(newoper=='=')
    {
        aentered=false;
        newoper='$';
    }
   if(!aentered)
   {
       a=6;
       ui->lcdNumber->display(a);
       aentered=true;

   }
   else
   {
       if(OperatorSelected())
       {
           if(!bentered)
           {
               b=6;
               ui->lcdNumber->display(b);
               bentered=true;
           }
           else
           {
               b=b*10+6;
               ui->lcdNumber->display(b);

           }
       }
       else
       {
           a=a*10+6;
           ui->lcdNumber->display(a);
       }
   }
}
void MainWindow::on_pushButton_7_clicked()
{
    if(newoper=='=')
    {
        aentered=false;
        newoper='$';
    }
   if(!aentered)
   {
       a=7;
       ui->lcdNumber->display(a);
       aentered=true;

   }
   else
   {
       if(OperatorSelected())
       {
           if(!bentered)
           {
               b=7;
               ui->lcdNumber->display(b);
               bentered=true;
           }
           else
           {
               b=b*10+7;
               ui->lcdNumber->display(b);

           }
       }
       else
       {
           a=a*10+7;
           ui->lcdNumber->display(a);
       }
   }
}
void MainWindow::on_pushButton_8_clicked()
{
    if(newoper=='=')
    {
        aentered=false;
        newoper='$';
    }
   if(!aentered)
   {
       a=8;
       ui->lcdNumber->display(a);
       aentered=true;

   }
   else
   {
       if(OperatorSelected())
       {
           if(!bentered)
           {
               b=8;
               ui->lcdNumber->display(b);
               bentered=true;
           }
           else
           {
               b=b*10+8;
               ui->lcdNumber->display(b);

           }
       }
       else
       {
           a=a*10+8;
           ui->lcdNumber->display(a);
       }
   }
}


void MainWindow::on_pushButton_CLEAR_clicked()
{
    a=0;
     b=0;
    foper=false;
     aentered=false;
    bentered=false;
    multi=false;
    divide=false;
    add=false;
    minus=false;
    equal=false;
     dot_on=false;
    previousoper='$';
    newoper='$';
    ui->lcdNumber->display(0);
}

bool MainWindow::OperatorSelected()
{
    return (multi||divide||add||minus);
}

void MainWindow::on_pushButton_PLUS_clicked()
{
    if(previousoper=='$')
    {
        previousoper='+';
        add=true;
        if(aentered&&bentered)
        {
            a=a+b;
            ui->lcdNumber->display(a);
            bentered=false;
        }
        else
        ui->lcdNumber->display(0);
    }
    else
    {

        if(aentered&&bentered)
        {
            switch(previousoper)
                    {
                    case '+' : a=a+b;
                        break;
                    case '-' : a=a-b;
                        break;
                    case '/' : a=a/b;
                        break;
                    case '*' : a=a*b;
                        break;
                    /*case '+' : a=a+b;
                        break;*/


                   }
            ui->lcdNumber->display(a);
            previousoper='+';
            bentered=false;
        }
    }
    newoper
            ='$';
}

void MainWindow::on_pushButton_MULTI_clicked()
{
    if(previousoper=='$')
    {
        previousoper='*';
        multi=true;
        if(aentered&&bentered)
        {
            a=a*b;
            ui->lcdNumber->display(a);
            bentered=false;
        }
        else
        ui->lcdNumber->display(0);
    }
    else
    {

        if(aentered&&bentered)
        {
            switch(previousoper)
                    {
                    case '+' : a=a+b;
                        break;
                    case '-' : a=a-b;
                        break;
                    case '/' : a=a/b;
                        break;
                    case '*' : a=a*b;
                        break;
                    /*case '+' : a=a+b;
                        break;*/


                   }
            ui->lcdNumber->display(a);
            previousoper='*';
            bentered=false;
        }
    }
    newoper='$';
}

void MainWindow::on_pushButton_DIVIDE_clicked()
{
   if(previousoper=='$')
   {
       previousoper='/';
       divide=true;
       if(aentered&&bentered)
       {
           if(b!=0)
           {
               a=a/b;
               ui->lcdNumber->display(a);
               bentered=false;
           }
           else
               ui->lcdNumber->display("ERROR");
       }
       else
       ui->lcdNumber->display(0);
   }
   else
   {

       if(aentered&&bentered)
       {
           switch(previousoper)
                   {
                   case '+' : a=a+b;
                       break;
                   case '-' : a=a-b;
                       break;
                   case '/' : a=a/b;
                       break;
                   case '*' : a=a*b;
                       break;
                   /*case '+' : a=a+b;
                       break;*/


                  }
           ui->lcdNumber->display(a);
           previousoper='/';
           bentered=false;
       }
   }
    newoper='$';
}

void MainWindow::on_pushButton_MINUS_clicked()
{
    if(previousoper=='$')
    {
        previousoper='-';
        minus=true;
        if(aentered&&bentered)
        {
            a=a-b;
            ui->lcdNumber->display(a);
            bentered=false;
        }
        else
        ui->lcdNumber->display(0);
    }
    else
    {

        if(aentered&&bentered)
        {
            switch(previousoper)
                    {
                    case '+' : a=a+b;
                        break;
                    case '-' : a=a-b;
                        break;
                    case '/' : a=a/b;
                        break;
                    case '*' : a=a*b;
                        break;
                    /*case '+' : a=a+b;
                        break;*/


                   }
            ui->lcdNumber->display(a);
            previousoper='-';
            bentered=false;
        }
    }
    newoper='$';
}

void MainWindow::on_pushButton_0_clicked()
{
    if(newoper=='=')
    {
        aentered=false;
        newoper='$';
    }
    if(!aentered)
    {
        a=0;
        ui->lcdNumber->display(a);
        aentered=true;

    }
    else
    {
        if(OperatorSelected())
        {
            if(!bentered)
            {
                b=0;
                ui->lcdNumber->display(b);
                bentered=true;
            }
            else
            {
                b=b*10+0;
                ui->lcdNumber->display(b);

            }
        }
        else
        {
            a=a*10;
            ui->lcdNumber->display(a);
        }
    }
}

void MainWindow::on_pushButton_EQUAL_clicked()
{

    if(aentered&&bentered)
    {
        switch(previousoper)
                {
                case '+' : a=a+b;
                    break;
                case '-' : a=a-b;
                    break;
                case '/' : a=a/b;
                    break;
                case '*' : a=a*b;
                    break;
                /*case '+' : a=a+b;
                    break;*/

                }
        ui->lcdNumber->display(a);
        bentered=false;
        previousoper='$';
    }
        newoper='=';
}
