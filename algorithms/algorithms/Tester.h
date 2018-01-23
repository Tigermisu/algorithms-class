#pragma once

#include <stdio.h>
#include <iostream>

class Tester {
	int testsRan, testsPassed;
public:
	Tester();
	template <class T>
	void assert(T expected, T result);
	void finishTesting();
};

template <class T>
void Tester::assert(T expected, T result) {
	testsRan++;

	if (expected == result) {
		testsPassed++;
	} else {
		printf("Failed at test #%d\n", testsRan);
		std::cout << "Expected: " << expected << std::endl;
		std::cout << "Received: " << result << std::endl << std::endl;
	}
};