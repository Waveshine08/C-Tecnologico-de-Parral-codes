Algoritmo Salario
	Escribir 'Este programa te ayudara a conocer y calcular tu salario en un mes.'
	Escribir 'Por supuesto tambi�n calcular� tu retenci�n del 7% por concepto de Seguro M�dico.'
	Escribir 'Primero necesito unos datos necesarios para el c�lculo. Favor de responder de forma honesta.'
	Escribir '�Cuantas horas trabajas al d�a?. Ten en mente al articulo 61 de la Ley Federal del Trabajo'
	Leer hr
	Si hr>8 Entonces
		Escribir 'Debes saber que respecto a la Ley Federal del Trabajo, sufres de explotaci�n laboral.'
	FinSi
	Repetir
		Escribir '�Cuantos d�as trabajas a la semana?. Tambi�n toma en cuenta el articulo 69 de la Ley Federal del Trabajo'
		Leer d
		Si d<0 O d>7 Entonces
			Escribir 'Una semana no puede tener esa cantidad de d�as. Vuelva a ingresar un valor'
		FinSi
	Hasta Que d<=7 Y d>0
	Si hr>8 Y d>6 Entonces
		Escribir 'Est�s sufriendo de un acto criminal por explotaci�n laboral.'
		Escribir 'El programa a�n as� efectuar� su calculo pero trata de acercarte a las estancias de gobierno correspondientes'
	FinSi
	Escribir 'Por �ltimo �Cu�l es tu salario por hora en pesos?'
	Leer s
	Escribir 'Tomaremos como un mes el valor promedio de 30 d�as'
	sf <- s*hr*(d*4)
	sr <- sf-((7*sf)/100)
	Escribir 'Su salario total es de: ',sf,' pesos. Menos el 7% recibe un total de: ',sr,' pesos al mes.'
FinAlgoritmo
