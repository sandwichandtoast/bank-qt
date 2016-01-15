#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProcess>
#include <QTextEdit>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
   // QString packagewhat;
    QProcess process;
  QString text = ui-> plainTextEdit->toPlainText();
  process.start("/bank.sh", QStringList() << text);
}


void MainWindow::on_plainTextEdit_textChanged()
{

}
