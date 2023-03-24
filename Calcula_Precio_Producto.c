#include <stdio.h>

/*Programa que calcula el precio de un producto de una empresa de venta de recambios de automoviles*/

float precio_neto, precio_coste, margen;


int main(){

       printf("¿Cual es el precio de coste?\n"); 
        scanf("%f", &precio_coste);

        printf("¿Cual es el margen?\n"); 
        scanf("%f", &margen);

        precio_neto = precio_coste*(100+margen)/100;
        printf("El precio neto de este producto es de %f euros \n", precio_neto);


    return 0; 
}