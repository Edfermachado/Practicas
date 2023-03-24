#include<stdio.h>

float a,b,c;
double media;

int main()
{
    a=b=c=-1;
    while(a<0 || a>21){
    printf("Ingrese la primera nota\n");
    scanf("%g", &a);}
    
    while(b<0 || b>21){
    printf("Ingrese la segunda nota\n");
    scanf("%g", &b);}
    
    while(c<0 || c>21){
    printf("Ingrese la tercera nota\n");
    scanf("%g", &c);}
    
    
    media = (a+b+c)/3;
    
    printf("La media es: %g", media);
    return 0;
}