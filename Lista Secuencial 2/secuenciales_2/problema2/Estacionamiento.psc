Funcion I <- entrada
	Leer I
Fin Funcion

Funcion R <- calculo ( X, Y1 )
	R<-X*Y1
Fin Funcion

Funcion salida ( t,h,f,g,m )
	Escribir "Por un tiempo de " g " horas y una fracción de " m " hora, con un precio de " t " por hora o fraccion"
	Escribir "Es un precio total de: " f
Fin Funcion

Algoritmo Estacionamiento
	Escribir "Este programa automatiza el proceso de cobro para un estacionamiento por hora y fraccion."
	Escribir "Cual es el costo de una hora o fraccion? "
	T<-entrada
	Escribir "Cuantas horas completas estuvo estacionado? "
	H<-entrada
	h1<-H
	Escribir "Cuantos minutos estuvo estacionado? "
	M<-entrada/60
	m1<-M
	H<-H+M+0.9999999999
	F<-calculo(H,T)
	salida(T,H,F,h1,m1)
FinAlgoritmo
