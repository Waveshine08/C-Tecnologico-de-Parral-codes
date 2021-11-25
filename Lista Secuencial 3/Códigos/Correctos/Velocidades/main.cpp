#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

/*Funciones*/
float numero();
void calculo(float,float,float,float,float,float);
void salida(float,float,float,float);

int main(int argc, char** argv) {
	float x01, v01, a01;
	float x02, v02, a02;
	printf("Este programa lleva a cabo el calculo del tiempo para que dos vehiculos a x velocidad, posicion y aceleracion; se encuentren. (Nota: Las unidades deben estar");
	printf("en un mismo sistema de unidades)\n");
	printf("Ingrese la posicion, velocidad y aceleracion del primer vehiculo separados por un espacio y en ese orden: ");
	x01=numero();
	v01=numero();
	a01=numero();
	printf("Ingrese la posicion, velocidad y aceleracion del primer vehiculo separados por un espacio y en ese orden: ");
	x02=numero();
	v02=numero();
	a02=numero();
	calculo(x01,v01,a01,x02,v02,a02);
	return 0;
}

float numero(){
	float r;
	cin>>r;
	return r;
}

void calculo(float x01,float v01,float a02,float x02,float v02,float a01){
	float a,b,c,T,T1,T2,x1,x2;
	a=(a01-a02)*0.5;
	b=(v01-v02);
	c=(x01-x02);
	T=pow(b,2)+(-4*a*c);
	if(T>0){
		T=sqrt(T);
		T1=((-1*b)+T)/(2*a);
		T2=((-1*b)-T)/(2*a);
		x1=x01+(v01*T1)+((0.5*a01)*pow(T1,2));
		x2=x02+(v02*T2)+((0.5*a02)*pow(T2,2));
		salida(T1,T2,x1,x2);
	}
}

void salida(float t1,float t2,float x1,float x2){
	printf("\t\t\t\t\t\t\tTIEMPO\t\tPOSICION\n");
	printf("El tiempo y aceleracion del primer vehiculo son: \t%.2f\t\t%.2f\n",t1,x1);
	printf("El tiempo y aceleracion del segundo vehiculo son:\t%.2f\t\t%.2f\n\n",t2,x2);
	system("pause");
}
