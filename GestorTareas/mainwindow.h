#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_iniciar1_clicked();
    void on_iniciar2_clicked();
    void on_iniciar3_clicked();
    void on_iniciar4_clicked();

    void on_pushButton_clicked();

private:
    int c1=0,c2=0,c3=0,c4=0,total=0;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
