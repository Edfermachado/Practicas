#include <stdio.h>

    int main(){

            int a=1, b=1, cedula, prod=0, cedula_winner, descuento5=0, descuento3=0, ganadores=0, clientes=0;
            char etiqueta;
            char A = 'A', M ='M';
            float precio, monto, monto_alto=-1, porcentaje;

        do{
            printf("Ingrese la cedula\n");
            scanf("%d",&cedula);
            clientes++;
            do{
                printf("Ingrese la etiqueta del producto\n");
                scanf(" %c", &etiqueta);
                monto = 0;
                if(etiqueta == A || etiqueta == M){
                    printf("Ingrese el precio del producto\n");
                    scanf("%f", &precio);
                    monto = monto + precio;
                    prod++;
                }

                printf("Desea ingresar otro producto?\nSi[1]\nNo[0]\n");
                scanf("%d", &b);
                fflush(stdin);
            }while(b==1);

                if(prod<3){
                    printf("Este cliente no es valido para la promocion\n");
                     monto = 0;   
                }
                if(precio<999 && precio<5001){
                if(monto_alto<monto){
                    monto_alto = monto;
                    cedula_winner = cedula;
                    ganadores++;
                }

                if((cedula%10)%2==0){
                    descuento5++;
                }else{descuento3++;}}

            printf("Desea ingresar otro cliente?\nSi[1]\nNo[0]\n");
            scanf("%d", &a);
        }while(a==1);
        porcentaje = ((ganadores/clientes)*100);
        printf("El porcentaje de clientes ganadores del descuento es: %.2lf\n", porcentaje);
        printf("El ganador del gif es: %d\n", cedula_winner);
        printf("La cantidad de ganadores del descuento del 5 porciento son: %d\n", descuento5);
        printf("La cantidad de ganadores del descuento del 3 porciento son: %d\n", descuento3);
        printf("Derechos reservados, Edwin Machado, Antonel Lopez");
  
        
        return 0;
    }