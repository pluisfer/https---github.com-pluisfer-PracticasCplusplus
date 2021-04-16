#include <iostream>
#include <vector>

int32_t main()
{

    for (int32_t contador = 1; contador <= 3; contador++)
    {

        std::cout << "Aprendiendo a utlizar ciclos for." << std::endl;
    }

    std::vector<int32_t> valores(5);
    valores[0] = 1;
    valores[1] = 2;
    valores[2] = 3;
    valores[3] = 4;
    valores[4] = 5;

    for (int32_t i = 0; i < 5; i++)
    {
        std::cout << "El valor contenido en la posicion" << i << " el vector es " << valores.at(i) << std::endl;
    }

    return 0;
}