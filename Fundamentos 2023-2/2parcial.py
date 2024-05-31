def invertir_palabra(palabra):
  """Invierte una palabra."""
  return palabra[::-1]

def obtener_longitudes_palabras(texto):
  """Obtiene las longitudes de las palabras de un texto."""
  longitudes = []
  for palabra in texto.split():
    longitudes.append(len(palabra))
  return longitudes

def main():
  # Solicitar al usuario el texto
  texto = input("Ingrese un párrafo de texto: ")

  # Invertir las palabras en posición impar
  palabras_invertidas = []
  for i in range(1, len(texto), 2):
    palabras_invertidas.append(invertir_palabra(texto[i]))

  # Obtener las longitudes de las palabras en posición par
  longitudes_palabras = obtener_longitudes_palabras(texto)

  # Imprimir los resultados
  print("Palabras invertidas:")
  for palabra in palabras_invertidas:
    print(palabra)
  print()
  print("Longitudes de las palabras:")
  for longitud in longitudes_palabras:
    print(longitud)

if __name__ == "__main__":
  main()