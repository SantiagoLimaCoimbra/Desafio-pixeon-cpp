
#ifndef VIEWWINDOW_H
#define VIEWWINDOW_H

#include <QMainWindow>



QT_BEGIN_NAMESPACE
namespace Ui { class ViewWindow; }
QT_END_NAMESPACE

class ViewWindow : public QMainWindow

{
    Q_OBJECT

public:
    ViewWindow(QWidget *parent = nullptr);
    ~ViewWindow();

private slots:
    void on_pushButton_clicked();

    void on_tabWidget_tabCloseRequested(int index);

private:
    Ui::ViewWindow *ui;
};

#endif // VIEWWINDOW_H
