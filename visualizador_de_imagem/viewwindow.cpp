
#include "viewwindow.h"
#include "ui_viewwindow.h"
#include "form_image.h"


ViewWindow::ViewWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ViewWindow)
{
    ui->setupUi(this);
}

ViewWindow::~ViewWindow()
{
    delete ui;
}


//Abrir nova janela
void ViewWindow::on_pushButton_clicked()
{
    ui->tabWidget->addTab(new Form_image(), "Janela " + QString::number(ui->tabWidget->count()+1));
}


//Remover uma janela
void ViewWindow::on_tabWidget_tabCloseRequested(int index)
{
    ui->tabWidget->removeTab(index);
}

