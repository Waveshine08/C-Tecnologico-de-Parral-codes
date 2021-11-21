#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

/*Variables*/
double PI=3.14159265358979323846;
float r= 3.3;
float h= 2.5;

/*Funciones*/
void area(float,float,double);
void volumen(float,float,float);
void salida(float,float);

int main()
{
    printf("Este programa lleva el calculo de area y volumen de un cilindro de radio 3.3 unidades y altura de 2.5 unidades\n");
    area(r,h,PI);
    return 0;
}

void area(float R, float H, double P){
    float Ac,Ar,At;
    Ac=(pow(R,2))*P;
    Ar=((R*2)*P)*H;
    At=Ac+Ac+Ar;
    volumen(Ac, H, At);
}

void volumen (float C, float Al, float A){
    float V;
    V=C*Al;
    salida(A,V);
}

void salida(float Ar, float Vo){
    printf("Su area total es de %9.4f unidades cuadradas y su volumen es de %9.4f unidades cubicas\n", Ar, Vo);
    system("pause");
}
