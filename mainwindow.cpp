#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;

}


void MainWindow::on_open_file_clicked()
{
    const char* filepath = NULL;
    QString str = QFileDialog::getOpenFileName(0, "Выбрать файл", "", "*.obj");
        QByteArray file_path = str.toLocal8Bit();
        filepath = file_path.data();
        ui->result_open_file->setText(filepath);
}
