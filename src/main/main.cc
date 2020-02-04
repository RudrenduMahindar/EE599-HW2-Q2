#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    char chararray[]={'a','b'};
    std::cout << solution.arraysize(chararray,sizeof(chararray)) << std::endl;

    return EXIT_SUCCESS;
}