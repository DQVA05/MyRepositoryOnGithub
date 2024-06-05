#include <stdio.h>

int main() {
    int num1 = 0, num2 = 1, suma;
    int length = 10;
    int fibonacci[length]; // Definimos un arreglo de tamaño 50
    int i;
    fibonacci[0] = num1;
    fibonacci[1] = num2;

    printf("Los primeros 50 numeros de la sucesion de Fibonacci son:\n");
    printf("%d, %d", num1, num2);

    for ( i = 2; i < length; i++) {
        suma = num1 + num2;
        fibonacci[i] = suma; // Almacenamos el número en el arreglo
        num1 = num2;
        num2 = suma;
        printf(", %d", fibonacci[i]);
    }

    printf("\n");

    return 0;
}
