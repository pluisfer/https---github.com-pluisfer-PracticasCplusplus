#include <iostream>

/* int32_t main()
{
    int32_t numRepeticiones = 3;
    while (numRepeticiones > 0)
    {
        std::cout << "Aprendiendo a usar bucles while." << std::endl;

        numRepeticiones = numRepeticiones - 1;
    }
    return 0;
} */

int32_t main()
{
    int32_t numRepeticiones = 0;

    do
    {
        std::cout << "Aprendiendo a usar bucles while." << std::endl;

        numRepeticiones = numRepeticiones - 1;
    } while (numRepeticiones > 0);

    return 0;
}