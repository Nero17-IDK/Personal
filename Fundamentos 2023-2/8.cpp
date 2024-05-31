#include <stdio.h>

// Función para determinar si un año es bisiesto
int bisiesto(int año)
{
    if ((año % 4 == 0 && año % 100 != 0) || (año % 400 == 0))
    {
        return 1;
    }
    return 0;
}

// Función para calcular el número de días entre dos fechas
int calcularDias(int dia1, int mes1, int año1, int dia2, int mes2, int año2)
{
    int diasMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int totalDias = 0, año, mes;

    // Sumar días completos de años completos entre las dos fechas
    for (año = año1; año < año2; año++)
    {
        totalDias += 365;
        if (bisiesto(año))
        {
            diasMes[2] = 29;
        }
    }

    // Restar los días del primer año hasta el final de ese año
    for (mes = mes1; mes <= 12; mes++)
    {
        totalDias += diasMes[mes] - dia1 + 1;
        dia1 = 1;
    }

    // Restar los días del último año desde el principio del año
    for (mes = 1; mes < mes2; mes++)
    {
        totalDias += diasMes[mes];
    }

    // Restar los días del último año hasta la fecha final
    totalDias += dia2 - 1;

    return totalDias;
}

int main()
{
    // Solicita ingresar la primera fecha
    int dia1, mes1, año1, dia2, mes2, año2;
    printf ("Ingrese la primera fecha (Debe ser posterior a la segunda)\n(DD MM AAAA): ");
    scanf ("%d %d %d", &dia1, &mes1, &año1);
    // Solicita ingresar la segunda fecha
    printf ("Ingrese la segunda fecha\n(DD MM AAAA): ");
    scanf ("%d %d %d", &dia2, &mes2, &año2);

    // Calcula los días de diferencia y almacena el resultado en la variable 'dif'
    int dif = calcularDias(dia1, mes1, año1, dia2, mes2, año2);
    
    //Si alguno de los años es bisiesto le suma un día
    if (bisiesto(año1) || bisiesto(año2))
    {
        dif++;
    }

    // Imprime los días restantes
    printf ("El numero de dias entre las dos fechas es: %d\n", dif);

}   // Fin del programa