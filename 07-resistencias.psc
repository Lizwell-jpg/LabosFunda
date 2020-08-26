Algoritmo resistencias
	banda1<-0
	banda2<-0
	multiplicador<-0
	tolerancia<-0
	valorTotal<-0
	chiquiValor<-""
	punto<-""
	Escribir "Calculo del valor de una resistencia"
	Escribir "0.NEGRO"
	Escribir "1.MARRON"
	Escribir "2.ROJO"
	Escribir "3.NARANJA"
	Escribir "4.AMARILLO"
	Escribir "5.VERDE"
	Escribir "6.AZUL"
	Escribir "7.VIOLETA"
	Escribir "8.GRIS"
	Escribir "9.BLANCO"
	Escribir "10.DORADO"
	Escribir "11.PLATEADO"
	Escribir "12. SIN BANDA"
	Escribir "Ingrese el numero del color de la banda 1"
	Leer banda1
	Escribir "Ingrese el numero del color de la banda 2"
	Leer banda2 
	Escribir "Ingrese el numero del color de la banda 3"
	Leer multiplicador
	Escribir "Ingrese el numero del color de la banda 4"
	Leer tolerancia
	
	si banda2<>0 Entonces
		si multiplicador=0 Entonces
			chiquiValor<-""
		FinSi
		si multiplicador=1 Entonces
			chiquiValor<-"0"
		FinSi
		si multiplicador=2 Entonces
			chiquiValor<-"k"
			punto<-"."
		FinSi
		si multiplicador=3 Entonces
			chiquiValor<-"k"
		FinSi
		si multiplicador=4 Entonces
			chiquiValor<-"0 k"
		FinSi
		si multiplicador=5 Entonces
			chiquiValor<-"M"
			punto<-"."
		FinSi
		si multiplicador=6 Entonces
			chiquiValor<-"M"
		FinSi
		si multiplicador=7 Entonces
			chiquiValor<-"0 M"
		FinSi
		si multiplicador=8 Entonces
			chiquiValor<-"G"
			punto<-"."
		FinSi
		si multiplicador=9 Entonces
			chiquiValor<-"G"
		FinSi
		Escribir "El valor de la resistencia es de: " banda1 punto banda2 chiquiValor " ohm"
	FinSi
	si banda2=0 Entonces
		si multiplicador=0 Entonces
			chiquiValor<-""
			Escribir "El valor de la resistencia es de: " banda1 banda2 chiquiValor " ohm"
		FinSi
		si multiplicador=1 Entonces
			chiquiValor<-"0"
			Escribir "El valor de la resistencia es de: " banda1 banda2 chiquiValor " ohm"
		FinSi
		si multiplicador=2 Entonces
			chiquiValor<-"1 k"
			Escribir "El valor de la resistencia es de: " chiquiValor " ohm"
		FinSi
		si multiplicador=3 Entonces
			chiquiValor<-"k"
			Escribir "El valor de la resistencia es de: " banda1 banda2 chiquiValor " ohm"
		FinSi
		si multiplicador=4 Entonces
			chiquiValor<-"0 k"
			Escribir "El valor de la resistencia es de: " banda1 banda2 chiquiValor " ohm"
		FinSi
		si multiplicador=5 Entonces
			chiquiValor<-"1 M"
			Escribir "El valor de la resistencia es de: " chiquiValor " ohm"
		FinSi
		si multiplicador=6 Entonces
			chiquiValor<-"M"
			Escribir "El valor de la resistencia es de: " banda1 banda2 chiquiValor " ohm"
		FinSi
		si multiplicador=7 Entonces
			chiquiValor<-"0 M"
			Escribir "El valor de la resistencia es de: " banda1 banda2 chiquiValor " ohm"
		FinSi
		si multiplicador=8 Entonces
			chiquiValor<-"1 G"
			Escribir "El valor de la resistencia es de: " chiquiValor " ohm"
		FinSi
		si multiplicador=9 Entonces
			chiquiValor<-"G"
			Escribir "El valor de la resistencia es de: " banda1 banda2 chiquiValor " ohm"
		FinSi
	FinSi
	si tolerancia=1 Entonces
		Escribir "Con tolerancia +/- 1%"
	FinSi
	si tolerancia=2 Entonces
		Escribir "Con tolerancia +/- 2%"
	FinSi
	si tolerancia=10 Entonces
		Escribir "Con tolerancia +/- 5%"
	FinSi
	si tolerancia=11 Entonces
		Escribir "Con tolerancia +/- 10%"
	FinSi
	si tolerancia=12 Entonces
		Escribir "Con tolerancia +/- 20%"
	FinSi
	
	
FinAlgoritmo
