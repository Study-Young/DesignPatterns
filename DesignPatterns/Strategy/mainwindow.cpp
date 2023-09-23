#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->comboBox_saleType->addItem("无促销");
    ui->comboBox_saleType->addItem("打8折");
    ui->comboBox_saleType->addItem("满300返100");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_confirm_clicked()
{
    CashContext* csuper = new CashContext(ui->comboBox_saleType->currentIndex());
    double totalPrice = 0.0;
    totalPrice = csuper->getResult(ui->lineEdit_price->text().toDouble()
                                   * ui->lineEdit_num->text().toInt());
    m_total += totalPrice;
    ui->textBrowser_msg->append(QString("单价:%1  数量:%2  合计:%3").arg(ui->lineEdit_price->text())
                                                                  .arg(ui->lineEdit_num->text())
                                                                  .arg(totalPrice));
    ui->label_TotalPrice->setText(QString::number(m_total));
    delete csuper;
}

void MainWindow::on_pushButton_reset_clicked()
{

}
