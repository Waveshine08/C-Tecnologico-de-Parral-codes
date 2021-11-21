Funcion I <- entrada
	Leer I
Fin Funcion

Funcion I <- calculo ( X, Y1, Z  )
	I<-X*Y1*Z
Fin Funcion

Funcion salida ( Nt, V, T )
	Escribir "La tarifa de agua por metro cubico en su localidad es de " T " y el volumen de su alberca es de " V
	Escribir "Por lo tanto su próximo pago es de: " Nt
Fin Funcion

Algoritmo Agua
	Escribir "Este programa lleva a cabo el calculo de su proximo pago de agua por su consumo al llenar una alberca."
	Escribir "Para ello le pediré que ingrese algunos datos."
	Escribir "Cual es la tarifa actual por metro cubico de agua en su localidad en pesos? "
	T<-entrada
	Escribir "Cual es el largo de su alberca en m? "
	X<-entrada
	Escribir "Cual es el ancho de su alberca en m? "
	Y1<-entrada
	Escribir "Cual es la altura de su alberca en m? "
	Z<-entrada
	V<-calculo(X, Y1, Z)
	Nt<-V*T
	salida(Nt, V, T)
FinAlgoritmo
