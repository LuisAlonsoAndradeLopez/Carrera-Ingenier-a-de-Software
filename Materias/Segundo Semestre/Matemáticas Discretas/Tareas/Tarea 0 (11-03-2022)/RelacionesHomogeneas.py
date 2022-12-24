from xmlrpc.client import boolean


def main():
    la_matriz = [[0,0,0],[0,0,0],[0,0,0]]

    quieres_seguir = 1

    #Para que le digas las coordenadas que quieres cambiar a 1
    while(quieres_seguir == 1):


        fila = int(input("Dime la fila que quieres que cambie a 1: "))
        while(fila < 1 or fila > 3):
            fila = int(input("Tienes que poner entre 1 y 3: "))


        columna = int(input("Dime la columna que quieres que cambie a 1: "))
        while(columna < 1 or columna > 3):
            columna = int(input("Tienes que poner entre 1 y 3: "))


        la_matriz[columna - 1][fila - 1] = 1

        #Aqui dirás si quieres seguir cambiando las coordenadas o no
        quieres_seguir = int(input("Quieres seguir?, escribe 1 si sí, escribe 0 si no: "))
        while(quieres_seguir < 0 or quieres_seguir > 1):
            quieres_seguir = int(input("Tiene que ser 0 o 1: "))



    #Muestra la matriz con las modificaciones que hiciste
    print("Te voy a mostrar la matriz")

    for recorredor_de_columnas_de_matriz in range (0,3):
        for recorredor_de_filas_de_matriz in range (0,3):
            print(la_matriz[recorredor_de_filas_de_matriz][recorredor_de_columnas_de_matriz], end=" ")

        print("")


    #Ya aqui solo hay funciones para que diga si la matriz es esto o es lo otro
    reflexivo = es_reflexivo(la_matriz)


    simetrico = es_simetrico(la_matriz)
    if(simetrico == True):
        print("Si es simetrica la matriz")
    else:
        print("No es simetrica la matriz")

    transitivo = es_transitivo(la_matriz)
    if(transitivo == True):
        print("Si es transitiva la matriz")
    else:
        print("No es transitiva la matriz")

    equivalente = es_equivalente(reflexivo, simetrico, transitivo)
    if(equivalente == True):
        print("Si es equivalente la matriz")
    else:
        print("No es equivalente la matriz")




def es_reflexivo(la_matriz):
    fila = 0
    columna = 0
    contador_decisivo = 0 #contador que sirve para ver si termina siendo reflexiva la matriz o no
    reflexivo = False #AHHHHHHHHHHHHHHHHHHHHHHHHHH, esto va a ser para decir si la matriz es de equivalencia

    while(fila <= 2 and columna <= 2):
        if(la_matriz[columna][fila] == 1):
            contador_decisivo = contador_decisivo + 1

        fila = fila + 1
        columna = columna + 1

    if(contador_decisivo == 3): #Tiene que ser 3 a la fuerza para ser reflexivo
        print("Si es reflexiva la matriz")
        reflexivo = True
    else:
        print("No es reflexiva la matriz")

    return reflexivo 

        



def es_simetrico(la_matriz):
    simetrico = True #ahhh para ayuda si va a ser de equivalencia

    #estos 2 fors van a recorrer tooooooooooooooooda la matriz
    for columna in range (0,3):
        for fila in range (0,3):

            #este if va a checar cada elemento de la matriz
            if(la_matriz[columna][fila] == 1):

                #este if tiene las variables columna y fila al revez por que asi se checa si va a ser simetrica la matriz
                if(la_matriz[fila][columna] != 1):
                    simetrico = False

    return simetrico   




def es_transitivo(la_matriz):
    transitivo = True

    #aqui empieza el algoritmo aterrador

    #primero ten en cuenta que filas = x, columnas = y, otro_recorredor_de_filas = y, otro_recorredor_de_columnas = z

    #primero estos 2 fors van a hacer un recorrido a toda la matriz
    for columnas in range (0,3):
        for filas in range (0,3):

            #con este if van a ver si en una coordenada de la matriz encontraron un 1
            if(la_matriz[columnas][filas] == 1):

                #ahora se pone en pausa el recorrido de los fors columnas y filas y se hace otro recorrido con estos 2 fors
                for otro_recorredor_de_columnas in range (0,3):
                    for otro_recorredor_de_filas in range (0,3):

                        #este if hace que descarte si los 2 fors anteriores tocan las cooerdenadas que tienen los 2 fors del principio
                        if(otro_recorredor_de_columnas != columnas and otro_recorredor_de_filas != filas):


                            #este if checa si en la segunda vuelta (que hicieron los fors otro recorredor de columnas y otro recorredor de filas) encontraron un 1
                            if(la_matriz[otro_recorredor_de_columnas][otro_recorredor_de_filas] == 1):

                                #luego este if checa que las variables que serian estas posiciones (las que tienen el numero 2): [1,2][2,1] son el mismo numero
                                if(otro_recorredor_de_filas == columnas):

                                    #ya por ultimo si al poner en la matriz las variables de estas coordenasas (los del numero 1): [1,2][2,1] la posicion de la matriz no es 1, entonces no es transitiva
                                    if(la_matriz[otro_recorredor_de_columnas][filas] != 1):
                                        transitivo = False


    return transitivo      




def es_equivalente(reflexivo, simetrico, transitivo):
    equivalente = True
    
    if(reflexivo == False):
        equivalente = False

    if(simetrico == False):
        equivalente = False

    if(transitivo == False):
        equivalente = False

    return equivalente         



main()       