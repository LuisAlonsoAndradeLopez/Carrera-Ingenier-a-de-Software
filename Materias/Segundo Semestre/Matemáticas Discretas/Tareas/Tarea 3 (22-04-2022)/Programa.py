def main():
    matriz_adyacencia = []
    grado_de_vertices = [] #Para calcular el grado de vertices y el ciclo y camino de hamilton
    #matriz_incidencia = []
    
    numero_filas = int(input('Dime el numero de filas que quieres que tenga: '))
    numero_columnas = int(input('Dime el numero de columnas que quieres que tenga: '))


    #Convierte el arreglo matriz_adyacencia en matriz
    for i in range(numero_filas):
        matriz_adyacencia.append([0] * numero_columnas)
    


    #Llenar la matriz de adyacencia
    quieres_2_vertices_unidos = int(input('Quieres vertices unidos?: '))
    while(quieres_2_vertices_unidos < 0 and quieres_2_vertices_unidos > 1):
        quieres_2_vertices_unidos = int(input('Tiene que ser 0 o 1: '))

    if(quieres_2_vertices_unidos == 1):
        quieres_seguir = 1

        while quieres_seguir == 1:
            fila = int(input('Dime la fila que quieres que cambie a 1: '))
            columna = int(input('Dime la columna que quieres que cambie a 1: '))
            matriz_adyacencia[fila-1][columna-1] += 1
            matriz_adyacencia[columna-1][fila-1] += 1

            quieres_seguir = int(input('¿Quieres seguir?, escribe 1 si si y 0 si no: '))


    #Llenar el vector grado_de_vertices
    for i in range(numero_columnas):
        grado_de_vertices.append(0)


    
    mostrar_matriz_adyacencia(matriz_adyacencia, numero_filas, numero_columnas)


    #Crear un vertice aislado
    quieres_vertice_aislado = int(input('Dime si quieres un vertice aislado escribe 1 si si y escribe 0 si no: '))
    while(quieres_vertice_aislado < 0 and quieres_vertice_aislado > 1):
        quieres_vertice_aislado = int(input('Tienes que poner 0 o 1: '))

    if(quieres_vertice_aislado == 1):
        hay_vertice_aislado = int(input('Hay vertice aislado en el grafo?, escribe 1 si si y escribe 0 si no: '))

        if (hay_vertice_aislado == 1):
            quieres_seguir = 1

            while quieres_seguir == 1:
                fila = int(input('Dime la fila en la que quieres el vertice aislado: '))
                columna = int(input('Dime la columna en la que quieres el vertice aislado: '))
                matriz_adyacencia[fila-1][columna-1] = 1

                quieres_seguir = int(input('¿Quieres seguir?, escribe 1 si si y 0 si no: '))


    mostrar_matriz_adyacencia(matriz_adyacencia, numero_filas, numero_columnas)



    #Para ver Grado de vertices de cada vertice
    for j in range(numero_columnas):
        for i in range(numero_filas):
            if(matriz_adyacencia[i][j] > 0):
                grado_de_vertices[j] += matriz_adyacencia[i][j]

    for j in range(numero_columnas):
        print('El grado del vertice {} es: {}' .format(j + 1, grado_de_vertices[j]))




    #Para ver si hay aristas paralelas
    hay_aristas_paralelas = False
    for j in range(numero_columnas):
        for i in range(numero_filas):
            if(matriz_adyacencia[i][j] >= 2):
                hay_aristas_paralelas = True
                break

    if(hay_aristas_paralelas == False):
        print('No hay aristas paralelas')
    else:
        print('Si hay aristas paralelas')




    #Para ver si hay lazos

    #Primero checo con este if el limite para que a la hora de recorrer la matriz de adyacencia no se crashe
    if(numero_filas <= numero_columnas):
        menor = numero_filas
    else:
        menor = numero_columnas

    #Busca en toda la matriz de adyacencia si hay un lazo
    hay_lazo = False
    for i in range(menor):
        if(matriz_adyacencia[i][i] == 1):
            hay_lazo = True
            break

    if(hay_lazo == False):
        print('No hay lazo')
    else:
        print('Si hay lazo')




    #Para ver si hay vertices aislados
    hay_vertice_aislado = False
    for j in range(numero_columnas):
        for i in range(numero_filas):
            if(i != j):
                if(matriz_adyacencia[i][j] == 1):
                    if(matriz_adyacencia[j][i] != 1):
                        hay_vertice_aislado = True
                        break
        
        if(matriz_adyacencia[j][j] == 1):
            if(grado_de_vertices[j] == 1):
                hay_vertice_aislado = True




    if(hay_vertice_aislado == False):
        print('No hay vertice aislado')
    else:
        print('Si hay vertice aislado')




    #Para ver si tiene ciclo de hamilton
    ciclo_hamilton = True
    for i in range(numero_columnas):
        if(grado_de_vertices[i] <= 1):
            ciclo_hamilton = False
            break

    if(ciclo_hamilton == True):
        print('Si tiene ciclo de hamilton')
    else:
        print('No tiene ciclo de hamilton')



    #Para ver si tiene camino de hamilton
    camino_hamilton = True
    for j in range(numero_columnas):
        for i in range(numero_filas):
            if(matriz_adyacencia[i][j] == 1):
                if(matriz_adyacencia[j][i] != 1):
                    camino_hamilton = False
                    break

    for i in range(numero_columnas):
        if(grado_de_vertices[i] == 0):
            camino_hamilton = False  

    if(camino_hamilton == True):
        print('Si tiene camino de hamilton')
    else:
        print('No tiene camino de hamilton')
    


#Funcion que muestra la matriz de adyacencia
def mostrar_matriz_adyacencia(matriz_adyacencia, numero_filas, numero_columnas):
    #Mostrar le matriz
	for j in range(numero_columnas):
		for i in range(numero_filas):
			print(matriz_adyacencia[i][j], end=" ")
		
		print("\n")


main()