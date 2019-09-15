Algoritmo peliculasbaras
	Escribir 'Cual es el costo de la primera pelicula'
	Leer primera
	Escribir 'Cual es el costo de la segunda pelicula'
	Leer segunda
	Escribir 'Cual es el costo de la tercera pelicula'
	Leer tercera
	Si (primera)>(segunda) Y (primera)>(tercera) Entonces
		total <- segunda+tercera
		Escribir 'El total es de: ',total
	FinSi
	Si (segunda)>(primera) Y (segunda)>(tercera) Entonces
		total <- primera+tercera
		Escribir 'El total es de: ',total
	SiNo
		total <- primera+segunda
		Escribir 'El total es de: ',total
	FinSi
FinAlgoritmo

