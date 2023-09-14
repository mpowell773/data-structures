#include "Fibonacci.h"
#include <iostream>
#include <vector>

int Fibonacci::iterativeFib(int index)
{
	// Handle improper requests.
	if (index < 0)
		return -1;

	// Since index 0 and 1 of the fibonacci sequence are 0 and 1 respectively, simply return what was passed in.
	if (index <= 1)
		return index;
	
	int num0 {0};
	int num1 {1};
	int sum  {0};

	// Due to 0 and 1 being caught by the if statement above, the loop begins at 2
	// The fibonacci sequence finds each subsequent value by adding the two previous values.
	// The first statement in the loop does just that by summing num0 and num1. num0 and num1
	// are then set to do the summation for the next iteration. If it's the final iteration
	// the assignment is pointless but a neglible amount of time is wasted.
	for (size_t i = 2; i <= index; ++i)
	{
		sum = num0 + num1;
		num0 = num1;
		num1 = sum;
	}

	return sum;
}

int Fibonacci::recursiveFib(int index)
{
	if (index < 0)
		return -1;
	
	if (index <= 1)
		return index;

	// A classic example of using recursion to solve the Fibonacci sequence.
	// This version, however, is extremely inefficient due to multiple occurences of the same call.
	// For example, recursiveFib(5) will have multiple calls for recursiveFib(3) and all the subsequent
	// calls down to the base case. Time complexity is quadratic.
	return recursiveFib(index - 1) + recursiveFib(index + 1);
}

// Memoization is the concept where you store the value of a call. Looking at recursiveFib and the comments there, 
// the goal of using memoization is to not have multiple duplicate calls occuring in the recursion when you already have found
// the number. 
int Fibonacci::memoizationFib(int index)
{
	if (index < 0)
		return -1;

	// Init vector to whatever amount of indexes needed.
	std::vector<int> fibVec(index, -1);

	if (index <= 1)
		return index;

	// If the index is -1, the number has not yet been found, so call the recursive function.
	// As the recursion begins returning itself, the indexes will be filled in fibVec which
	// will help in subsequent calls.
	if (fibVec.at(index - 1) == -1)
		fibVec.at(index - 1) = memoizationFib(index - 1);
	if (fibVec.at(index - 2) == -1)
		fibVec.at(index - 2) = memoizationFib(index - 2);

	return fibVec.at(index - 1) + fibVec.at(index - 2);
}