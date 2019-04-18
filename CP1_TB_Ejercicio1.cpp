Algoritmo CP1_TB_E1
	Escribir "Inserte los años trabajando"
	Leer años
	Escribir "Inserte sueldo en soles"
	Leer sueldo
	Si años <= 3 Entonces
		bono <- sueldo + (sueldo * 0.04)
	SiNo
		Si años > 3 y años <= 5 Entonces
			bono <- sueldo + (sueldo * 0.06)
		SiNo
			Si años > 5 y años <= 10 Entonces
				bono <- sueldo + (sueldo * 0.1)
			SiNo
				Si años < 10 Entonces
					bono <- sueldo + (sueldo * 0.15)
				SiNo
					Escribir "ERROR"
				Fin Si
			Fin Si
		Fin Si
	Fin Si
	Escribir bono
FinAlgoritmo
