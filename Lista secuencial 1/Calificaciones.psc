Algoritmo Calificaciones
	Escribir "¿Deseas conocer tu promedio durante el semestre?"
	Escribir "No te preocupes, ingresa la calificación de los cuatro examenes para conocer tu promedio"
	Dimension cal(4)
	Para i<-1 Hasta 4 Con Paso paso Hacer
		Escribir "Ingresa la calificación del examen número " i
		Leer cal(i)
		ct<-ct+cal(i)
		i<-i+1
	Fin Para
	Escribir "Tu promedio durante el semestre es de " ct/4
FinAlgoritmo
