#include <iostream>
#include <string>

int32_t main()
{
    int32_t diaNacimiento, mesNacimiento, anioNacimiento;

    std::cout << "!Nos encantaría poder felicitarte porel día de tu cumpleaños!" << std::endl;
    std::cout << "¿Podrías facilitarnos tu fecha de nacimiento, por favor?" << std::endl;

    std::cout << "Introduce tu día de nacimiento: ";
    std::cin >> diaNacimiento;

    std::cout << "introduce tu mes de nacimiento: ";
    std::cin >> mesNacimiento;

    std::cout << "Introduce tu año de nacimiento: ";
    std::cin >> anioNacimiento;

    std::cout << "Felicitaciones cumples el: " << diaNacimiento << "-" << mesNacimiento << "-" << anioNacimiento << "!" << std::endl;

    return 0;
}