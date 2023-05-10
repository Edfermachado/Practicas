#include <stdio.h>

int main() {
    int n, m;

    // Pedimos al usuario que ingrese el tamaño de la matriz
    printf("Ingrese el numero de filas y columnas de la matriz: ");
    scanf("%d %d", &n, &m);

    int matriz[n][m];
    int valorBuscado;
    int encontrado = 0;
    int inicio = 0;
    int fin = n * m - 1;
    int medio;

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
            printf("El valor %d se encuentra en la fila %d y la columna %d de la matriz.\n", valorBuscado, fila+1, columna+1);
            encontrado = 1;

            // Continuar buscando en la región izquierda
            int i = medio - 1;
            while (i >= inicio && matriz[i/m][i%m] == valorBuscado) {
                printf("El valor %d se encuentra en la fila %d y la columna %d de la matriz.\n", valorBuscado, i/m+1, i%m+1);
                i--;
            }

            // Continuar buscando en la región derecha
            int j = medio + 1;
            while(j <= fin && matriz[j/m][j%m] == valorBuscado){
                printf("El valor %d se encuentra en la fila %d y la columna %d de la matriz.\n", valorBuscado, j/m+1, j%m+1);
                j++;
            }

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