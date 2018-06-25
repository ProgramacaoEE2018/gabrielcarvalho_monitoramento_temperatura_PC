# Conceito, Função e Motivação

Monitoramento de Temperaturas no PC

Descrição: Monitorar a temperatura dos componentes de um PC, bem como exibir gráficos temporais das temperaturas.

Motivação: Oferecer ao usuário um controle constante, em tempo real, da temperatura dos principais componentes de sua máquina de forma que sejam evitados problemas decorrentes do superaquecimento tais como lentidão, travamento, perda de dados e até, em último caso, perda da máquina.

Função: Através do recebimento dos dados de temperatura dos componentes, serão plotados gráficos das temperaturas nos principais componentes do PC como o processador, placa de vídeo, disco rígido e placa mãe.

# Esboço GUI do programa

- Interface gráfica Principal:

![alt text](https://github.com/GabC20/Teste/blob/master/Esbo%C3%A7oGUI-Interface_gr%C3%A1fica_principal.PNG)

- Botão "Adquirir Temperatura do Processador" clicado:

![alt text](https://github.com/GabC20/Teste/blob/master/Esbo%C3%A7oGUI-Adquirir_temperatura_processador.PNG)

- Botão "Status Temperatura" clicado:

![alt text](https://github.com/GabC20/Teste/blob/master/Esbo%C3%A7oGUI-Status_Temperatura.PNG)

A interface gráfica é constituída de: 
Uma janela com a opção de fechar para sair. 
Uma primeira opção de escolha de temperatura limite, onde o usuário escolhe a temperatura a partir da qual o programa emite um aviso de temperatura perigosa no processador.
Um botão com a função de adquirir temperatura.
Um gráfico em tempo real das temperaturas.
Janela de valores em tempo real das temperaturas.
Mensagem avisando se a temperatura está OK ou se passou da temperatura limite, perigosa.

# Instruções de compilação

É preciso baixar o arquivo.rar "QCustomPlot". Após isso, descompacte esses arquivos dentro da pasta do projeto e arraste o .h para o header e o .cpp para o source no QT  (Qt Creator 4.5.1 Based on Qt 5.10.1 (MSVC 2015, 32 bit) Built on Feb 10 2018 04:20:12.).

# Diagrama de Blocos

![alt text](https://github.com/GabC20/Teste/blob/master/Diagrama_Blocos.PNG)

# Fluxograma do programa

![alt text](https://github.com/GabC20/Teste/blob/master/Fluxograma.PNG)






