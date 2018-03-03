#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

#include "utility.h"

int countPrimes(int a[], int size) {
	int c = 0;
	int x;
	for (int i=0; i<size; i++)
	{
		x = a[i];
		if (isPrime(x))
			c++;
	}
	return c;
// STUB!  Replace with correct code.
}
