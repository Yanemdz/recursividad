#include<stdio.h>//definicion de la función
int suma(int a, int b){
    return a + b;
}
int main(){
    int resultado = suma(5, 3);
    printf("La suma de 5 y 3 es de: %d ", resultado);
    return 0;
}