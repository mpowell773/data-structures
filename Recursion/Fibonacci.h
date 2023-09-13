#pragma once
#include <vector>

class Fibonacci
{
public:
	Fibonacci() = default;
	~Fibonacci() = default;

	int iterativeFib(int num);
	int recursiveFib(int num);
	int memoizationFib(int num);
private:
	std::vector<int> fibVec;
};

