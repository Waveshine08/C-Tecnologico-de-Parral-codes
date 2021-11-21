Algoritmo Salario
	Escribir 'Este programa te ayudara a conocer y calcular tu salario en un mes.'
	Escribir 'Por supuesto también calculará tu retención del 7% por concepto de Seguro Médico.'
	Escribir 'Primero necesito unos datos necesarios para el cálculo. Favor de responder de forma honesta.'
	Escribir '¿Cuantas horas trabajas al día?. Ten en mente al articulo 61 de la Ley Federal del Trabajo'
	Leer hr
	Si hr>8 Entonces
		Escribir 'Debes saber que respecto a la Ley Federal del Trabajo, sufres de explotación laboral.'
	FinSi
	Repetir
		Escribir '¿Cuantos días trabajas a la semana?. También toma en cuenta el articulo 69 de la Ley Federal del Trabajo'
		Leer d
		Si d<0 O d>7 Entonces
			Escribir 'Una semana no puede tener esa cantidad de días. Vuelva a ingresar un valor'
		FinSi
	Hasta Que d<=7 Y d>0
	Si hr>8 Y d>6 Entonces
		Escribir 'Estás sufriendo de un acto criminal por explotación laboral.'
		Escribir 'El programa aún así efectuará su calculo pero trata de acercarte a las estancias de gobierno correspondientes'
	FinSi
	Escribir 'Por último ¿Cuál es tu salario por hora en pesos?'
	Leer s
	Escribir 'Tomaremos como un mes el valor promedio de 30 días'
	sf <- s*hr*(d*4)
	sr <- sf-((7*sf)/100)
	Escribir 'Su salario total es de: ',sf,' pesos. Menos el 7% recibe un total de: ',sr,' pesos al mes.'
FinAlgoritmo
