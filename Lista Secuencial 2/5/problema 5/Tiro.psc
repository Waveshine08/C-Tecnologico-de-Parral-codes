Funcion entrada
	Escribir "Este programa realiza los calculos de un tiro parabolico."
	Escribir "Que angulo en grados se lanzara el proyectil? "
	Leer G
	Escribir "Que velocidad inicial en m/s llevara el proyectil? "
	Leer Vi
	calculo(G,Vi)
Fin Funcion

Funcion calculo ( Grad,Vi )
	G<-9.81
	Gr<-Grad*PI/180
	Vy<-Vi*sen(Gr)
	Vx<-Vi*cos(Gr)
	Hmax<-(Vy^2)/(2*G)
	Ts<-Vy/G
	Tb<-rc(2*Hmax/G)
	T<-Ts+Tb
	Al<-Vx*T
	salida(Hmax, T, Al)
Fin Funcion

Funcion salida ( Hmax, T, Al )
	Escribir "Su altura maxima es de: " Hmax " metros"
	Escribir "Su alcance es de: " Al " metros"
	Escribir "Su tiempo de vuelo es de: " T " segundos"
Fin Funcion

Algoritmo Tiro
	entrada
FinAlgoritmo
