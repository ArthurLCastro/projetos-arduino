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

![Hardware - Arduino e Sensores](https://upload.wikimedia.org/wikipedia/commons/thumb/d/d9/Arduino_ftdi_chip-1.jpg/200px-Arduino_ftdi_chip-1.jpg)

* Programação do Arduino

### Passo 2: Criação da Base de Dados e Tabela *MySQL*

* Criação da Base e Dados:

* Criação da Tabela:

### Passo 3: Criação de Scripts em *Python*

### Efetuando o procedimento para diversos Sensores simultaneamente

## Referências:
[Arduino e Banco de Dados – Comunicação Serial](http://josecintra.com/blog/arduino-banco-dados-comunicacao-serial/)

[How to Connect to MySQL Database from Python With Example](https://www.thegeekstuff.com/2016/06/mysql-connector-python/)
