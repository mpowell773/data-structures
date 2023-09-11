
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
	// The base case to end the recursive function
	if (num > 0)
	{
		// The call of the recusive function
		headRecursion(num - 1);

		// The print will not occur until all recursive functions have been activated 
		// on the stack and the recursive function descends through each instance
		std::cout << "Num: " << num << '\n';
	}
}

