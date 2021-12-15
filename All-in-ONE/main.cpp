#include <iostream>
#include <windows.h>
#include <string.h>
#include <conio.h>

using namespace std;

#ifndef MAX
#define MAX 100
#endif

int sel;


typedef struct{
	int atn;
	int sub;
	string name;
	float negative;
	int oxi[10];
	float PA;
}Ele;

typedef struct{
	int Csub;
	float prom;
	string name;
	float neg;
}Comp;


void Selector(int);
void Nega();
void SubGen(int,float);
Comp Generador();
Ele Name(Ele);
Ele Element();

int main(int argc, char** argv) {
	cout<<"Seleccionar cualquiera de las siguiente opciones:\n";
	cout<<"1.- Datos atomicos.\n";
	cin>>sel;
	Selector(sel);
	system("pause");
	return 0;
}

void Selector(int s){
	int i=0;
		switch(s){
			case 1:{
				Nega();
				break;
			}
		}	
}

void Nega(){
	Comp finalCo;
	finalCo = Generador();
}

Comp Generador(){
	system("cls");
	int e, s, f, i=0,c=0;
	int cN;
	Ele nElement[20];
	Comp nComp;
	cout<<"Cuantos elementos tiene el compuesto? ";
	cin>>cN;
	for(int k=0;k<20;k++){
		nElement[k].atn=0;
	}
	while(i!=1){
		while(f!=1){
			nElement[c] = Element();
			cout<<"El elemento ingresado es: "<<nElement[c].name<<endl;
			cout<<"El subindice ingresado es: "<<nElement[c].sub<<endl;
			cout<<"Es correcto? [S/N] \n";
			getch();
			if(GetAsyncKeyState(0x53)){
				f=1;
			}
		}
		f=0;
		cout<<"Su electronegatividad es de: "<<nElement[c].negative<<endl;
		for(int l=0; l<10; l++){
			if(nElement[c].oxi[l]!=10){
				cout<<"Numero de oxidacion: "<<nElement[c].oxi[l]<<endl;
			}
		}
		SubGen(nElement[c].sub,nElement[c].PA);
		cout<<"Para dejar de ingresar elementos presione X.\n";
		getch();
		if(GetAsyncKeyState(0x58)){
			i=1;
		}
		system("cls");
		c++;
	}
	for(int j=0; j<cN; j++){
		if(nElement[j+1].atn==0 and nElement[j-1].atn ==16){
			nComp.prom=(nElement[j].negative+nElement[j-1].negative)/2;
			nComp.neg+=nComp.prom;
			nComp.neg-=nElement[j].negative;
			if(nComp.neg<0){
				nComp.neg=nComp.neg*-1;
			}
		}
		else{
			if (nElement[j].negative>nElement[j+1].negative){
				nComp.neg=nElement[j].negative-nElement[j+1].negative;
			}
			if (nElement[j].negative<nElement[j+1].negative){
				nComp.neg=nElement[j+1].negative-nElement[j].negative;
			}
		}
	}
	return nComp;
}

void SubGen(int s,float p){
	cout<<"PA= "<<p<<" * "<<s<<" = "<<p*s<<endl;
}

Ele Element(){
	Ele newElement;
	cout<<"El elemento por su numero atomico: ";
	cin>>newElement.atn;
	cout<<"Su subindice: ";
	cin>>newElement.sub;
	newElement=Name(newElement);
	return newElement;
}

