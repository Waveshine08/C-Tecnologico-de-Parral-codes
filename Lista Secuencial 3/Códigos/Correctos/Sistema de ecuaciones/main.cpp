#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

/*Variables*/
float a, b, c, d, e, f;

/*Funciones*/
float numero();
void calculo(float,float,float,float,float,float);
void salida(float,float);

int main(int argc, char** argv) {
	printf("Este programa lleva a cabo la resolucion de un sistema de ecuaciones del tipo:\n");
	printf("ax + by = c\ndx + ey = f\n");
	printf("A partir de los coeficientes a, b y c; ingrse los valores.\n");
	printf("Valor de a: ");
	a=numero();
	printf("Valor de b: ");
	b=numero();
	printf("Valor de c: ");
	c=numero();
	printf("A partir de los coeficientes d, e y f; ingrse los valores.\n");
	printf("Valor de d: ");
	d=numero();
	printf("Valor de e: ");
	e=numero();
	printf("Valor de f: ");
	f=numero();
	calculo(a,b,c,d,e,f);
	system("pause");
	return 0;
}

float numero(){
	float i;
	cin>>i;
	return i;
}

void calculo(float a,float b,float c,float d,float e,float f){
	float x, y;
	if((a*f)-(b*e)!=0){
		x=((c*e)-(b*f))/((a*e)-(b*d));
		y=((a*f)-(c*d))/((a*e)-(b*d));
		salida(x,y);
	}
	else{
		printf("El sistema no posee una solucion");
	}
}

void salida(float x, float y){
	printf("El resultado para x es: %.4f\n",x);
	printf("Y el resultado para y es: %.4f\n\n",y);
}
