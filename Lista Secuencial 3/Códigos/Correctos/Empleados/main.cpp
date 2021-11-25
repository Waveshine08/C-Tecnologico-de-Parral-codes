#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

/*Funciones*/
void leer();
void calculo(char*, char*, char, int);
void salida(char* , char*, char, float);

char *nombre(char*);
char categoria();
int horas();

/*Variables*/


int main(int argc, char** argv) {
	printf("Este programa lleva a cabo el calculo del sueldo mensual de un empleado, en base a su categoria y sus horas de trabajo.\nAdemas determina las bonificaciones por 150 horas de trabajo. Para ello se le solicitaran los siguientes datos:\n");
	leer ();
	system("pause");
	return 0;
}

void leer (){
	printf("Cual es el nombre de su empleado? ");
	char N[20]; 
	nombre(N);
	printf("Cual es el apellido de su empleado? ");
	char A[20]; 
	nombre(A);
	printf("Cual es su categoria? ");
	char C; 
	C = categoria();
	printf("Cuantas horas trabajo? ");
	int H;
	H = horas();
	calculo(N,A,C,H);
}

char *nombre (char* str){
	cin>>str;
}

char categoria(){
	char C;
	cin>>C;
	return C;
}

int horas(){
	int H;
	cin>>H;
	return H;
}

void calculo(char *N, char *A, char C, int H){
	float M;
	switch (C){
		case 'A':{
			M=H*26.90;
			break;
		} 
		case 'B':{
			M=H*24.30;
			break;
		} 
		case 'C':{
			M=H*21.50;
			break;
		} 
	}
	if(H>150){
		M+=(M*0.05);
	}
	salida(N,A,C,M);
}

void salida(char *N, char *A, char C, float M){
	system("cls");
	cout<<"EMPLEADO\tCATEGORIA\tSUELDO\n";
	printf("%s %s\t%c\t\t%.2f\n\n", N,A,C,M);
}
