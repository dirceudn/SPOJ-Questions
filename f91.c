
#include<stdio.h>

int main() {
    int valor, resultado;

    while ((scanf("%d",&valor) == 1) && (valor != 0)) {
        if (valor > 100) {
            resultado = valor - 10;
        }
        else {
            resultado = 91;
        }
        printf("f91(%d) = %d\n", valor, resultado);
    }
    return 0;
}