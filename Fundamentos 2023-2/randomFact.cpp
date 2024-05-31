#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int factorial(int m)
{
    int fact = 1;
    while(m > 1)
    {
        fact = fact * m;
        m = m - 1;
    }
    return fact;
}

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
    
    printf("\n");
    
    // impresión en pantalla de los elementos generados.
    for ( i = 0; i < n; i++ )
    {
        printf("%d ", elementos[i]);
    }
    printf("\n");
    
        int maximo = elementos[0];
        int minimo = elementos[0];
        
    for (int i = 0; i < n; i++) 
    {
        if (elementos[i] > maximo) 
        {
            maximo = elementos[i];
        }
        
        if (elementos[i] < minimo) 
        {
            minimo = elementos[i];
        }
        
        if (elementos[i] < 10)
         {
            int numero = elementos[i];
            int fact = 1;
            
            for (int j = 1; j <= elementos[i]; j++)
            {
                factorial(elementos[j]);
            }
            printf("\n");
            printf("El factorial de %d es: %d", elementos[i], fact);
         }

    int conteos[n];

    for (i = 0; i < n; i++) 
    {
        int conteoTemp = 0;
        for (j = 0; j <= i; j++)
            {
                if (elementos[i] == elementos[j])
                {
                    conteoTemp = conteoTemp + 1;
                }
                int conteos[j] = conteoTemp;
            }
    }
         printf("El elemento %d se repite %d veces",elementos[i], conteos[j]);
    }
    
    printf("\n \n");

    printf("El número máximo es: %d \n", maximo);
    
    printf("El número mínimo es: %d \n", minimo);
    
    printf("\n");
    
    printf("Fin del programa \n");
}