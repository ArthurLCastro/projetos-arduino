# Alimentar MySQL com dados lidos da Porta Serial - Python
Este repositório está destinado a armazenar o procedimento, links para download e os códigos necessários para alimentar uma tabela MySQL com dados lidos através da porta Serial utilizando scripts em Python.

## Objetivo:
Este pequeno projeto foi desenvolvido no intuito de armazenar dados captados por sensores em tabelas de um banco de dados MySQL.
A maneira encontrada foi utilizar um código em Arduino para ler estes sensores e enviar os dados, utilizando a Comunicação Serial, para o servidor, o código em Python além de ler a Porta Serial, também adiciona os valores recebidos a uma tabela de um banco de dados MySQL. No entanto, este projeto pode ser utilizado para efetuar a leitura de qualquer informação recebida na Porta Serial e armazená-la em uma tabela. 

## O que será feito?
* Programação em Arduino
	1. Leitura de Sensores
	2. Comunicação Serial
* Banco de dados MySQL
	1. Instalação
	2. Criação de bases de dados (Database)
	3. Criação de tabelas
	4. Adição de dados
* Python
	1. Instalação de Bibliotecas
	2. Leitura da Porta Serial
	3. Alimentação da Base de Dados
	4. Uso do Split

## Referências:
[Arduino e Banco de Dados – Comunicação Serial](http://josecintra.com/blog/arduino-banco-dados-comunicacao-serial/)

[How to Connect to MySQL Database from Python With Example](https://www.thegeekstuff.com/2016/06/mysql-connector-python/)
