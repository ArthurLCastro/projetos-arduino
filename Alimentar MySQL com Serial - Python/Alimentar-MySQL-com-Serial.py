# Alimentar tabela MySQL com dados recebidos pela Serial (Arduino)
# Arthur Castro
# 07 de abril de 2018

import serial
import mysql.connector

ser = serial.Serial('/dev/ttyACM0', 9600) 
conn = mysql.connector.connect(
			user='root',
			password='root',
			host='127.0.0.1',
			database='Monitoramento')

while 1:
	valor = ser.readline()
	print(valor)
	cur = conn.cursor()
	query = ("INSERT INTO ARDUINO_001(LUMINOSIDADE) VALUES (" + valor + ")")
	cur.execute(query)
	conn.commit()

cur.close()
conn.close()