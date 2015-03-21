#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QListView>
#include <QDateTime>
#include <QPlastiqueStyle>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->listWidget->setStyle(new QPlastiqueStyle);
    ui->pushButton->setStyle(new QPlastiqueStyle);
    ui->pingbutton->setStyle(new QPlastiqueStyle);
    ui->comboBox->setStyle(new QPlastiqueStyle);
    ui->comboBox_2->setStyle(new QPlastiqueStyle);
    ui->comboBox_3->setStyle(new QPlastiqueStyle);
    ui->comboBox_4->setStyle(new QPlastiqueStyle);
    ui->comboBox_5->setStyle(new QPlastiqueStyle);
    ui->comboBox_6->setStyle(new QPlastiqueStyle);
    ui->comboBox_7->setStyle(new QPlastiqueStyle);
    //ui->comboBox_8->setStyle(new QPlastiqueStyle);
    ui->comboBox_9->setStyle(new QPlastiqueStyle);
    ui->comboBox_10->setStyle(new QPlastiqueStyle);
    ui->comboBox_11->setStyle(new QPlastiqueStyle);
    ui->comboBox_12->setStyle(new QPlastiqueStyle);
    ui->comboBox_13->setStyle(new QPlastiqueStyle);
    ui->comboBox_14->setStyle(new QPlastiqueStyle);
    ui->comboBox_15->setStyle(new QPlastiqueStyle);
    ui->comboBox_16->setStyle(new QPlastiqueStyle);
    ui->comboBox_17->setStyle(new QPlastiqueStyle);
    ui->comboBox_18->setStyle(new QPlastiqueStyle);
    ui->comboBox_19->setStyle(new QPlastiqueStyle);
    ui->comboBox_20->setStyle(new QPlastiqueStyle);
    ui->comboBox_21->setStyle(new QPlastiqueStyle);
    ui->comboBox_22->setStyle(new QPlastiqueStyle);
    ui->comboBox_23->setStyle(new QPlastiqueStyle);
    ui->comboBox_24->setStyle(new QPlastiqueStyle);
    ui->comboBox_25->setStyle(new QPlastiqueStyle);
    ui->comboBox_26->setStyle(new QPlastiqueStyle);
    ui->comboBox_27->setStyle(new QPlastiqueStyle);
    ui->comboBox_28->setStyle(new QPlastiqueStyle);
    ui->comboBox_29->setStyle(new QPlastiqueStyle);
    ui->comboBox_30->setStyle(new QPlastiqueStyle);
    ui->comboBox_31->setStyle(new QPlastiqueStyle);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pingbutton_clicked()
{
    QPushButton *button = ui->pingbutton;
    if(button->text() == "Ping") {
        button->setText("Pinging...");
    }
    else {
        button->setText("Ping");
    }
}
