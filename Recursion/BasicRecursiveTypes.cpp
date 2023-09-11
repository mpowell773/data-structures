#include "BasicRecursiveTypes.h"
#include <iostream>

// HEAD RECURSION 
/*----------------------------------------------------------------------------
* Due to the nature of how recursion interacts with the stack,
* head recursive functions only start handling instructions
* after the recursion has hit its base case.
* This means that if you supply the number 3 to headRecursionExample,
* it will output "1,2,3" as opposed to "3,2,1".
-----------------------------------------------------------------------------*/

void BasicRecursiveTypes::headRecursion(int num)
{
	std::cout << "headRecursion function start\n";

	// The base case to end the recursive function
	if (num > 0)
	{
		// The call of the recusive function
		headRecursion(num - 1);

		// The print will not occur until all recursive functions have been activated 
		// on the stack and the recursive function descends through each instance
		std::cout << "Num: " << num << '\n';
	}

	std::cout << "headRecursion function end\n";
}

// TAIL RECURSION 
/*----------------------------------------------------------------------------
* Tail recursion has the base call at the end of the function instructions.
* This means that each function's instructions are completed during ascension 
* and not descension.
* Due to this, the recursive function acts much more like a while loop,
* which means you should probably use a while loop instead of recursion
* in most cases.
-----------------------------------------------------------------------------*/

void BasicRecursiveTypes::tailRecursion(int num)
{
	std::cout << "tailRecursion function start\n";

	// The base case to end the recursive function
	if (num > 0)
	{	
		// The print occurs before the call of the next recursive instance
		std::cout << "Num: " << num << '\n';
		
		// The call of the recusive function
		tailRecursion(num - 1);
	}

	std::cout << "Tail recursion function end\n";
}

// TREE RECURSION
/*----------------------------------------------------------------------------
* Tree recursion occurs when there is more than one call within the recursive function. 
* This increases the time complexity exponentially. While the time complexity
* increases, the space complexity continues to be O(n) due to how the stacks are added and removed
* during the function's processing. See example below:
-----------------------------------------------------------------------------*/

void BasicRecursiveTypes::treeRecursion(int num)
{
	int stackCounter {0};
	std::cout << "treeRecursion function start\n"
			  << "Stack Counter: " << ++stackCounter 
			  << '\n';

	// The base call to end the function
	if (num > 0)
	{
		std::cout << "Num: " << num << '\n';
		treeRecursion(num - 1);
		treeRecursion(num - 1); // The second call will not initiate until the first call 
								// has fully completed its recursion
	}

	std::cout << "treeRecursion function start\n"
			  << "Stack Counter: " << --stackCounter
			  << '\n';
}
