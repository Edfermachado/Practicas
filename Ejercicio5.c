#include <stdio.h>

    int v1,v2;

    int main(){

        printf("Ingrese dos numeros enteros\n");
        scanf("%d %d", &v1,&v2);

            v1 = v1+v2;
            v2 = v1-v2;
            v1 = v1-v2;

            printf("La variable 1 es: %d\n La variable 2 es: %d", v1, v2);

        return 0;
    }