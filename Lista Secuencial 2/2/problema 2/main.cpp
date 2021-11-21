#include <iostream>

using namespace std;

/*Variables*/
int H;
float T, F, M, h1, m1;

/*Funciones*/
float leer();
float calculo(int, float);
void salida(float, int, int, int, float);

int main()
{
    cout<<"Este programa automatiza el proceso de cobro para un estacionamiento por hora y fraccion."<<endl;
    cout<<"Cual es el costo de una hora o fraccion? ";
    T=leer();
    cout<<"Cuantas horas completas estuvo estacionado? ";
    H=leer();
    h1=H;
    cout<<"Cuantos minutos estuvo estacionado? ";
    M=leer()/60;
    m1=M;
    H+=M+0.9999999999999;
    F=calculo(H,T);
    system("cls");
    salida(T,H,F,h1,m1);
    system("pause");
    return 0;
}

float leer (){
    float N;
    cin>>N;
    return N;
}

float calculo(int x, float y){
    float R;
    R=x*y;
    return R;
}

void salida(float t, int h, int f, int g, float m){
    cout<<"Por un tiempo de "<<g<<" horas y una fraccion de "<<m<<" hora, con un precio de "<<T<<" por hora o fraccion\n";
    cout<<"Es un precio total de: "<<F<<endl;
}
