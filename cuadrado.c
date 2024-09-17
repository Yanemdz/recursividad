#include <stdio.h>//definicion de la funcion suma
int cuadrado(int x){
    return x * x;
}

int main(){
    int num = 4;
    int resultado = cuadrado(num);
    printf("El cuadrado de %d es:", num, resultado);
    return 0;
}