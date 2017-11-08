//biblioteca que sirve para calcular IVA

#define iva 0.16/*valor definido del IVA de un producto que no se modificará
(será un valor constante); y esta está de acuerdo al porcentaje de incremento 
de un producto, es decir 0.16 = 16% */

/*funcion IVA que se usara para calcular la cantidad de IVA, subtotal y total en un producto
y que mostrará en pantalla. Esta funcio es de tipo viod debido a que no es necesario regresar 
un valor a la función*/
void fnIva(float a){
	printf("subtotal = %f\n",a-(a*iva));
	printf("IVA (16%%) = %f\n",a*iva);
	printf("total = %f\n", a);
}

