#include <iostream>

int32_t main()
{
    int32_t numRepeticiones = 3;
    while (numRepeticiones > 0)
    {
        std::cout << "Aprendiendo a usar bucles while." << std::endl;

        numRepeticiones = numRepeticiones - 1;
    }
    return 0;
}