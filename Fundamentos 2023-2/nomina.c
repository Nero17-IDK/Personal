#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOMBRE 171
#define MAX_SALARIO 700
#define MILLONES_USD 1000000
#define CONVERSION_PESOS 4000.00
#define PORCENTAJE_PENSION 0.04
#define PORCENTAJE_SALUD 0.04

struct Empleado
{
    char nombre[MAX_NOMBRE];
    double salario;
};

void calcularNomina(Empleado empleados[], int numEmpleados)
{
    FILE *archivoSalarios = fopen("listaSalarios.csv", "r");
    FILE *archivoNomina = fopen("nomina.txt", "w");
    if (archivoSalarios == NULL || archivoNomina == NULL)
    {
        printf("Error al abrir los archivos\n");
        return;
    }

    // Leer los datos del archivo CSV y guardarlos en el arreglo de empleados
    char linea[700];
    char *token;
    int i = 0;
    while (getline(linea, sizeof(linea), archivoSalarios))
    {
        token = strtok(linea, ",");
        strcpy(empleados[i].nombre, token);
        token = strtok(NULL, ",");
        empleados[i].salario = atof(token) * MILLONES_USD * CONVERSION_PESOS;
        i++;
    }

    // Ordenar los empleados en orden alfabético ascendente
    for (int i = 0; i < numEmpleados - 1; i++)
    {
        for (int j = 0; j < numEmpleados - i - 1; j++)
        {
            if (strcmp(empleados[j].nombre, empleados[j + 1].nombre) > 0)
            {
                Empleado temp = empleados[j];
                empleados[j] = empleados[j + 1];
                empleados[j + 1] = temp;
            }
        }
    }

    // Calcular la nómina y escribir los resultados en el archivo de texto
    fprintf(archivoNomina, "Nombre\tSalario\tPensión\tSalud\tTotal\n");
    for (int i = 0; i < numEmpleados; i++)
    {
        double pension = empleados[i].salario * PORCENTAJE_PENSION;
        double salud = empleados[i].salario * PORCENTAJE_SALUD;
        double total = empleados[i].salario - pension - salud;

        fprintf(archivoNomina, "%s\t%.2f\t%.2f\t%.2f\t%.2f\n", empleados[i].nombre, empleados[i].salario, pension, salud, total);
    }
    // Cerrar los archivos
    fclose(archivoSalarios);
    fclose(archivoNomina);
}

int main()
{
    int numEmpleados = 11; // Número de empleados en el archivo CSV
    Empleado empleados[numEmpleados];
    calcularNomina(empleados, numEmpleados);
    return 0;
}