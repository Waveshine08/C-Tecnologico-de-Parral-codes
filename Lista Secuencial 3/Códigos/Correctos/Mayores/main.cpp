#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

/*Variables*/
float a, b, c;

/*Funciones*/
float entrada();
void comp(float, float, float);
void salida(float, float, float);

int main(int argc, char** argv) {
	printf("Digite 3 numeros y este programa los ordenara de mayor a menor: ");
	a=entrada();
	b=entrada();
	c=entrada();
	comp(a,b,c);
	return 0;
}

float entrada(){
	float i;
	cin>>i;
	return i;
}

void comp(float A, float B, float C){
	if(A>B){
		if(A>C){
			if(B>C){
				salida(A,B,C);
			}
			else{
				salida(A,C,B);
			}
		}
	}
	if(B>A){
		if(B>C){
			if(A>C){
				salida(B,A,C);
			}
			else{
				salida(B,C,A);
			}
		}
	}
	if(C>A && C>B && A>B){
		salida(C,A,B);
	}
	if(C>A && C>B && B>A){
		salida(C,B,A);
	}
}

void salida(float A, float B, float C){
	printf("El orden de mayor a menor es: %.4f, %.4f y %.4f\n\n",A,B,C);
	system("pause");
}
