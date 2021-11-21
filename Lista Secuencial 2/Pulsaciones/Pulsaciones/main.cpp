#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

/*Variables*/
int edad, R;
char genero[6];

/*Funciones*/
int gender(char [6]);
int age();

int main() {
	char inter=168;
	cout<<"Este programa realiza el calculo de las pulsaciones que debe tener una persona por cada 10 segundos de ejercicio aerobico.\n";
	cout<<inter<<"Es usted un hombre una mujer? ";
	scanf("%s", genero);
	edad=age();
	R=gender(genero);
	cout<<genero<<edad<<R;
	system("pause");
	return 0;
}

int age (){
	int e;
	char inter2=168;
	printf("Cual es su edad? ");
	scanf("%d", &e);
	return e;
}

int gender (char com[6]){
	int g;
	if (com=="Hombre" or com=="HOMBRE" or com=="hombre" or com=="H" or com=="h"){
		g=0;
	}
	return g;
}
