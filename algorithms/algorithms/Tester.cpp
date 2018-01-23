#include "Tester.h"

Tester::Tester() {
	testsRan = 0;
	testsPassed = 0;
}

void Tester::finishTesting() {
	printf("Ran %d tests. passed %d.\n", testsRan, testsPassed);
	if (testsRan == testsPassed) {
		printf("\nAll good!\n");
	}
	testsRan = 0;
	testsPassed = 0;
}
