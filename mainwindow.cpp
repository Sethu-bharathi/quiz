#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "string"

   QString question[]={"Which one of the following river flows between Vindhyan and Satpura ranges?","Who among the following wrote Sanskrit grammar?","The metal whose salts are sensitive to light is?","Patanjali is well known for the compilation of __","The country that has the highest in Barley Production?","Tsunamis are not caused by ___","Volcanic eruption do not occur in the __","The hottest planet in the solar system?","Where was the electricity supply first introduced in India __","Friction can be reduced by changing from __"};
   QString optiona[]={"Narmada","Panini","Silver","Yoga Sutra","Russia","Hurricanes","Baltic sea","Venus","Darjeeling","sliding to rolling"};
   QString optionb[]{"Mahanadi","Charak,Silver","Panchatantra","India","Earthquakes","Black sea","earth","Dehradun","sliding to rolling"};
   QString optionc[]={"Son","Panini","Copper","Brahma Sutra","Russia","Undersea landslides","Caribbean sea","Mars","Darjeeling","dynamic to static"};
   QString optiond[]={"Netravati","Aryabhatt","Aluminium","Ayurveda","France","Volcanic eruptions","Caspian sea","Jupiter","Chennai","potential energy to kinetic energy"};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->plainTextEdit->setPlainText(question[0]);
    ui->checkBox->setText(optiona[0]);
    ui->checkBox_2->setText(optionb[0]);
    ui->checkBox_3->setText(optionc[0]);
    ui->checkBox_4->setText(optiond[0]);
    }

MainWindow::~MainWindow()
{
    delete ui;
}

static int count=1;
static int score=0;
void MainWindow::on_pushButton_clicked()
{
    if(count<9){
        if(ui->checkBox->isChecked()){
    score++;}
        ui->plainTextEdit->setPlainText(question[count]);
        ui->checkBox->setChecked(false);
        ui->checkBox_2->setChecked(false);
        ui->checkBox_3->setChecked(false);
        ui->checkBox_4->setChecked(false);

    ui->checkBox->setText(optiona[count]);
    ui->checkBox_2->setText(optionb[count]);
    ui->checkBox_3->setText(optionc[count]);
    ui->checkBox_4->setText(optiond[count]);
    count++;
}
else{
       ui->plainTextEdit->setPlainText("      Your score is : "+QString::number(score));
       ui->checkBox->hide();
       ui->checkBox_2->hide();
       ui->checkBox_3->hide();
       ui->checkBox_4->hide();
       ui->pushButton->hide();
    }}
