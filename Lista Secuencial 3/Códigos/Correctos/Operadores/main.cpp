#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

/*Funciones*/
float numero();
void calculo(float,char,float);
char operador();
void salida(float);

int main(int argc, char** argv) {
	float N1;
	float N2;
	char X;
	printf("Este programa realiza las 4 operaciones básicas de suma, resta, multiplicacion y division.\n");
	printf("(Los operadores son: + para suma, - para resta, * para multiplicacion y / para division).\n");
	printf("Para ello digite un numero seguido de un operador y luego el siguiente numero: ");
	N1=numero();
	X=operador();
	N2=numero();
	calculo(N1,X,N2);
	return 0;
}

float numero(){
	float G;
	cin>>G;
	return G;
}

char operador(){
	char G;
	cin>>G;
	return G;
}

void calculo(float Y1, char X1, float Y2){
	float R;
	switch(X1){
		case'+':{
			R=Y1+Y2;
			break;
		}
		case'-':{
			R=Y1-Y2;
			break;
		}
		case'*':{
			R=Y1*Y2;
			break;
		}
		case'/':{
			R=Y1/Y2;
			break;
		}
	}
	salida(R);
}

void salida(float R1){
	printf("El resultado es: %.4f\n\n",R1);
	system("pause");
}
