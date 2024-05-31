#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void imprimirVec(float vec[], int n)
{
    int i; 
    for (i = 0; i < n; i++)
    {
        printf("%f ", vec[i]);
    }
    printf("\n");
}

float resA()
{
    float valor1, valor2, valor3, valor4, estaturas, pesos;
    int n, i;

    for (i = 0; i < n; i++)
    {
        valor1 = estaturas[i];
        valor2 = pesos[i];
        valor3 = estaturas[i] * pesos[i];
        valor4 = pow(estaturas[i], 2);

        printf("/n %f", (((valor4 * valor2) - (valor3 * valor1)) / ((n * valor4) - pow(valor1, 2))));
    }
    
    return 0;
}
    
int main()
{
    int n, i;
    FILE *archivo;
    // char path[100] = "./Programas\ Clase\ 2022-[1\ 2]/Fundamentos/estaturas.txt";
    char path[100] = "estaturas.txt";
    archivo = fopen(path, "r");
    if (archivo == NULL)
    {
        printf("El archivo %s no existe\n ", path);
    }
    else
    {
        fscanf(archivo, "%d", &n);
        printf("Leyendo %d lineas:\n", n);
        float estaturas[n], pesos[n];
        for (i = 0; i < n; i++)
        {
            fscanf(archivo, "%f %f", &estaturas[i], &pesos[i]);
        }
        imprimirVec(estaturas, n);
        imprimirVec(pesos, n);

    }

}