Ele Name(Ele n){
	for(int i=0;i<10;i++){
		n.oxi[i]=10;
	}
	switch(n.atn){
		case 1:{
			n.name="H";
			n.oxi[0]=1;
			n.oxi[1]=-1;
			n.PA=1.008;
			n.negative=2.2;
			break;
		}
		case 2:{
			n.name="He";
			n.PA=4.003;
			n.negative=0;
			break;
		}
		case 3:{
			n.name="Li";
			n.oxi[0]=1;
			n.PA=6.940;
			n.negative=0.98;
			break;
		}
		case 4:{
			n.name="Be";
			n.oxi[0]=2;
			n.PA=9.012;
			n.negative=1.57;
			break;
		}
		case 5:{
			n.name="B";
			n.oxi[0]=3;
			n.PA=10.81;
			n.negative=2.04;
			break;
		}
		case 6:{
			n.name="C";
			n.oxi[0]=4;
			n.oxi[1]=3;
			n.oxi[2]=2;
			n.oxi[3]=1;
			n.oxi[4]=0;
			n.oxi[5]=-1;
			n.oxi[6]=-2;
			n.oxi[7]=-3;
			n.oxi[8]=-4;
			n.PA=12.011;
			n.negative=2.55;
			break;
		}
		case 7:{
			n.name="N";
			n.oxi[0]=5;
			n.oxi[1]=4;
			n.oxi[2]=3;
			n.oxi[3]=2;
			n.oxi[4]=-3;
			n.PA=14.007;
			n.negative=3.04;
			break;
		}
		case 8:{
			n.name="O";
			n.oxi[0]=-1;
			n.oxi[1]=-2;
			n.PA=15.999;
			n.negative=3.34;
			break;
		}
		case 9:{
			n.name="F";
			n.oxi[0]=-1;
			n.PA=18.998;
			n.negative=3.98;
			break;
		}
		case 10:{
			n.name="Ne";
			n.PA=20.180;
			n.negative=0;
			break;
		}
		case 11:{
			n.name="Na";
			n.oxi[0]=1;
			n.PA=22.990;
			n.negative=0.93;
			break;
		}
		case 12:{
			n.name="Mg";
			n.oxi[0]=2;
			n.PA=24.305;
			n.negative=1.31;
			break;
		}
		case 13:{
			n.name="Al";
			n.oxi[0]=3;
			n.PA=26.982;
			n.negative=1.61;
			break;
		}
		case 14:{
			n.name="Si";
			n.oxi[0]=4;
			n.oxi[1]=-4;
			n.PA=28.085;
			n.negative=1.9;
			break;
		}
		case 15:{
			n.name="P";
			n.oxi[0]=5;
			n.oxi[1]=3;
			n.oxi[2]=-3;
			n.PA=30.974;
			n.negative=2.19;
			break;
		}
		case 16:{
			n.name="S";
			n.oxi[0]=6;
			n.oxi[1]=4;
			n.oxi[2]=2;
			n.oxi[3]=-2;
			n.PA=32.060;
			n.negative=2.58;
			break;
		}
		case 17:{
			n.name="Cl";
			n.oxi[0]=7;
			n.oxi[1]=5;
			n.oxi[2]=3;
			n.oxi[3]=1;
			n.oxi[4]=-1;
			n.PA=35.45;
			n.negative=3.16;
			break;
		}
		case 18:{
			n.name="Ar";
			n.PA=39.95;
			n.negative=0;
			break;
		}
		case 19:{
			n.name="K";
			n.oxi[0]=1;
			n.PA=39.098;
			n.negative=0.82;
			break;
		}
		case 20:{
			n.name="Ca";
			n.oxi[0]=2;
			n.PA=40.078;
			n.negative=1;
			break;
		}
		case 21:{
			n.name="Sc";
			n.oxi[0]=3;
			n.PA=44.956;
			n.negative=1.36;
			break;
		}
		case 22:{
			n.name="Ti";
			n.oxi[0]=4;
			n.oxi[1]=3;
			n.PA=47.867;
			n.negative=1.54;
			break;
		}
		case 23:{
			n.name="V";
			n.oxi[0]=5;
			n.oxi[1]=4;
			n.oxi[2]=3;
			n.oxi[3]=2;
			n.oxi[4]=0;
			n.PA=50.942;
			n.negative=1.63;
			break;
		}
		case 24:{
			n.name="Cr";
			n.oxi[0]=6;
			n.oxi[1]=3;
			n.oxi[2]=2;
			n.oxi[3]=0;
			n.PA=51.996;
			n.negative=1.66;
			break;
		}
		case 25:{
			n.name="Mn";
			n.oxi[0]=7;
			n.oxi[1]=6;
			n.oxi[2]=4;
			n.oxi[3]=3;
			n.oxi[4]=2;
			n.oxi[5]=0;
			n.oxi[6]=-1;
			n.PA=54.938;
			n.negative=1.55;
			break;
		}
		case 26:{
			n.name="Fe";
			n.oxi[0]=6;
			n.oxi[1]=3;
			n.oxi[2]=2;
			n.oxi[3]=0;
			n.oxi[4]=-2;
			n.PA=55.845;
			n.negative=1.83;
			break;
		}
		case 27:{
			n.name="Co";
			n.oxi[0]=3;
			n.oxi[1]=2;
			n.oxi[2]=0;
			n.oxi[3]=-1;
			n.PA=58.933;
			n.negative=1.88;
			break;
		}
		case 28:{
			n.name="Ni";
			n.oxi[0]=3;
			n.oxi[1]=2;
			n.oxi[2]=0;
			n.PA=58.693;
			n.negative=1.91;
			break;
		}
		case 29:{
			n.name="Cu";
			n.oxi[0]=2;
			n.oxi[1]=1;
			n.PA=63.546;
			n.negative=1.9;
			break;
		}
		case 30:{
			n.name="Zn";
			n.oxi[0]=2;
			n.PA=65.38;
			n.negative=1.65;
			break;
		}
		case 31:{
			n.name="Ga";
			n.oxi[0]=3;
			n.PA=69.723;
			n.negative=1.81;
			break;
		}
		case 32:{
			n.name="Ge";
			n.oxi[0]=4;
			n.PA=72.630;
			n.negative=2.01;
			break;
		}
		case 33:{
			n.name="As";
			n.oxi[0]=5;
			n.oxi[1]=3;
			n.oxi[2]=-3;
			n.PA=74.922;
			n.negative=2.18;
			break;
		}
		case 34:{
			n.name="Se";
			n.oxi[0]=6;
			n.oxi[1]=4;
			n.oxi[2]=-2;
			n.PA=78.971;
			n.negative=2.55;
			break;
		}
		case 35:{
			n.name="Br";
			n.oxi[0]=7;
			n.oxi[1]=5;
			n.oxi[2]=3;
			n.oxi[3]=1;
			n.oxi[4]=-1;
			n.PA=79.904;
			n.negative=2.96;
			break;
		}
		case 36:{
			n.name="Kr";
			n.oxi[0]=2;
			n.PA=83.798;
			n.negative=0;
			break;
		}
		case 37:{
			n.name="Rb";
			n.oxi[0]=1;
			n.PA=85.468;
			n.negative=0.82;
			break;
		}
		case 38:{
			n.name="Sr";
			n.oxi[0]=2;
			n.PA=87.620;
			n.negative=0.95;
			break;
		}
		case 39:{
			n.name="Y";
			n.oxi[0]=3;
			n.PA=88.906;
			n.negative=2.22;
			break;
		}
		case 40:{
			n.name="Zr";
			n.oxi[0]=4;
			n.PA=91.224;
			n.negative=1.33;
			break;
		}
		case 41:{
			n.name="Nb";
			n.oxi[0]=5;
			n.oxi[1]=3;
			n.PA=92.906;
			n.negative=1.16;
			break;
		}
		case 42:{
			n.name="Mo";
			n.oxi[0]=6;
			n.oxi[1]=5;
			n.oxi[2]=4;
			n.oxi[3]=3;
			n.oxi[4]=2;
			n.oxi[5]=0;
			n.PA=95.950;
			n.negative=2.16;
			break;
		}
		case 43:{
			n.name="Tc";
			n.oxi[0]=7;
			n.PA=98;
			n.negative=1.9;
			break;
		}
		case 44:{
			n.name="Ru";
			n.oxi[0]=8;
			n.oxi[1]=6;
			n.oxi[2]=4;
			n.oxi[3]=3;
			n.oxi[4]=2;
			n.oxi[5]=0;
			n.oxi[6]=-2;
			n.PA=101.070;
			n.negative=2.2;
			break;
		}
		case 45:{
			n.name="Rh";
			n.oxi[0]=5;
			n.oxi[1]=4;
			n.oxi[2]=3;
			n.oxi[3]=2;
			n.oxi[4]=1;
			n.oxi[5]=0;
			n.PA=102.906;
			n.negative=2.28;
			break;
		}
		case 46:{
			n.name="Pd";
			n.oxi[0]=4;
			n.oxi[1]=2;
			n.oxi[2]=0;
			n.PA=106.42;
			n.negative=2.2;
			break;
		}
		case 47:{
			n.name="Ag";
			n.oxi[0]=2;
			n.oxi[1]=1;
			n.PA=107.868;
			n.negative=1.93;
			break;
		}
		case 48:{
			n.name="Cd";
			n.oxi[0]=2;
			n.PA=112.414;
			n.negative=1.69;
			break;
		}
		case 49:{
			n.name="In";
			n.oxi[0]=3;
			n.PA=114.818;
			n.negative=1.78;
			break;
		}
		case 50:{
			n.name="Sn";
			n.oxi[0]=4;
			n.oxi[1]=2;
			n.PA=118.710;
			n.negative=1.96;
			break;
		}
		case 51:{
			n.name="Sb";
			n.oxi[0]=5;
			n.oxi[1]=3;
			n.oxi[2]=-3;
			n.PA=121.760;
			n.negative=2.05;
			break;
		}
		case 52:{
			n.name="Te";
			n.oxi[0]=6;
			n.oxi[1]=4;
			n.oxi[2]=-2;
			n.PA=127.600;
			n.negative=2.1;
			break;
		}
		case 53:{
			n.name="I";
			n.oxi[0]=7;
			n.oxi[1]=5;
			n.oxi[2]=1;
			n.oxi[3]=-1;
			n.PA=126.904;
			n.negative=2.66;
			break;
		}
		case 54:{
			n.name="Xe";
			n.oxi[0]=6;
			n.oxi[1]=4;
			n.oxi[2]=2;
			n.PA=131.293;
			n.negative=0;
			break;
		}
		case 55:{
			n.name="Cs";
			n.oxi[0]=1;
			n.PA=132.905;
			n.negative=0.79;
			break;
		}
		case 56:{
			n.name="Ba";
			n.oxi[0]=2;
			n.PA=137.327;
			n.negative=0.89;
			break;
		}
		case 72:{
			n.name="Hf";
			n.oxi[0]=4;
			n.PA=178.486;
			break;
		}
		case 73:{
			n.name="Ta";
			n.oxi[0]=5;
			n.PA=180.948;
			n.negative=1.5;
			break;
		}
		case 74:{
			n.name="W";
			n.oxi[0]=6;
			n.oxi[1]=5;
			n.oxi[2]=4;
			n.oxi[3]=3;
			n.oxi[4]=2;
			n.oxi[5]=0;
			n.PA=183.840;
			n.negative=2.36;
			break;
		}
		case 75:{
			n.name="Re";
			n.oxi[0]=7;
			n.oxi[1]=6;
			n.oxi[2]=4;
			n.oxi[3]=2;
			n.oxi[4]=-1;
			n.PA=186.207;
			n.negative=1.9;
			break;
		}
		case 76:{
			n.name="Os";
			n.oxi[0]=8;
			n.oxi[1]=6;
			n.oxi[2]=4;
			n.oxi[3]=3;
			n.oxi[4]=2;
			n.oxi[5]=0;
			n.oxi[6]=-2;
			n.PA=190.230;
			n.negative=2.2;
			break;
		}
		case 77:{
			n.name="Ir";
			n.oxi[0]=6;
			n.oxi[1]=4;
			n.oxi[2]=3;
			n.oxi[3]=2;
			n.oxi[4]=1;
			n.oxi[5]=0;
			n.oxi[6]=-1;
			n.PA=192.217;
			n.negative=2.2;
			break;
		}
		case 78:{
			n.name="Pt";
			n.oxi[0]=4;
			n.oxi[1]=2;
			n.PA=195.084;
			n.negative=2.28;
			break;
		}
		case 79:{
			n.name="Au";
			n.oxi[0]=5;
			n.oxi[1]=4;
			n.oxi[2]=3;
			n.oxi[3]=2;
			n.oxi[4]=1;
			n.oxi[5]=-1;
			n.PA=196.967;
			n.negative=2.54;
			break;
		}
		case 80:{
			n.name="Hg";
			n.oxi[0]=2;
			n.oxi[1]=1;
			n.PA=200.592;
			n.negative=2;
			break;
		}
		case 81:{
			n.name="Tl";
			n.oxi[0]=3;
			n.oxi[1]=1;
			n.PA=204.38;
			n.negative=1.62;
			break;
		}
		case 82:{
			n.name="Pb";
			n.oxi[0]=4;
			n.oxi[1]=2;
			n.PA=207.200;
			n.negative=2.33;
			break;
		}
		case 83:{
			n.name="Bi";
			n.oxi[0]=5;
			n.oxi[1]=3;
			n.PA=208.980;
			n.negative=2.02;
			break;
		}
		case 84:{
			n.name="Po";
			n.oxi[0]=6;
			n.oxi[1]=4;
			n.oxi[2]=2;
			n.PA=209;
			n.negative=2;
			break;
		}
		case 85:{
			n.name="At";
			n.oxi[0]=7;
			n.oxi[1]=5;
			n.oxi[2]=3;
			n.oxi[3]=1;
			n.oxi[4]=-1;
			n.PA=210;
			n.negative=2.2;
			break;
		}
		case 86:{
			n.name="Rn";
			n.oxi[0]=2;
			n.negative=0;
			n.PA=222;
			break;
		}
		case 87:{
			n.name="Fr";
			n.oxi[0]=1;
			n.negative=0.7;
			n.PA=223;
			break;
		}
		case 88:{
			n.name="Ra";
			n.oxi[0]=2;
			n.negative=0.89;
			n.PA=226;
			break;
		}
	}
	return n;
}
