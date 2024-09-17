#include <stdio.h>

void mover(int n, char origen, char destino, char auxiliar) {
    if (n == 1) {
        printf("Mover disco 1 de %c a %c\n", origen, destino);
        return;
    }
    mover(n - 1, origen, auxiliar, destino);
    printf("Mover disco %d de %c a %c\n", n, origen, destino);
    mover(n - 1, auxiliar, destino, origen);
}

int main() {
    int discos = 4;  // Puedes cambiar el número de discos aquí
    printf("Solución para %d discos:\n", discos);
    mover(discos, 'A', 'C', 'B');
    return 0;
}
