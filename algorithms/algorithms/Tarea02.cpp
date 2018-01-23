#pragma once
#include <numeric>
#include "Tarea02.h"

/*

Este programa resuelve el problema de James el Androide para la Tarea 2:
Jemes the Android is a galaxy-famous detective. In his free time he likes to think
about strings containing zeros and ones.
Once he thought about a string of length n consisting of zeroes and ones.
Consider the following operation: we choose any two adjacent positions in the
string, and if one them contains 0, and the other contains 1, then we are allowed
to remove these two digits from the string, obtaining a string of length n - 2 as a
result.
Now James thinks about what is the minimum length of the string that can remain
after applying the described operation several times (possibly, zero)? Help him to
calculate this number.

Christopher Jáquez Prado. A01186997
1/13/2016

*/


/*
	Resuelve el problema de James.
	Recibe: Un entero con la longitud de la cadena, y la cadena.
	Regresa: La longitud mínima de la cadena después de aplicar el algoritmo de James.

	Nota: El algoritmo de James elimina todos los 0s y 1s pegados, y como al eliminarlos
	junta el resto de la cadena, todos los 0s y 1s se van a eliminar hasta que quede solo
	0s o 1s, por lo que el resultado es simplemente la diferencia entre la cantidad
	de 0s y 1s. Se aprovecha el valor numérico contiguo de los chars 0 y 1 para hacer la
	operación matemática.
*/
int Tarea02::solveJamesProblem(int stringLength, std::string jamesString) {
	return abs(std::accumulate(jamesString.begin(), jamesString.end(), -stringLength * '0') 
		* 2  - stringLength);
}