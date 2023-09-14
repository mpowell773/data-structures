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

    // FIBONACCI EXAMPLES \\
    
    Fibonacci fibonacciExample;
    
    std::cout << "Iterative version of fibonacci: " << fibonacciExample.iterativeFib(10) << '\n';

    return 0;
}