Funcion I <- entrada
	Leer I
Fin Funcion

Funcion r <- calculo ( g )
	r<-g*100
Fin Funcion

Funcion salida ( d,h,c,di,t )
	Escribir "Por un total de " d " dias se dan los siguientes pagos."
	Escribir "Para Hotel: " h " pesos"
	Escribir "Para Comida: " c " pesos"
	Escribir "Mas 100.00 pesos diarios diarios para otros gastos: " di " pesos"
	Escribir "Da un total de: " t " pesos"
Fin Funcion

Algoritmo Cheque
	Escribir "Este programa lleva a cabo el calculo para el total del cheque a dar a un empleado por viaje."
	Escribir "Para ello se le solicitan los siguientes datos:"
	Escribir "Que cantidad de dias estara de viaje? "
	Dias<-entrada
	Escribir "Cuanto dinero dispondra para el hotel? "
	Hotel<-entrada
	Escribir "Cuanto dinero dispondra para para comida? "
	Comida<-entrada
	Diarios<-calculo(Dias)
	Total<-Dias+Comida+Hotel+Diarios
	salida(Dias,Hotel,Comida,Diarios,Total)
FinAlgoritmo
