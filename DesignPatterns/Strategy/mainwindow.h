#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "cashcontext.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_confirm_clicked();

    void on_pushButton_reset_clicked();

private:
    Ui::MainWindow *ui;
    double m_total = 0.0;
};
#endif // MAINWINDOW_H
