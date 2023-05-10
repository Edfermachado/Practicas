#include <stdio.h>

    int n1, n2, m;
   
    int suma(int a, int b){
    int c;
    if(a>b){
        c = a;
    }else{
        c=b;
    }
       return c; 
}
    
    int main(){

        printf("Ingrese dos numeros\n");
        scanf("%d %d", &n1,&n2);
       
        m = suma(n1,n2);     
        printf("El numero mayor entre %d y %d es: %d", n1,n2,m);


        return 0;
    }



