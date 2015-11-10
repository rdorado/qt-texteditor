#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>
#include <QTextStream>

#include <iostream>
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    updateWindow(document);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionExit_triggered()
{
   QApplication::quit();
}


void MainWindow::updateWindow(Document d){
  this->setWindowTitle( QString::fromStdString( d.getFilename() ) );
}

void MainWindow::on_actionSave_as_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"), QString::fromStdString( document.getFilename() ), tr(""));
    QFile file(fileName);
    file.open(QIODevice::WriteOnly);
    QTextStream out(&file);

    QString text = ui->textEdit->toPlainText();

    out << text;
    file.close();

    qDebug( file.fileName().toUtf8().constData() );
}
