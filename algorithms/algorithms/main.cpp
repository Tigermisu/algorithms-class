#include "Tester.h"
#include "Tarea04.h"

int main() {
	Tester tester;
	Tarea04 tarea;

	printf("Beginning prime test\n");
	tester.assert(false, tarea.isPrime(25));
	tester.assert(false, tarea.isPrime(4));
	tester.assert(false, tarea.isPrime(63));
	tester.assert(false, tarea.isPrime(55));
	tester.assert(true, tarea.isPrime(23));
	tester.assert(true, tarea.isPrime(997));
	tester.assert(true, tarea.isPrime(89));
	tester.assert(true, tarea.isPrime(17));
	tester.assert(true, tarea.isPrime(3));
	tester.assert(true, tarea.isPrime(5));
	tester.assert(true, tarea.isPrime(2));
	tester.assert(false, tarea.isPrime(0));
	tester.assert(false, tarea.isPrime(1));

	tester.finishTesting();

	printf("\nBeginning range test\n");

	tarea.solveHomework(6, 2, 4, 63, 66, 64, 65);

	while (true);
}