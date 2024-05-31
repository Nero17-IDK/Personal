#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <iomanip>

#define MAX_NOMBRE 171
#define MAX_SALARIO 700
#define MILLONES_USD 1000000
#define CONVERSION_PESOS 4000.00
#define PORCENTAJE_PENSION 0.04
#define PORCENTAJE_SALUD 0.04

struct Empleado{
    char nombre[MAX_NOMBRE];
    double salario;
};

void calcularNomina(Empleado empleados[], int numEmpleados){
    std::ifstream archivoSalarios("listaSalarios.csv");
    std::ofstream archivoNomina("nomina.txt");
    if (!archivoSalarios.is_open() || !archivoNomina.is_open()){
        std::cout << "Error al abrir los archivos\n";
        return;
    }

    std::string linea;
    int i = 0;
    while (std::getline(archivoSalarios, linea)){
        std::istringstream ss(linea);
        std::string token;

        std::getline(ss, token, ',');
        strcpy(empleados[i].nombre, token.c_str());

        std::getline(ss, token, ',');
        empleados[i].salario = std::stof(token) * MILLONES_USD * CONVERSION_PESOS;

        i++;
    }

    // Ordenar los empleados en orden alfabético ascendente
    for (int i = 0; i < numEmpleados - 1; i++){
        for (int j = 0; j < numEmpleados - i - 1; j++){
            if (strcmp(empleados[j].nombre, empleados[j + 1].nombre) > 0){
                Empleado temp = empleados[j];
                empleados[j] = empleados[j + 1];
                empleados[j + 1] = temp;
            }
        }
    }

    // Calcular la nómina y escribir los resultados en el archivo de texto
    archivoNomina << "Nombre\tSalario\tPensión\tSalud\tTotal\n";
    for (int i = 0; i < numEmpleados; i++){
        double pension = empleados[i].salario * PORCENTAJE_PENSION;
        double salud = empleados[i].salario * PORCENTAJE_SALUD;
        double total = empleados[i].salario - pension - salud;

        archivoNomina << empleados[i].nombre << "\t" << std::fixed << std::setprecision (2) << empleados[i].salario << "\t" << pension << "\t" << salud << "\t" << total << "\n";
    }
    // Cerrar los archivos
    archivoSalarios.close();
    archivoNomina.close();
}

int main(){
    int numEmpleados = 11; // Número de empleados en el archivo CSV
    Empleado empleados[numEmpleados];
    calcularNomina(empleados, numEmpleados);
    return 0;
}