#include <stdio.h>

    float dinero, kilos_azucar, kilos_cafe,restante;

    int main(){

        printf("Ingrese una cantidad de dinero\n");
        scanf("%g", &dinero);

        kilos_azucar = dinero/3;
        kilos_cafe = (dinero/3)/0.72;
        restante = dinero-(dinero/3)-((dinero/3)/0.72);

        printf("Los kilos de azucar son: %.2f\nLos kilos de cafe son: %.2f\nEl dinero restante es: %.2f\n",kilos_azucar,kilos_cafe,restante);

        return 0;
    }