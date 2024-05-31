#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Hallar: menor, mayor, media, desviación estándar, mediana



int main()
{
    int n, i;
    printf("Introduzca el número de elementos, por favor: ");
    scanf("%d", &n);
    srand(time(0));
    int elementos[n];
    // generación de los n elementos, con valores enteros entre 1 y 100
    for ( i = 0; i < n; i++ )
    {
        elementos[i] = 1 + rand() % 100;
    }

    // impresión en pantalla de los elementos generados.
    for ( i = 0; i < n; i++ )
    {
        printf("%d ", elementos[i]);
    }

    //para buscar las repeticiones
    for( i = 0; i < n; i++ )
    {
        int cont = 0;
        for( j = 0; j < n; j++ )
    }

    printf("\n");
    
    printf("Fin del programa\n");
}