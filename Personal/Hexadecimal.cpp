#include <iostream>
#include <string>

using namespace std;

string intToHex(int n) {
    if (n == 0) {
        return "0"; // Manejamos el caso especial de 0.
    }

    string result = "";
    string hexChars = "0123456789ABCDEF";

    while (n > 0) {
        int remainder = n % 16;
        result = hexChars[remainder] + result; // Agrega el dígito hexadecimal a la izquierda.
        n /= 16; // Actualiza el cociente para continuar con el siguiente dígito.
    }

    return result;
}

int main() {
    int number;
    cout << "Ingrese un número entero en base 10: ";
    cin >> number;

    string hexValue = intToHex(number);

    cout << "El número en base 16 es: " << hexValue << endl;

    return 0;
}