#pragma once
#include <string>
#include <cstdarg>

class Tarea04 {
private:
	int* findPrimeRange(int number);
public:
	bool isPrime(int number); // Public because might be useful in future homeworks
	void solveHomework(int M, ...);
};
