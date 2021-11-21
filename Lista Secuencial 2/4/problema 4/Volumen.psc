Funcion area
	R<-3.3
	H<-2.5
	Ac<-(R^2)*PI
	Ar<-((R*2)*PI)*H
	At<-Ac+Ar+Ac
	vol(Ac, H, At)
Fin Funcion

Funcion vol ( Ac, H, At)
	V<-Ac*H
	salida(V, At)
Fin Funcion

Funcion salida ( V, At )
	Escribir "Su area total es de " At " unidades cuadradas y su volumen es de " V " unidades cubicas"
Fin Funcion

Algoritmo Volumen
	Escribir "Este programa lleva el calculo de area y volumen de un cilindro de radio 3.3 unidades y altura de 2.5 unidades"
	area
FinAlgoritmo
