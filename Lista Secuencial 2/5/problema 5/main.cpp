#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

/*Variables*/

/*Funciones*/
void entrada();
void calculo(float,float);
void salida(float, float, float);

int main()
{
    entrada();
    return 0;
}

void entrada (){
    float G,Vi;
    cout<<"Este programa realiza los calculos de un tiro parabolico."<<endl;
    cout<<"Que angulo en grados se lanzara el proyectil? ";
    cin>>G;
    cout<<"Que velocidad inicial en m/s llevara el proyectil? ";
    cin>>Vi;
    calculo(G,Vi);
}

void calculo(float Grad, float Vi){
    double PI=3.14159265358979323846;
    float G=9.81;
    float Vx,Vy,Gr,Hmax,Al,Ts,Tb,T;
    Gr=Grad*PI/180;
    Vy=Vi*sin(Gr);
    Vx=Vi*cos(Gr);
    Hmax=pow(Vy,2)/(2*G);
    Ts=Vy/G;
    Tb=sqrt((2*Hmax)/G);
    T=Ts+Tb;
    Al=Vx*T;
    salida(Hmax, T, Al);
}

void salida(float Hmax, float T, float Al){
    system("cls");
    printf("Su altura maxima es de: %10.4f metros\n", Hmax);
    printf("Su alcance es de: %10.4f metros\n", Al);
    printf("Su tiempo de vuelo es de: %10.4f segundos\n", T);
    system("pause");
}
