#include "BasicRecursiveTypes.h"
#include <iostream>

int main()
{
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

    return 0;
}