#include <stdio.h>

int main() {
    int n, m;

    // Pedimos al usuario que ingrese el tamaño de la matriz
    printf("Ingrese el numero de filas y columnas de la matriz: ");
    scanf("%d %d", &n, &m);

    int matriz[n][m];
    int valorBuscado = 0;
    int encontrado = 0;
    int inicio = 0;
    int fin = n * m - 1;
    int medio;
    int fposicion = 0;
    int cposicion = 0;

    // Pedimos al usuario que llene la matriz
    printf("Ingrese los elementos de la matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Pedimos al usuario que ingrese el valor a buscar
    printf("Introduce el valor a buscar: ");
    scanf("%d", &valorBuscado);

    while (inicio <= fin) {
        medio = (inicio + fin) / 2;

        int fila = medio / m;
        int columna = medio % m;

        if (matriz[fila][columna] == valorBuscado) {
            encontrado = 1;
            fposicion = fila+1;
            cposicion = columna+1;
            printf("El valor %d se encuentra en la fila %d y la columna %d de la matriz.\n", valorBuscado, fposicion, cposicion);
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