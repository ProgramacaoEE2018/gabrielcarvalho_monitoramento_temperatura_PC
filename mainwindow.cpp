#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include <QtGui>
#include <QMessageBox>
#include <QVector>
#include <QString>

//#include "Componente_Hardware.h"                                             //Inlcui os headers necessários para o funcionamento
//#include "Alarme.h"
//#include "stdafx.h"

/*  Componente_Hardware::Componente_Hardware(float Temperatura_Limite, char Nome[20], float Temperatura){
    //void Plotar_Temperatura(float Temperatura);
    }

    void Componente_Hardware::Exibir_Temperatura(float Temperatura){

        //Exibe mensagem da temperatura atual do processador
    }


    void Componente_Hardware::Plotar_Temperatura(float Temperatura){
        //Plota gráfico de temperatura no processador
    }

*/

/*  Alarme::Alarme(bool Comparador, char Nome[20]){
    //char *Exibir_Mensagem(bool);
    }

    char *Alarme::Exibir_Mensagem(bool){

    //Ponteiro que aponta para uma string, que no caso é uma mensagem que avvisa se a temperatura está alta
    //Compara o input de Temperatura Limite recebido pelo usuário com a temperatura atual do processador
    //Caso a temperatura seja maior -> mensagem de temperatura perigosa
    //Caso a temperatura seja menor -> mensagem de temperatura OK
    }

*/

//double tempo = 0;

//while(1)                                                                    //Repete esse processo a cada ciclo de info transmitida do processador
//{
    MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MainWindow)
    {
        ui->setupUi(this);
        ui->plot->addGraph();
        ui->plot->graph(0)->setScatterStyle(QCPScatterStyle::ssDisc);         //Escolha da marcação de pontos como um círculo
        ui->plot->graph(0)->setLineStyle(QCPGraph::lsNone);                   //Escolha da ligação dos pontos: Nenhuma linha
        this->setWindowTitle("Monitoramento de Temperaturas");                //Define o título da janela da Interface Gráfica
    }

    MainWindow::~MainWindow()
    {
        delete ui;
    }

    void MainWindow::addPoint(double x, double y)
    {
        qv_x.append(x);                                                        //Recebe os valores do eixo x, do tempo
        qv_y.append(y);                                                        //Recebe os valores do eixo y, da temperatura
    }

    void MainWindow::clearData()
    {
        qv_x.clear();                                                          //Limpa os valores coletados do eixo x até o momento
        qv_y.clear();                                                          //Limpa os valores coletados do eixo x até o momento
    }

    void MainWindow::plot()
    {
        while(1)
        {
            ui->plot->graph(0)->setData(qv_x, qv_y);                           //Define os pontos x e y do gráfico em uma iteração
            ui->plot->replot();                                                //Plota o gráfico com os x e y definidos
            ui->plot->update();                                                //Atualiza a nova coleção de pontos
        }
    }

    void MainWindow::on_pushButton_clicked()
    {
        QMessageBox::information(this, "Nota", "Obtendo Temperaturas");                                  //Avisa ao usuário que as temperturas estão sendo obtidas
        //addPoint(ui->tempo->value(), ui->"variavel de temperatura lida do pprocessador"->value());     //Recebe valores de tempo, escolidos a um
        plot();                                                                                          //passo de DeltaT e os valores de temperaturas
    }                                                                                                    //coletados do processador

    void MainWindow::on_pushButton_2_clicked()
    {
        QString spin=ui->doubleSpinBox->text();
        QMessageBox::information(this, tr("Confirmação"), tr("Temperatura Limite: %1").arg(spin));       //Temperatura limite definida pelo usuário
        //Se a temperatura for maior do que a definida pelo usuário                                      //Condições de comparação da temperatura definida
                                                                                                         //com a temperatura atual

        //QMessageBox::information(this, "Aviso", "Temperatura perigosa");                               //Avisa ao usuário que a temperatura está alta

        //Se a temperatura for menor do que a definida pelo usuário                                      //Condições de comparação da temperatura definida
                                                                                                         //com a temperatura atual

        //QMessageBox::information(this, "Aviso", "Temperatura segura");                                 //Avisa ao usuário que a temperatura está OK

        //QMessageBox::information(this, "Temperatura atual", "Dado de Temperatura do processador");     //Exibe a temperatura em tempo real do processador
    }
    //tempo = tempo + DeltaT;                                                                            //Incremento de tempo para próxima iteração
                                                                                                         //DeltaT é o tempo que o processador leva
                                                                                                         //para fornecer a próxima info de temperatura

    void MainWindow::on_pushButton_3_clicked()
    {
        clearData();                                                                                     //Limpa o gráfico
        plot();                                                                                          //Plota um gráfico vazio
    }

//}
