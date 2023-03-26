#include<stdio.h>

int main()
{
    int n, i, num, numI, cant3=0, cant5=0;
    int D1, D2, D3;
    
    printf("Ingrese el valor de N: \n");
    scanf("%d", &n);
    
    for(i=1; i <= n; i++){
    printf("Ingrese el numero: \n");
    scanf("%d", &num);
     if(num > 99 && num < 1000){
     D3 = num % 10;
     D2 = (num / 10) % 10;
     D1 = ((num / 10) / 10) % 10;
     numI = (D3 * 100) + (D2 * 10) + (D1 * 1);
     printf("El numero invertido de %d es %d\n", num, numI);
     }else{
       if(num == 3){
       cant3 ++;}
       else{
       if(num == 5){
       cant5 ++;}
       }
     }
    }
    printf("La cantidad de numeros 3 ingresados es %d\n", cant3);
    printf("La cantidad de numeros 5 ingresados es %d\n", cant5);
    printf("Derechos Reservados, Antonel Lopez, Edwin Machado");
    return 0;
}