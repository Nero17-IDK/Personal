dia1, mes1, año1 = map(int, input("Ingrese la primera fecha: ").split())

def bisiesto (año) :
    if año % 4 == 0 and año % 100 != 0 or año % 400 == 0:
        bisiesto = True
        print("Es bisiesto")

def calcularDias (dia1, mes1, año1, dia2, mes2, año2):

    diasMes = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
    totalDias = 0
    for año in range(año2):
        if bisiesto(año) == True:
            diasMes[2] == 29