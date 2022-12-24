def main():
	le_grafo = [] #La variable del grafo
	acumulador_unos = [] #La posicion del arreglo son los unos que tiene cada fila

	numero_filas = int(input('Dime el numero de filas que quieres que tenga: '))
	numero_columnas = int(input('Dime el numero de columnas que quieres que tenga: '))

	#Convierte el arreglo le_grafo en matriz
	for i in range(numero_filas):
		le_grafo.append([0] * numero_columnas)


	#Llena con 0 la matriz de acumulador unos dependiendo el numero de filas que tiene la matriz le_grafo
	for i in range(numero_columnas):
		acumulador_unos.append(0) 



	#Nahhhh aqui le dices que posiciones quieres que ponga 1

	quieres_seguir = 1

	while quieres_seguir == 1:
		fila = int(input('Dime la fila que quieres que cambie a 1: '))
		columna = int(input('Dime la columna que quieres que cambie a 1: '))
		le_grafo[fila-1][columna-1] = 1
		le_grafo[columna-1][fila-1] = 1

		quieres_seguir = int(input('¿Quieres seguir?, escribe 1 si si y 0 si no: '))


	#Mostrar le matriz
	for j in range(numero_columnas):
		for i in range(numero_filas):
			print(le_grafo[i][j], end=" ")
		
		print("\n")


	#Esto a cada elemento del arreglo acumulador_unos va aumentando dependiendo si hay unos o no
	#Este for va a checar cuantas filas tiene le_grafo, se puso numero_columnas por que esta variable es la que te dice cuantas filas tiene y al acumulador_unos lo va moviendo cuando termine de checar si hay unos en cada fila de le_grafo 
	for j in range(numero_columnas):

		#Este for va checando la posicion de le_grafo y va contabilizando si hay 1 o no, en la vvariable acumulador_unos
		for i in range(numero_filas):
			if(le_grafo[i][j] == 1):
				acumulador_unos[j] += 1



	#Para ver si tiene ciclo de euler
	contador_verificador = 0
	for i in range(numero_columnas):
		if(acumulador_unos[i] % 2 == 0):
			contador_verificador += 1

	if(contador_verificador == numero_columnas):
		print('tiene ciclo')
	else:
		print('no tiene ciclo')



	#Para ver si tiene camino de eulah
	tiene_camino = False
	for i in range(numero_columnas):
		if(acumulador_unos[i] % 2 != 0):
			tiene_camino = True


	if(tiene_camino == True):
		print('tiene camino')
	else:
		print('no tiene camino')


main()