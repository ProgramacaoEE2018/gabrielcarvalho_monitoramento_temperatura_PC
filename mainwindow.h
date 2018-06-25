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
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void addPoint(double x, double y);
    void clearData();
    void plot();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;

    QVector<double> qv_x, qv_y;
};

/*
    #if !defined(EA_9E6458CD_1BBC_4e1f_A964_69A5F15F6675__INCLUDED_)
    #define EA_9E6458CD_1BBC_4e1f_A964_69A5F15F6675__INCLUDED_

    class Componente_Hardware
    {

    public:
        Componente_Hardware();
        float Temperatura_Limite;

        void Exibir_Temperatura(float Temperatura);
        void Plotar_Temperatura(float Temperatura);

    private:
        char Nome[20];
        float Temperatura;

    };
    #endif // !defined(EA_9E6458CD_1BBC_4e1f_A964_69A5F15F6675__INCLUDED_)
*/

/*
    #if !defined(EA_4347A17B_5C44_4df9_8E70_105C0E20E2FD__INCLUDED_)
    #define EA_4347A17B_5C44_4df9_8E70_105C0E20E2FD__INCLUDED_

    class Alarme
    {

    public:
        Alarme();

        char *Exibir_Mensagem(bool);

    private:
        bool Comparador;
        char Nome[20];

    };
    #endif // !defined(EA_4347A17B_5C44_4df9_8E70_105C0E20E2FD__INCLUDED_)
*/

#endif // MAINWINDOW_H
