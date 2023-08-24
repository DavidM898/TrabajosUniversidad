#pragma once
#include <iostream>


ref class Ejercicio1
{
public:
	//Calculo de MCD con recursividad
	int CalculoMCD(int a, int b) {		
		if (b == 0)
		{
			return a;
		}
		else {
			return CalculoMCD(b, a % b);
		}
	}

	//Calculo de MCD con iteraciones
	int CalculoCicloMCD(int a, int b) {
		int residuo = a%b;

		while (residuo != 0)
		{
			a = b;
			b = residuo;
			residuo = a % b;
		}
		return b;
	}
};

