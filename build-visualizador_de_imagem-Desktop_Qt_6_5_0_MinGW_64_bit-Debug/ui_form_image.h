/********************************************************************************
** Form generated from reading UI file 'form_image.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_IMAGE_H
#define UI_FORM_IMAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_image
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *Form_image)
    {
        if (Form_image->objectName().isEmpty())
            Form_image->setObjectName("Form_image");
        Form_image->resize(450, 470);
        label = new QLabel(Form_image);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 50, 400, 400));
        pushButton = new QPushButton(Form_image);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 10, 121, 24));

        retranslateUi(Form_image);

        QMetaObject::connectSlotsByName(Form_image);
    } // setupUi

    void retranslateUi(QWidget *Form_image)
    {
        Form_image->setWindowTitle(QCoreApplication::translate("Form_image", "Form", nullptr));
        label->setText(QCoreApplication::translate("Form_image", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("Form_image", "Novo arquivo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form_image: public Ui_Form_image {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_IMAGE_H
