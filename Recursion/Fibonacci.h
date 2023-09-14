#pragma once

class Fibonacci
{
public:
	Fibonacci() = default;
	~Fibonacci() = default;

	int iterativeFib(int index);
	int recursiveFib(int index);
	int memoizationFib(int index);
};

