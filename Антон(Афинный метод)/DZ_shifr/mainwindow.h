#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public slots:
    void count();
    int search(QString a);
    int Evklid(int a, int b, int c);

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString *alphabet = new QString;

private slots:
    void on_pushButton_clicked();

    void on_aff_cl_in_clicked();

    void on_aff_cl_ou_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
