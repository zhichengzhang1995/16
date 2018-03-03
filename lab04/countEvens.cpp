#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

int countEvens(int a[], int size) {
	int c = 0;
	int x;
	for (int i=0; i<size; i++)
	{
		x = a[i];
		if (x < 0)
			x = x * (-1);
		if (x == 0)
			c++;
		else if (x % 2 == 0)
			c++;
	}
	return c; // STUB!  Replace with correct code.
}
