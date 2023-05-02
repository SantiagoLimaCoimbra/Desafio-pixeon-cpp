#ifndef FORM_IMAGE_H
#define FORM_IMAGE_H

#include <QWidget>

namespace Ui {
class Form_image;
}

class Form_image : public QWidget
{
    Q_OBJECT

public:
    explicit Form_image(QWidget *parent = nullptr);
    ~Form_image();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Form_image *ui;
};

#endif // FORM_IMAGE_H
