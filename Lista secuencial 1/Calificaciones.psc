Algoritmo Calificaciones
	Escribir "�Deseas conocer tu promedio durante el semestre?"
	Escribir "No te preocupes, ingresa la calificaci�n de los cuatro examenes para conocer tu promedio"
	Dimension cal(4)
	Para i<-1 Hasta 4 Con Paso paso Hacer
		Escribir "Ingresa la calificaci�n del examen n�mero " i
		Leer cal(i)
		ct<-ct+cal(i)
		i<-i+1
	Fin Para
	Escribir "Tu promedio durante el semestre es de " ct/4
FinAlgoritmo
