import random as rnd
import numpy as np

n = int(input("Ingrese el numero de elementos: "))

elementos = [ ]

for i in range(n) :
  elementos.append(rnd.randint(1, 10))
  print(elementos[i], end="  ")

print("")
print("")
media = np.sum(elementos) / n
print("La media del arreglo es: ", media)
print("")

print("Elementos mayores a la media: ")
mayor = [ ]
j = 0
for i in range(n) :
  if (elementos[i] > media) :
    mayor.append(elementos[i])

mayor.sort()
print(mayor)