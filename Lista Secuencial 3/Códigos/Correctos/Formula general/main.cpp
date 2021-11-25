#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

/*Funciones*/
float leer();
void calculo(float, float, float);
void salida(int, float, float, float);

int main(int argc, char** argv) {
	float A, B, C;
	printf("Este programa lleva a cabo la resolucion de una ecuacion cuadratica del tipo ax2+bx+c=0.\nPara ello se solicitaran los siguientes datos:\n");
	printf("Valor numerico de a: ");
	A=leer();
	printf("Valor numerico de b: ");
	B=leer();
	printf("Valor numerico de c: ");
	C=leer();
	calculo(A,B,C);
	return 0;
}

float leer(){
	float X;
	cin>>X;
	return X;
}

void calculo(float a, float b, float c){
	int i=0;
	float R,R1,R2;
	R=pow(b,2)+(-4*a*c);
	if(R>0){
		i=0;
		R=sqrt(R);
		R1=((-1*b)+R)/(2*a);
		R2=((-1*b)-R)/(2*a);
	}
	if(R==0){
		i=1;
		R=sqrt(R);
		R1=((-1*b)+R)/(2*a);
		R2=((-1*b)-R)/(2*a);
	}
	if(R<0){
		i=2;
		R=sqrt(R*-1);
		R1=(-1*b)/(2*a);
		R2=(-1*b)/(2*a);
	}
	salida(i,R,R1,R2);
}

void salida(int I, float r, float r1, float r2){
	if(I==0){
		printf("La raiz era >0 y por ende la ecuacion posee 2 valoes, %.2f y %.2f son las soluciones.\n\n",r1,r2);
	}
	if(I==1){
		printf("La raiz era =0 y por ende la ecuacion posee un unico valor, %.2f es la solucion.\n\n",r1);
	}
	if(I==2){
		printf("La raiz era <0 y por ende la ecuacion posee 2 valoes complejos conjugagos, (%.2f -%8.2fi) y (%.2f +%8.2fi) son las soluciones.\n\n",r1,r,r2,r);
	}
	system("pause");
}
