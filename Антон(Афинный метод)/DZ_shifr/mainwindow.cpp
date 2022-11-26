#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <chrono>
#include <QDebug>
#include <string>


using namespace std::chrono;


MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lcdNumber->display(ui->alphabet->text().size());
    (*alphabet) = ui->alphabet->text();
    ui->spinBox->setMaximum(ui->alphabet->text().size()-1);
    ui->spinBox_2->setMaximum(ui->alphabet->text().size()-1);
    ui->spinBox_3->setMaximum(ui->alphabet->text().size()-1);
    ui->spinBox_4->setMaximum(ui->alphabet->text().size()-1);
    connect(ui->alphabet, SIGNAL(textChanged(QString)),this,SLOT(count()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::count(){
    int alphabet_size = ui->alphabet->text().size();
    (*alphabet) = ui->alphabet->text();

    ui->lcdNumber->display(alphabet_size);
    ui->spinBox->setMaximum(alphabet_size-1);
    ui->spinBox_2->setMaximum(alphabet_size-1);
    ui->spinBox_3->setMaximum(alphabet_size-1);
    ui->spinBox_4->setMaximum(alphabet_size-1);

}

int MainWindow::search(QString a) {
    int j = 0;
    while ((*alphabet).at(j) != a.at(0)) {
        if (j+1<((*alphabet).size()))
            j++;
        else
            return -1;
    }
    return j;
}

int MainWindow::Evklid(int a, int b, int c) {
    int otvet[4];
    int bb = b, x_2 = 1, x_1 = 0, y_2 = 0, y_1 = 1, x = 0, y = 0, q = 0, r = 0;
    while (b>0) {
        q=a/b;
        r=a%b;
        x=x_2-q*x_1;
        y=y_2-q*y_1;

        a=b;
        b=r;
        x_2=x_1;
        x_1=x;
        y_2=y_1;
        y_1=y;
    }

    otvet[0]=(x%bb); //остаток от деления
    otvet[1]=x_2;
    otvet[2]=y_2;
    otvet[3]=b;
    if (c == 0) return otvet[0];
    else {if (c == 1) return otvet[1];
        else {if (c==2) return otvet[2];
            else return otvet[3];}
    }
}

void MainWindow::on_pushButton_clicked()
{
    ui->aff_time->setText("");
    on_aff_cl_ou_clicked();
    auto start_1 = system_clock::now();
    int alfa = ui->spinBox->text().toInt();
    int beta = ui->spinBox_2->text().toInt();
    int j;                                                              //переменная - положение искомой буквы в алфавите
    QString input = ui-> aff_in->text();
    QString out;
    for (int i=0;i<input.size();i++) {
        j = search(input.at(i));                                        //ищем положение i-го символа в нашем алфавите
        if (j == -1)
            out += input.at(i);
        else {
            out += (*alphabet).at( ((alfa * j) + beta) % ((*alphabet).size()) );  //дописываем в переменную out символ с расчитанным положением в алфавите
        }
    }
ui->aff_ou->setText(out);
auto finish_1 = system_clock::now();
auto duration_1 = duration_cast<microseconds>(finish_1-start_1).count();
ui->aff_time->setText(QString::number((float)duration_1));
}


void MainWindow::on_aff_cl_in_clicked()
{
    ui->aff_in->setText("");
}

void MainWindow::on_aff_cl_ou_clicked()
{
    ui->aff_ou->setText("");
}



void MainWindow::on_pushButton_2_clicked()
{
    ui->lineEdit->setText("");
    on_aff_cl_in_clicked();
    auto start_1 = system_clock::now();
    int alfa_1 = Evklid(ui->spinBox_3->text().toInt(), (*alphabet).size(), 1);
    int beta = ui->spinBox_4->text().toInt();
    int j;      //переменная - положение искомой буквы в алфавите
    QString input = ui->aff_ou->text();
    QString out;
    for (int i = 0; i<input.size();i++){
        j = search(input.at(i));        //ищем положение i-го символа в нашем алфавите
        if (j == -1)
            out += input.at(i);
        else {
            int p = (alfa_1*(j-beta))%((*alphabet).size());
            if (p<0) {
                p += (*alphabet).size();
            }
            out += (*alphabet).at(p);       //  дописываем в переменную out символ с расчитанным положением в алфавите
        }
    }
    ui->aff_in->setText(out);
    auto finish_1 = system_clock::now();
    auto duration_1 = duration_cast<microseconds>(finish_1-start_1).count();
    ui->lineEdit->setText(QString::number((float)duration_1));
}

