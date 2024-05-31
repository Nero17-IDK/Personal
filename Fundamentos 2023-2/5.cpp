#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()                                                          // Definimos el inicio de la función principal
{
    int n, i;                                                       // Se definen como enteros las variables "n" e "i".
    printf("\nIngrese el numero de elementos a generar: ");         // Se imprime el mensaje y se ingresar la cantid
    scanf("%d", &n);
    srand(time(0));

    int elementos[n];                                               // Tamaño del arreglo
    // generación de los n elementos, con valores enteros entre 1 y 10
    for ( i = 0; i < n; i++ )
    {
        elementos[i] = 1 + rand() % 10;
    }
    //Se imprimen los elementos generados
    printf ("\nElementos generados:\n");
    for ( i = 0; i < n; i++ )
    {
        printf("%d  ", elementos[i]);
    }

    printf("\n");
    float media = 0, suma = 0;                                      // Declarar una variable para almacenar la media y la suma de todos los elementos
    for ( i = 0; i < n; i++ )                                       // Recorrer el vector con un bucle for
    {
        suma += elementos[i];                                       // Sumar el elemento actual a la suma
    }
    media = suma / n;                                               // Calcular la media dividiendo la suma por el tamaño del vector
    printf ("\nLa media es: %.2f\n", media);                        // Mostrar la media en la pantalla con solo 2 decimales
    
    int mayor[n], size = 0;                                         // Declarar un vector para almacenar elementos mayores a la media y un contador para el tamaño de ese vector
    for ( i = 0; i < n; i++ )                                       // Recorrer el vector con un bucle for
    {
        if (elementos[i] > media)                                   // Definir la condición para almacenar elementos en el vector "mayor"
        {
            mayor[size] = elementos[i];
            size++;                                                 // Aumentar 1 más cada que un elemento es mayor a la media, para medir el tamaño del vector "mayor"
        }
    }
    // Imprimir los elementos que son mayores a la media
    printf ("\nElementos mayores a la media: \n");
    for ( i = 0; i < size; i++ )
    {
        printf ("%d\n", mayor[i]);
    }

// Ordenar la lista de elementos mayores a la media de menor a mayor
    int aux, j;                                                     // Declarar como entero una variable auxiliar para comparar los elementos
    for (i = 0; i < size; i++)                                      // Recorrer el vector hasta "size", para evitar almacenar basura
    {
        for (j = i + 1; j < size; j++)                              // Recorrer el vector y compara entre elementos para ordenarlos de menor a mayor
        {
            if (mayor[i] > mayor[j]) 
            {
                aux = mayor[j];
                mayor[j] = mayor[i];
                mayor[i] = aux;
            }
        }
    }

// Imprimir la lista de elementos ya ordenados de menor a mayor
    printf ("\n");
    printf ("\nOrdenados de menor a mayor:\n");
    for (i = 0; i < size; i++)
    {
        printf ("%d\n", mayor[i]);
    }
}                                                                       // Fin del programa