#include <iostream>

//prototipo de una funcion con valor por defecto

float calculaIvaEnEuros(float = 1000);

int main()
{
    //llamada de una funcion

    float importeTotal = 1500.34;

    calculaIvaEnEuros(importeTotal);

    return 0;
}
//funcion tomada del prototipo y con cuerpo, definicion de la funcion
float calculaIvaEnEuros(float importeTotalEnEuros)
{
    return (importeTotalEnEuros * 0.21);
};