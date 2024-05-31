#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Ingrese un número no negativo: ");
    scanf("%d", &n);
    while(n > 0)
    {
        int m = n;
        int i, rest, inv;
        int vec[m];
        inv = 0;
        int contador = 0;
        while (n > 0)
        {
            rest = n % 10;
            n = n / 10;
            inv = inv * 10 + rest;
        }
        i = 0;
        while (inv > 0)
        {
            rest = inv % 10;
            inv = inv / 10;
            vec[i] = rest;
            i++;
            contador++;
        }
        printf("\n");
        for (i = 0; i < contador; i++)
        {
            printf("%d", vec[i]);
        }
        printf(" ");
        int suma = 0;
        for (i = 0; i < contador; i++)
        {
            suma = suma + vec[i];
            if (i == contador -1)
            {
                printf("%d ", vec[i]);
            }
            else
            {
                printf("%d + ", vec[i]);
            }
        }
        printf("= %d\n", suma);
        scanf("%d", &n);
    }
}