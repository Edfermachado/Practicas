#include <stdio.h>

    int opcion; 
    
    struct Datos
    {
        int cedula;
        char nombre[30];
        int departamento;
        int cargo;
        float sueldo;
        char fecha[11];
    };
    
    FILE *Archivo_datos;
    
    int main(){
    
        struct Datos trabajador[10];
    Archivo_datos = fopen("trabajadores.txt","r");
    if(Archivo_datos==NULL){
        printf("No se pudo abrir el archivo");
        return 1;
    }
                int i = 0;
                while(!feof(Archivo_datos) && i < 10) {
                    fscanf(Archivo_datos, "%d %s %d %d %f %s", &trabajador[i].cedula, &trabajador[i].nombre, &trabajador[i].departamento,&trabajador[i].cargo, &trabajador[i].sueldo,&trabajador[i].fecha);
                     i++;
                        }
            fclose(Archivo_datos);

    do{
        int j;
        printf("[1]Ingresar\n[2]Consultar\n[3]Modificar\n[4]Eliminar\n[5]Salir\n");
        scanf("%d", &opcion);

        switch (opcion){
        case 1:
            for(j = 0;j<10;j++){
                printf("%d %s %d %d %f %s", trabajador[i].cedula, trabajador[i].nombre, trabajador[i].departamento, trabajador[i].cargo, trabajador[i].sueldo, trabajador[i].fecha);
            }
            break;
        case 2:
            printf("Consultar\n");
            break;
        case 3:
            printf("Modificar\n");
            break;
        case 4:
            printf("Eliminar\n");
            break;
        case 5:
            printf("Salir\n");
            break;
        }
    }while(opcion!=5);
    
        return 0;
    }