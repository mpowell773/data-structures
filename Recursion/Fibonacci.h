#pragma once
#include <vector>

class Fibonacci
{
public:
	Fibonacci() = default;
	~Fibonacci() = default;

	int iterativeFib(int index);
	int recursiveFib(int index);
	int memoizationFib(int index);
private:
	std::vector<int> fibVec;
};

