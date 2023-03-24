#include <stdio.h> 

/*Calcula el resultado de la ecuacion a=b**2+1 */

int a, b = 0;

int main(){

    a = b*b+1;

    printf("Si b=%d, entonces a =%d\n", b,a);

    b=2;
    a = b*b+1;
    
    printf("Si b=%d, entonces a=%d\n", b,a);

    b=-2;    
    a = b*b+1;

    printf("Si b=%d, entonces a=%d\n", b,a);


    return 0;
}