#include <stdio.h>

#define N 3

int main() {
    int matriz[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int valorBuscado;
    int encontrado = 0;
    int inicio = 0;
    int fin = N*N - 1;
    int medio;

    printf("Introduce el valor a buscar: ");
    scanf("%d", &valorBuscado);

    while (inicio <= fin) {
        medio = (inicio + fin) / 2;

        int fila = medio / N;
        int columna = medio % N;

        if (matriz[fila][columna] == valorBuscado) {
            printf("El valor %d se encuentra en la fila %d y la columna %d de la matriz.\n", valorBuscado, fila+1, columna+1);
            encontrado = 1;
            break;
        } else if (matriz[fila][columna] < valorBuscado) {
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }

    if(!encontrado) {
        printf("El valor %d no se encuentra en la matriz.\n", valorBuscado);
    }

    return 0;
}