#include "form_image.h"
#include "ui_form_image.h"
#include <QPixmap>
#include <QFileDialog>

Form_image::Form_image(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_image)
{
    ui->setupUi(this);
}

Form_image::~Form_image()
{
    delete ui;
}

void Form_image::on_pushButton_clicked()
{
    //Escolha do arquivo
    QString filter = "Image File (*.png)";
    QString pathFileName = QFileDialog::getOpenFileName(this, "Abra uma imagem", "C://", filter);

    //Exibição da imagem
    QPixmap img(pathFileName);
    ui->label->setPixmap(img.scaled(500, 500, Qt::KeepAspectRatio));
}

