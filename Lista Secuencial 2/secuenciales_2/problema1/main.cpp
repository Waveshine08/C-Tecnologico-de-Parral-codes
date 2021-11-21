#include <stdio.h>
#include <stdlib.h>

/*Variables*/
float T, X, Y, Z, V, Nt;

/*Funciones*/
float leer();
float calculo(float, float, float);
void salida (float, float, float);

int main()
{
    printf("Este programa lleva a cabo el calculo de su proximo pago de agua por su consumo al llenar una alberca.\n");
    printf("Para ello le pediré que ingrese algunos datos.\n");
    printf("Cual es la tarifa actual por metro cubico de agua en su localidad en pesos? ");
    T=leer();
    printf("Cual es el largo de su alberca en m? ");
    X=leer();
    printf("Cual es el ancho de su alberca en m? ");
    Y=leer();
    printf("Cual es la altura de su alberca en m? ");
    Z=leer();
    V=calculo(X,Y,Z);
    Nt=V*T;
    salida(T, V, Nt);
    system ("pause");
    return 0;
}

float leer(){
    float N=0;
    scanf("%f", &N);
    return N;
}

float calculo(float x, float y, float z){
    float C;
    C=x*y*z;
    return C;
}

void salida (float t, float v, float n){
    char cub=252;
    printf("La tarifa de agua por metro cubico en su localidad es de %10.4f y el volumen de su alberca es de %10.4f m%c", t, v, cub);
    printf("\nPor lo tanto su próximo pago es de: %10.4f\n", n);
}
