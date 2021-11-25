#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

/*Funciones*/
float numero();
char letra();
void calculo(float, char);
void salida(float,float,float,int);


int main(int argc, char *argv[]) {
	float T;
	char E;
	printf("Este programa convierte valores de temperaturas a las escalas Kelvin, Celsius y Farenheit.\n");
	printf("Que valor de temperatura posee? ");
	T=numero();
	printf("En que escala se encuentra? (K para Kelvin, C para Celsius, F para Farenheit) ");
	E=letra();
	calculo(T,E);
	return 0;
}

float numero(){
	float G;
	scanf("%f",&G);
	return G;
}

char letra(){
	char X;
	cin>>X;
	return X;
}

void calculo(float T, char E){
	int i=0;
	float Nt1;
	float Nt2;
	switch(E){
		case'K':{
			i=0;
			Nt1=T-273.15;
			Nt2=(Nt1*1.8)+32;
			break;
		}
		case'C':{
			i=1;
			Nt1=T+273.15;
			Nt2=(T*1.8)+32;
			break;
		}
		case'F':{
			i=2;
			Nt1=(T-32)/1.8;
			Nt2=Nt1+273.15;
			break;
		}
	}
	salida(T,Nt1,Nt2,i);
}

void salida (float T, float Nt1, float Nt2, int i){
	system("cls");
	if (i==0){
		printf("Su temperatura de %.2f K\n",T);
		printf("Equivale a %.2f C\n",Nt1);
		printf("Equivale a %.2f F\n\n",Nt2);
	}
	if (i==1){
		printf("Su temperatura de %.2f C\n",T);
		printf("Equivale a %.2f K\n",Nt1);
		printf("Equivale a %.2f F\n\n",Nt2);
	}
	if (i==2){
		printf("Su temperatura de %10.2f F\n",T);
		printf("Equivale a %.2f C\n",Nt1);
		printf("Equivale a %.2f K\n\n",Nt2);
	}
	system("pause");
}
