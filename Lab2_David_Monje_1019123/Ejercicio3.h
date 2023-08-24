#pragma once
#include <iostream>
#include <chrono>
using namespace System;


ref class Ejercicio3
{
public:
	
	//Revisa que el numero siga las reglas de base.
	bool Revisar(String^ palabra, int base) {
		if (base != 16)
		{
			try
			{
				for (int i = 0; i < palabra->Length; i++)
				{
					int caracter = Convert::ToInt32(palabra->Substring(i, 1));

					if (caracter < 0 || caracter > base)
					{
						return false;
					}
				}
			}
			catch (...)
			{
				return false;
			}
		}
		else {
			try
			{
				for each (char var in palabra)
				{
					if (!isdigit(var))
					{
						if (var < 'a' || var > 'f')
						{
							return false;
						}
					}
				}
			}
			catch (...)
			{
				return false;
			}
		}

		return true;
	}

	//Funcion utilizada para mandar el numero a convertirse en decimal, para luego ser convertido a la base deseada
	String^ ConvertirRecursivo(String^ numero, int baseOriginal, int baseConvertir) {

		if (baseOriginal == baseConvertir)
		{
			return numero;
		}
		else {
			if (baseOriginal < 16)
			{
				baseOriginal += 1;
			}
			int decimal = DecimalRecursivo(numero, baseOriginal, 0);

			return ConversorRecursivo(decimal, baseConvertir);
		}
		return "";
	}

	//Misma funcion que la que convierte utilizando recursividad, pero utilizando solo iteraciones
	String^ ConvertirIteracion(String^ numero, int baseOriginal, int baseConvertir) {

		if (baseOriginal == baseConvertir)
		{
			return numero;
		}
		else {
			if (baseOriginal < 16)
			{
				baseOriginal += 1;
			}
			int decimal = DecimalIteracion(numero, baseOriginal);

			return ConversorIteracion(decimal, baseConvertir);
		}
		return "";
	}


	//Funcion para asignar un valor al digito que se este trabajando
	int ValorDigito(char digito) {

		if (digito >= '0' && digito<= '9')
		{
			return digito - '0';
		}
		else if (digito >= 'a' && digito <= 'f') {
			return digito - 'a' + 10;
		}

		return 0;
	}

	//Convierte el numero original en decimal utilizando recursividad
	int DecimalRecursivo(String^ numero, int base, int indice) {
		if (indice == numero->Length)
		{
			return 0;
		}
		else {
			char digito = numero[indice]; // Obtener el dígito actual
			int valor = ValorDigito(digito); // Obtener el valor decimal del dígito

			return valor * Math::Pow(base, numero->Length - indice - 1) + DecimalRecursivo(numero, base, indice + 1);
		}
		return 0;
	}

	//Convierte el numero original en decimal utilizando iteracion
	int DecimalIteracion(String^ numero, int base) {
		int total = 0;
		for (int i = 0; i < numero->Length; i++)
		{
			char digito = numero[i];
			int valor = ValorDigito(digito);

			total += valor * Math::Pow(base, numero->Length - i - 1);
		}
		return total;
	}


	//Digito decimal a hexa
	String^ ResiduoDecHex(int residuo) {

				switch (residuo)
				{
				case 10:
					return "a";
					break;

				case 11:
					return "b";
					break;

				case 12:
					return "c";
					break;

				case 13:
					return "d";
					break;

				case 14:
					return "e";
					break;

				case 15:
					return "f";
					break;

				default:
					return Convert::ToString(residuo);
					break;
				}		

	}

	//Convierte el decimal anterior en el numero con la base deseada utilizando iteracion
	String^ ConversorIteracion(int num, int base) {
		int division = num;
		int modificador = 0;
		String^ residuo;
		String^ total;

		while (division != 0)
		{
			modificador = division % base;

			residuo = ResiduoDecHex(modificador);

			division = division / base;

			total = residuo + total;
		}

		return total;
	}

	//Convierte el decimal anterior en el numero con la base deseada utilizando recursividad
	String^ ConversorRecursivo(int num, int base) {
		if (num == 0)
		{
			return "";
		}
		else {
			String^ residuo = ResiduoDecHex((num % base));
			num = num / base;
			return ConversorRecursivo(num, base) + residuo;
		}
		return "";
	}
};

