#include <iostream>
#include <string>

using namespace std;

string intToBase4(int n) {
    if (n == 0) {
        return "0"; // Manejamos el caso especial de 0.
    }

    string result = "";

    while (n > 0) {
        int remainder = n % 4;
        char digit = '0' + remainder; // Convierte el residuo en un carácter.
        result = digit + result; // Agrega el dígito a la izquierda de la cadena de resultado.
        n /= 4; // Actualiza el cociente para continuar con el siguiente dígito.
    }

    return result;
}

int main() {
    int number;
    cout << "Ingrese un número entero en base 10: ";
    cin >> number;

    string base4 = intToBase4(number);

    cout << "El número en base 4 es: " << base4 << endl;

    return 0;
}