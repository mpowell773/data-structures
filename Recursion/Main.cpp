#include "BasicRecursiveTypes.h"
#include "Fibonacci.h"
#include <iostream>

int main()
{
    
    // BASIC RECURSIVE EXAMPLES \\
    
    int num {5};
    BasicRecursiveTypes recursionExample;
    
    // Num is being passed by value in all these instances due to how it's
    // manipulated in the functions
    recursionExample.headRecursion(num);
    std::cout << "=====================================\n";
    
    recursionExample.tailRecursion(num);
    std::cout << "=====================================\n";
    
    recursionExample.treeRecursion(num);
    std::cout << "=====================================\n";
    
    num = 20;
    recursionExample.indirectRecursionA(num);
    std::cout << "=====================================\n";

    int nestedNum {45};
    std::cout << "nestedNum: " << recursionExample.nestedRecursion(nestedNum) << '\n';
    std::cout << "=====================================\n";
    std::cout << "\n\n";

    // FIBONACCI EXAMPLES \\
    
    Fibonacci fibonacciExample;
    
    int fibNum {10};

    std::cout << "Iterative version of fibonacci: " << fibonacciExample.iterativeFib(fibNum) << '\n';
    std::cout << "=====================================\n";

    std::cout << "Recursive version of fibonacci: " << fibonacciExample.iterativeFib(fibNum) << '\n';
    std::cout << "=====================================\n";

    std::cout << "Memoized version of fibonacci: " << fibonacciExample.memoizationFib(fibNum) << '\n';
    std::cout << "=====================================\n";

    return 0;
}