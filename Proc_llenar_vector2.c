#include <stdio.h>

void llenar_vector(int* t, int* vector_a){

    int n,a;
    int i = 0;

    do{

        printf("Ingrese un numero\n");    
        scanf("%d", &n);
        
        vector_a[i] = n;    

        i++;
        printf("Desea ingresar otro numero?\n si[1]\n no[2]\n");
        scanf("%d", &a);  
        *t = i;
    }while(a==1);
   
}

void imprimir_vector(int* vector_a, int t){
    for(int i=0;i<t;i++){
        printf("%d ", vector_a[i]);
    }
}

int main(){
    int t = 0;
    int vector_a[500];
    llenar_vector(&t, vector_a);
    printf("Cantidad de elementos: %d\n", t);
    imprimir_vector(vector_a, t); 
    return 0;
}