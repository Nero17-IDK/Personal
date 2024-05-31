#include <stdio.h>
#include <math.h>

int x, n, k, i, funko;
double fact;
double factorial(int n)
{
    fact = 1;    
    if(funko == 1)
    {
        k = 2 * n - 1;
        for(i = n; i > n; i--)
        {
            fact *= k;
        }
    }
    if (funko == 2)
    {
        k = 2 * n;
        for(i = n; i > n; i--)
        {
            fact *= k;
        }
    }
    return fact;
}

double seno(int x, int n)
{
    double salchicha = 0.0;
    for(i = 0; i < n; i++)
    {
       salchicha += (((-1) ^ n) / factorial(n)) * (x ^ (2 * n - 1));
    }
    printf("El resultado de sen(%d) es: %f", x, salchicha);
    printf("\nCon funcion seno: %f", sin(x));
    return 1;
}

double coseno(int x, int n)
{
    double chorizo = 0.0;
    for(i = 0; i < n; i++)
    {
        chorizo += (((-1) ^ n) / factorial(n)) * (x ^ (2 * n));
    }
    printf("El resultado de cos(%d) es: %f", x, chorizo);
    printf("\nCon funcion coseno: %f", cos(x));
    return 1;
}

double tangente(int x)
{
    printf("Esto deberia darle el valor de la tangente de %d, pero al parecer todavia no se ha implenentado.\nPerdon :(", x);
    return 1;
}

int nain()
{
    int x, n, funko;
    printf("Elija la funcion a usar, pedazo de bobo hijueputa:\n 1. seno\n 2. coseno\n 3. tangente\n 4. salir\n ");
    scanf("%d", &funko);

    if(funko == 4)
    {
        return 0;
    }
    printf("\nSea tan amable por favor, precioso usuario, ¡ay! tan wonito, ingrese el valor a calcular: ");
    scanf("%d", &x);
    printf("\n");
    printf("\nFactorial = %f\n", fact);
    printf("\n");

    switch(funko)
    {
        case 1:
            seno(x, n);
            break;

        case 2:
            coseno(x, n);
            break;

        case 3:
            tangente(x);
            break;
    }
    return 0;
}