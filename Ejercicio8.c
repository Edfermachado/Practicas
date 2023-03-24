#include <stdio.h>

    int num1, num2, num3, num_mayor;

    int main(){

        printf("Ingrese tres numeros enteros\n");
        scanf("%d %d %d", &num1, &num2, &num3);

        if (num1<num2){
            num_mayor = num2;
        }else(num_mayor = num1);

        if (num_mayor<num3){
            num_mayor = num3;
        }
        
        printf("El numero mayor es: %d", num_mayor);
            

        return 0;
    }