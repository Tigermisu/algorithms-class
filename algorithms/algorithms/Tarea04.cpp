#pragma once
#include "Tarea04.h"

/*

Este problema resuelve el problema propuesto en la Tarea 04

Given a positive integer X, we want to find the shortest interval [A,B] with X contained within it,
Where also, A and B are primes numbers.

Christopher Jáquez Prado. A01186997
1/23/2016

*/


/*
Determina si un número es primo o no.
Recibe: Un entero a determinar su naturaleza.
Regresa: Verdadero si es primo, falso si no.
*/
bool Tarea04::isPrime(int number) {
	if (number == 2) {
		return true;
	}

	if (number <= 1 || number % 2 == 0) {
		return false;
	}

	for (int i = 3; i <= (int)sqrt(number); i += 2) {
		if (number % i == 0) {
			return false;
		}
	}

	return true;
}

/*
Obtiene el rango [a,b] de todos los números entregados. También imprime a consola.
Recibe: Un entero M que indica la cantidad de números n a recibir, y dichos números.
Regresa: Void. El rango de cada número es mandado a STDOUT.
*/
void Tarea04::solveHomework(int M, ...) {
	va_list numberList;
	va_start(numberList, M); 

	for (int i = 0; i < M; i++) {
		int* range = findPrimeRange(va_arg(numberList, int));
		printf("%d %d\n", range[0], range[1]);
	}

	va_end(numberList);
}

/*
Obtiene el rango [a,b] donde a y b son primos y a <= n <= b
Recibe: Un entero n para encontrar su rango.
Regresa: Un rango [a,b] donde a y b son primos y a <= n <= b
*/
int* Tarea04::findPrimeRange(int number) {
	static int range[2] = {};

	if (number <= 1) {
		throw;
	}

	if (isPrime(number)) {
		range[0] = number;
		range[1] = number;
	} else {
		bool isEven = number % 2 == 0;
		int start = isEven ? number - 1 : number - 2;

		while (!isPrime(start)) {
			start -= 2;
		}

		range[0] = start;

		start = isEven ? number + 1 : number + 2;

		while (!isPrime(start)) {
			start += 2;
		}

		range[1] = start;
	}

	return range;
}