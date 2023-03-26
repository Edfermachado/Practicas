#include <stdio.h>

    int main(){

        int num1, num2, a, acum;    

        printf("Ingrese dos numeros\n");
        scanf("%d %d", &num1,&num2);
        a=1; 
        acum = 0;    
        while(a<num1){

            if(num1%a==0){
                acum = acum + a;
            }
            a++;
        }
        if(acum==num2){
            printf("Los numeros son amigos\n");
        }else{printf("Los numeros no son amigos\n");}
        printf("\n\n2Derechos reservados, Edwin Machado, Antonel Lopez");
        return 0;
    }