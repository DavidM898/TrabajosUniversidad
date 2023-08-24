#pragma once
#include <string>
#include <iostream>
using namespace System;

ref class Ejercicio2
{
public:

	//Funcion para revisar si la palabra es palindroma con recursividad
	bool RevisarPalindroma(String^ palabra) {
		if (palabra->Length <= 1)
		{
			return true;
		}
		else if(palabra->Substring(0, 1) != palabra->Substring(palabra->Length - 1, 1)) {
			return false;
		}
		else {
			return RevisarPalindroma(palabra->Substring(1, palabra->Length - 2));
		}
	}

	//Funcion para revisar si la palabra es palindroma con iteracion
	bool RevisarPalindromaIteracion(String^ palabra) {
		while (palabra->Length > 1)
		{
			if (palabra->Substring(0, 1) != palabra->Substring(palabra->Length - 1, 1))
			{
				return false;
			}
			else {
				palabra = palabra->Substring(1, palabra->Length - 2);
			}
		}
		return true;
	}
};

