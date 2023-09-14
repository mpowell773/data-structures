#include "Fibonacci.h"
#include <iostream>

int Fibonacci::iterativeFib(int num)
{
	if (num <= 1)
		return num;
	
	int num0 {0};
	int num1 {1};
	int sum  {0};

	for (size_t i = 2; i <= num; ++i)
	{
		sum = num0 + num1;
		num0 = num1;
		num1 = sum;
	}

	return sum;
}

int Fibonacci::recursiveFib(int num)
{
	return 0;
}

int Fibonacci:: memoizationFib(int num)
{
	return 0;
}