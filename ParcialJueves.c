#include <stdio.h>

int main(){

        int asalto, Fighter1_white[12], Fighter1_blue[12], Fighter1_pink[12], rounds[12];
        int Fighter2_white[12], Fighter2_blue[12], Fighter2_pink[12], opcion1, opcion2;
        int puntaje_total_white1, puntaje_total_blue1, puntaje_total_pink1;
        int puntaje_total_white2, puntaje_total_blue2, puntaje_total_pink2;


         asalto = 1;   
        do{
            
            printf("Ingrese la puntuacion del primer peleador\n");
            do{  
            printf("Ingrese puntuacion de la tarjeta white\n");
            scanf("%d", &Fighter1_white[asalto]);
            }while(Fighter1_white[asalto]<0 || Fighter1_white[asalto]>10);

            do{  
            printf("Ingrese puntuacion de la tarjeta blue\n");
            scanf("%d", &Fighter1_blue[asalto]);
            }while(Fighter1_blue[asalto]<0 || Fighter1_blue[asalto]>10);

            do{  
            printf("Ingrese puntuacion de la tarjeta pink\n");
            scanf("%d", &Fighter1_pink[asalto]);
            }while(Fighter1_pink[asalto]<0 || Fighter1_pink[asalto]>10);
   
            printf("El luchador toco la luna?\n Si[1]\n No[2]");
            scanf("%d", opcion1);
                if (opcion1 == 1)
            {
                Fighter1_white[asalto] = Fighter1_white[asalto] - 2;
                Fighter1_blue[asalto] = Fighter1_blue[asalto] - 2;
                Fighter1_pink[asalto] = Fighter1_pink[asalto] -2;
            }

            printf("Ingrese la puntuacion del segundo peleador\n");
            do{  
            printf("Ingrese puntuacion de la tarjeta white\n");
            scanf("%d", &Fighter2_white[asalto]);
            }while(Fighter2_white[asalto]<0 || Fighter2_white[asalto]>10);

            do{  
            printf("Ingrese puntuacion de la tarjeta blue\n");
            scanf("%d", &Fighter2_blue[asalto]);
            }while(Fighter2_blue[asalto]<0 || Fighter2_blue[asalto]>10);

            do{  
            printf("Ingrese puntuacion de la tarjeta pink\n");
            scanf("%d", &Fighter2_pink[asalto]);
            }while(Fighter2_pink[asalto]<0 || Fighter2_pink[asalto]>10);

            printf("El luchador toco la luna?\n Si[1]\n No[2]");
            scanf("%d", opcion2);
                if (opcion2 == 1)
            {
                Fighter2_white[asalto] = Fighter2_white[asalto] - 2;
                Fighter2_blue[asalto] = Fighter2_blue[asalto] - 2;
                Fighter2_pink[asalto] = Fighter2_pink[asalto] -2;
            }
            

            asalto++;
        }while(asalto<12);

            puntaje_total_white1 = puntaje_total_blue1 = puntaje_total_pink1 = 0;
            puntaje_total_white2 = puntaje_total_blue2 = puntaje_total_pink2 = 0;
          
            for(int j = 1; j<12; j++){
                puntaje_total_white1= puntaje_total_white1 + Fighter1_white[asalto]; 
                puntaje_total_blue1 = puntaje_total_blue1 + Fighter1_blue[asalto];
                puntaje_total_pink1 = puntaje_total_pink1 + Fighter1_pink[asalto];
                
                puntaje_total_white2= puntaje_total_white2 + Fighter2_white[asalto]; 
                puntaje_total_blue2 = puntaje_total_blue2 + Fighter2_blue[asalto];
                puntaje_total_pink2 = puntaje_total_pink2 + Fighter2_pink[asalto];
            }


        

    return 0;
}