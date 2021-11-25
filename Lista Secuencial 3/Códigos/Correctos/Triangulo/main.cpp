#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

/*Funciones*/
float numero();
bool comp(float,float,float);
void salida(float,float,float);

int main(int argc, char** argv) {
	float a, b, c;
	bool R=0;
	printf("Este programa determina si un trigulo es un triangulo rectangulo o no en base a la medida de sus lados. Para ello digite la siguiente informacion:\n");
	printf("Cuales son las medidas de los 3 lados? ");
	a=numero();
	b=numero();
	c=numero();
	R=comp(a,b,c);
	if (R==1){
		salida(a,b,c);
	}
	system("pause");
	return 0;
}

float numero(){
	float i;
	cin>>i;
	return i;
}

bool comp(float A, float B, float C){
	float Hyp, i;
	bool rect=0;
	if(A>B && A>C){
		i=pow(B,2)+pow(C,2);
		if(i==pow(A,2)){
			rect=1;
		}
	}
	if(B>A && B>C){
		i=pow(A,2)+pow(C,2);
		if(i==pow(B,2)){
			rect=1;
		}
	}
	if(C>A && C>B){
		i=pow(A,2)+pow(B,2);
		if(i==pow(C,2)){
			rect=1;
		}
	}
	return rect;
}

void salida(float A, float B, float C){
	printf("Dado los lados de medidas %.4f, %.4f y %.4f\n",A,B,C);
	printf("En efecto se trata de un Triangulo Rectangulo\n\n");
}
