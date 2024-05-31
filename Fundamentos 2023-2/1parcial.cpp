#include <stdio.h>

//calcula el triangulo 
void pascual(int filas){
    int i, j, k, suma, espacio = 0;
    espacio = filas;
    
    for(i = 0; i <= filas; i++){
        suma = 1;
        int valor = 1;
        for(k = 0; k <= i; k++){
            valor = valor*(i-k)/(k+1);
            suma += valor;
        }
        printf("%d\n", suma);
    }
}
// Imprime la ultima linea y su suma
void last(int filas){
    int i, j, k, suma, espacio = 0;
    espacio = filas;
    
    for(i = filas; i == filas; i++){
        suma = 1;
        int valor = 1;
        for(j = espacio - (i); j > 0; j--){
            printf(" ");
        }
        for(k = 0; k <= i; k++){
            printf(" ");
            printf("%d",valor);
            valor = valor*(i-k)/(k+1);
            suma += valor;
        }
        printf(" la suma es: %d\n", suma);
    }
}

int main(){
    int filas;
    // Solicitar el numero de filas a visualizar
    printf("No.Filas: ");
    scanf(" %d",&filas);
    pascual(filas);
    printf("\n");
    last(filas);
}