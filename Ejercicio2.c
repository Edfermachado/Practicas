#include<stdio.h>
#include<math.h>
float arista;

int main()
{
    arista=-1;
    
    while(arista<0){
    printf("Ingrese la arista\n");
    scanf("%g", &arista);
    if(arista<0){
    printf("El valor de la arista tiene que ser positivo\n");}
    }
    arista = pow(arista,3);
    
    printf("El volumen del cubo es: %g", arista);
    
    
    return 0;
}