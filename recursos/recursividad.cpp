#include <stdio.h>

int main() {
    float numero;

    do {
        printf("Ingrese un número positivo: ");
        scanf("%f", &numero);

        if (numero <= 0) {
            printf("Por favor, ingrese un número positivo.\n");
        }
    } while (numero <= 0);

    printf("El número es positivo: %.2f\n", numero);

    return 0;
}