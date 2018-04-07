# Alimentar MySQL com dados lidos da Porta Serial - Python
Este repositório está destinado a armazenar o procedimento, links para download e os códigos necessários para alimentar uma tabela MySQL com dados lidos através da porta Serial utilizando scripts em Python.

## Objetivo:
Este pequeno projeto foi desenvolvido no intuito de armazenar dados captados por sensores em tabelas de um banco de dados MySQL.
A maneira encontrada foi utilizar um código em Arduino para ler estes sensores e enviar os dados, utilizando a Comunicação Serial, para o servidor, o código em Python além de ler a Porta Serial, também adiciona os valores recebidos a uma tabela de um banco de dados MySQL. No entanto, este projeto pode ser utilizado para efetuar a leitura de qualquer informação recebida na Porta Serial e armazená-la em uma tabela. 

## Pré-requisitos:
* Ter Arduino IDE, Python e MySQL instalados e acesso à manipulação de Databases
* Noções de Programação com Arduino e Circuitos Eletrônicos
	1. Leitura de Sensores
	2. Comunicação Serial
* Noções de Programação em Python

## O que será feito?
* Programação do Arduino
* Manipulação de dados - MySQL
	1. Criação de bases de dados (Database)
	2. Criação de tabelas
	3. Adição de dados
* Python
	1. Instalação de Bibliotecas
	2. Leitura da Porta Serial
	3. Alimentação da Base de Dados
	4. Uso do Split

## Procedimentos:

### Passo 1: Montagem e Programação do *Arduino*

* Montagem do Hardware
1. Arduino UNO
2. 1 Resistor de 10Kohms
3. 1 LDR
4. Protoboard
5. Jumpers

![Montagem do Hardware - Arduino e LDR](https://github.com/ArthurLCastro/projetos-arduino/blob/master/Alimentar%20MySQL%20com%20Serial%20-%20Python/Montagem%20do%20Hardware.png)

* Programação do Arduino

1. Faça Upload do programa [Luminosidade-Serial](https://github.com/ArthurLCastro/projetos-arduino/blob/master/Alimentar%20MySQL%20com%20Serial%20-%20Python/Luminosidade-Serial/Luminosidade-Serial.ino) para o Arduino

2. Abra o "Monitor Serial" na própria IDE para confirmar a leitura dos dados.

### Passo 2: Criação da Base de Dados e Tabela *MySQL*

Para a demonstração deste projeto foi utilizado o seguinte login para o MySQL:
**Usuário:** root
**Senha:** root

* Criação da Base de Dados:

Para a criação da base de dados:

`mysql> CREATE DATABASE Monitoramento;`

Para selecionar a base de dados criada:

`mysql> USE Monitoramento;`

* Criação da Tabela:

Para a criação da tabela pode-se digitar o comando diretamente no terminal ou executar o script [script_tabela.sql](https://github.com/ArthurLCastro/projetos-arduino/blob/master/Alimentar%20MySQL%20com%20Serial%20-%20Python/script_tabela.sql)

`mysql> SOURCE /local-em-que-o-script-esta-salvo/script_tabela.sql;`

* Verificação:

Construímos então o **database** "Monitoramento" que contém uma **tabela** "ARDUINO_001" com três colunas: ID, TIMESTAMP e LUMINOSIDADE(%).

Para verificar, podemos executar o comando:

`mysql> DESC ARDUINO_001;`

### Passo 3: Scripts em *Python*

Para que o Python leia a Serial e comunique-se com o MySQL, duas bibliotecas precisam ser instaladas: **pySerial** (usando o python pip) e **[MySQL - Connector/Python](https://dev.mysql.com/downloads/connector/python/)** (clicando no link)

* Testes antes da execução do script

Após instalar as bibliotecas pode-se testar no **Interpretador Python**

`Python 2.7.12 (default, Dec  4 2017, 14:50:18) 
[GCC 5.4.0 20160609] on linux2
Type "help", "copyright", "credits" or "license" for more information.
>>>`

executando, por exemplo:

`>>> import serial`

se aparecer

`>>> import serial
>>>`

tudo deve estar funcionando bem, mas caso apareça algum erro como:

`>>> import serial
Traceback (most recent call last):
  File "<stdin>", line 1, in <module>
ImportError: No module named serial
`
seria melhor reinstalar a biblioteca.
O mesmo serve para

`>>> import mysql.connector`

* Execução do script:

Para que se inicie a leitura, comunicação e alimentação dos sensores com o banco de dados, é necessário modificar a linha 8 do script [Alimentar-MySQL-com-Serial.py](https://github.com/ArthurLCastro/projetos-arduino/blob/master/Alimentar%20MySQL%20com%20Serial%20-%20Python/Alimentar-MySQL-com-Serial.py) para a porta serial que o arduino está conectado

`ser = serial.Serial('/dev/ttyACM0', 9600) `

### Efetuando o procedimento para diversos Sensores simultaneamente

## Referências:
[Arduino e Banco de Dados – Comunicação Serial](http://josecintra.com/blog/arduino-banco-dados-comunicacao-serial/)

[pySerial](http://pyserial.readthedocs.io/en/latest/pyserial.html)

[How to Connect to MySQL Database from Python With Example](https://www.thegeekstuff.com/2016/06/mysql-connector-python/)
