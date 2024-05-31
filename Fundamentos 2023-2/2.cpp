#include <stdio.h>

int main (){
    // Hace que se repita por siempre
    while (1){
        // Solicita ingresar la cantidad de números par generar desde 1 hasta el número que ingresa
        int n, m;
        printf ("\n");
        printf ("Ingrese el numero de elementos: ");
        scanf ("%d", &n);

        // Establece que si el numero ingresado es '0', el programa se termina
        if (n == 0){
            break;
        }
        // Imprime el número ingresado seguido de ':' y un espacio
        printf ("%d: ", n);

        // Inicializar la lista de números desde 1 hasta n
        int i, num[n], eliminados = 0;
        
        // Genera elementos en la lista principal
        for (i = 0; i < n; i++){
            num[i] = i + 1;
        }
        // Al principio se borran la mitad de elementos, 
        eliminados = n / 2;

        // Calcular números afortunados
        for (m = 2; m <= n; m++){
            int j = 0, nueva[n], k;

            for (i = 0; i < n; i++){
                // Define el tamaño del vector después de eliminar los indicados
                int pollo = n - eliminados;
                int nueva[pollo];
                
                // Se guardan en la nueva lista los elementos que cumplen con la condición
                if ((i = 1) && ((i * m) % m) != 0){
                    nueva[j] = num[i];
                    j++;
                }

                // Por cada elemento que no cumple la condición y se no se guarda, se añade +1 al contador de 'eliminados'
                else{
                    eliminados++;
                }
            }

            // Define el tamaño de la nueva lista de los números afortunados
            int restantes = n - eliminados;
            eliminados = n - restantes;
            n = restantes;
            // Copiar nuevos números a la lista principal
            for (i = 0; i < n; i++){
                num[i] = nueva[j];
            }
        }

         // Mostrar números afortunados en orden decreciente
        for (i = n - 1; i >= 0; i--){
            printf (" %d  ", num[i]);
        }
        printf ("\n");
    }
    return 0;

}   // Fin del programa