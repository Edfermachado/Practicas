#include <stdio.h>
    
    int num;

    int main(){

        printf("Ingrese un numero\n");
        scanf("%d",&num);

        if(num%2 == 0){
            printf("El numero es par");
        }else(printf("El numero es impar"));

        return 0;
    }