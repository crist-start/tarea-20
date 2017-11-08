#include <stdio.h>
#include "iva.h"//uso de biblioteca no integrada en el IDE

//prototipo de funcion fncuadro
void fncuadro(int, int);

int main () {
	//inicializacion de variables que definiran el largo y  ancho del cuadro
	int largo, ancho;
	//peticion al usuario para que ingrese los datos para asignar largo y ancho del cuadro
	printf("formacion de un cuadro\n");
	printf("ingresa largo del cuadro:");
	scanf("%i",&largo);
	printf("ingresa ancho del cuadro:");
	scanf("%i",&ancho);
	//uso de fucion cuadro (fncuadro)
	fncuadro(largo, ancho);
	//iniciacion de variable que obtendra el precio de un producto
	float precio;
	//peticion al usuario para ingresar precio de un producto
	printf("calculo del iva y subtotal de un producto\n");
	printf("ingresa precio del producto:");
	scanf("%f",&precio);
	//uso de funcion fnIva que esta en la biblioteca iva.h
	fnIva(precio);
	return 0;
}


/* Función para formar un cuadro con largo y ancho. NOTA: se usa una iniciacion de tipo vacio (void)
debido a que no es necesario regresar un valor a la funcion*/
void fncuadro(int a,int b){
	/*iniciación de variables: var sera usado para formar el largo mientras var2 formara el ancho
	la figura(de acuerdo a lo que se le asigno a las variables a y b)*/
	int var, var2;
	for(var=1; var<=a; var++){
		for(var2=1; var2<=b; var2++){
			printf("*");
		}
		printf("\n");
	}
}
