#include <stdio.h>

/*La empresa Tumalla.com es un fabricante por excelencia de todo tipo de mallas deportivas
entre sus productos estrellas se encuentran las mallas de tenis y las mallas de beisbol
la gerencia requiere controlar las ventas por dia de acuerdo a las siguientes politicas:

Si el cliente tienes mas de 5 years como comprador de mallas para beisbol tendra un
descuento del 8%, Si el comprador es de mallas para tenis tendra un descuento de 6%
El cliente que tenga un tiempo menor o igual a 5 years no tendra descuento, si el
cliente tiene mas de 15 years tendra un descuento del 30%.
El costo de las mallas para beisbol es de 50$ el metro
El costo de las mallas para beisbol es de 80$ el metro

1)Determinar el costo de la compra por cliente
2)El ingreso recibido por la empresa
3)La cantidad de mallas para beisbol vendidas
4)La cantidad de mallas para tenis vendidas
5)Cual de las dos mallas se vendio mas
6)Total de clientes que obtuvieron descuento
7)Cantidad total de descuento
8)Total de compras*/

int main(){
	
	#define preciom_beisbol 50 
	#define preciom_tenis 80

	int dia, produc, otra_venta, years, total_desclientes, compras;
	float cant_mtenis, cant_mbeisbol, precio, cant_mtenis_total, cant_mbeisbol_total, ingreso_empresa, total_des;

	compras=0;
	total_des = 0;
	total_desclientes = 0;
	ingreso_empresa = 0;
	cant_mbeisbol = 0;
	cant_mtenis = 0;
	cant_mtenis_total = 0;
	cant_mbeisbol_total =0;

		do{

do{
	printf("Ingrese el dia\n");
	scanf("%d", &dia);
}while(dia<0 || dia>31);

do{
	printf("Ingrese el producto a comprar\n Mallas de tenis[1]\n Mallas de beisbol[2]\n Ambas[3]\n");
	scanf("%d", &produc);
}while(produc<1 || produc>3);

	switch(produc){

	case 1:
		printf("Ingrese la cantidad de metros de mallas de tenis\n");
		scanf("%g",&cant_mtenis);
		precio = cant_mtenis * preciom_tenis;
		break;

	case 2:
		printf("Ingrese la cantidad de metros de mallas de beisbol\n");
		scanf("%g",&cant_mbeisbol);
		precio = cant_mbeisbol * preciom_beisbol;
		break;	

	case 3:
		printf("Ingrese la cantidad de metros de mallas de tenis y beisbol\n");
		scanf("%g %g",&cant_mtenis, &cant_mbeisbol);
		precio = (cant_mtenis * preciom_tenis)+(cant_mbeisbol*preciom_beisbol);
		break;	
	}

	do{
		printf("Que cantidad de years tiene el cliente comprando en esta tienda\n");
		scanf("%d", &years);
	}while(years<0);

	if(years>15){
		precio = precio - (precio*(8/100));
		total_des = total_des + (precio*(8/100));
		total_desclientes++;
	}else if(years>5){
		precio = precio - (precio*(6/100));
		total_desclientes++;
		total_des = total_des + (precio*(6/100));
	}

	cant_mtenis_total = cant_mtenis_total + cant_mtenis;
	cant_mbeisbol_total = cant_mbeisbol_total + cant_mbeisbol;
	ingreso_empresa = ingreso_empresa + precio;

	printf("El precio de la compra del cliente es: %g\n", precio);

	printf("Desea ingresar otra compra\n Si[1]\n No[2]\n");
	scanf("%d",&otra_venta);

	}while(otra_venta == 1);

	printf("El ingreso recibido por la empresa es:\n %g\n", ingreso_empresa);
	printf("La cantidad de mallas de tenis vendidas en mts es: %g\n", cant_mtenis_total);
	printf("La cantidad de mallas de beisbol vendidas en mts es: %g\n", cant_mbeisbol_total);

	if(cant_mtenis_total>cant_mbeisbol_total){
		printf("Las mallas de tenis se vendieron mas\n");
	}else{
		printf("Las mallas de beisbol se vendieron mas\n");
	}
	printf("La cantidad de clientes con descuentos son: %d\n", total_desclientes);
	printf("La cantidad total de descuentos es: %g\n", total_des);
	printf("\nDerechos reservados, Edwin Machado, C.I: 30.532.641");
	return 0;
}
