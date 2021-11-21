#include <iostream>
#include <stdio.h>

using namespace std;

/*variables*/
int Dias;
float Hotel, Comida, Diarios, Total;

/*Funciones*/
float entrada();
float calculo(int);
void salida(int, float, float, float, float);

int main()
{
    cout<<"Este programa lleva a cabo el calculo para el total del cheque a dar a un empleado por viaje.\n";
    printf("Para ello se le solicitan los siguientes datos:\n");
    cout<<"Que cantidad de dias estara de viaje? ";
    Dias=entrada();
    cout<<"Cuanto dinero dispondra para el hotel? ";
    Hotel=entrada();
    cout<<"Cuanto dinero dispondra para para comida? ";
    Comida=entrada();
    Diarios=calculo(Dias);
    Total=Hotel+Comida+Diarios;
    salida(Dias, Hotel, Comida, Diarios, Total);
    system("pause");
    return 0;
}

float entrada(){
    float j;
    cin>>j;
    return (j);
}

float calculo(int g){
    int r;
    r=g*100;
    return r;
}

void salida(int d, float h, float c, float di, float t){
    system("cls");
    cout<<"Por un total de "<<d<<" dias se dan los siguientes pagos.\n";
    printf("Para Hotel: %12.4f pesos\n", h);
    printf("Para Comida: %12.4f pesos\n", c);
    printf("Mas 100.00 pesos diarios diarios para otros gastos: %12.4f pesos\n", di);
    printf("Da un total de: %12.4f pesos\n", t);
}
