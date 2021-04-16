#include <iostream>
#include <string>
#include <vector>

// estructura se realizan fuera de la instruccion main

/* struct Empleado
{
    int identificador;
    float salarioMensualBase;
};
 */
using namespace std;

int32_t main()
{

    // vectores -arrays-arreglos

    /*    float gastoMensual[3] = {3450.9, 5938, 465.998};

    gastoMensual[0] = 2300.7; */

    // matrices
    /* float ingresoMensual[5][12];

    ingresoMensual[0][0] = 2300;
    ingresoMensual[4][1] = 4800.33;
    ingresoMensual[2][6] = 1200;
 */

    // cadenas de caracteres de bajo nivel

    // char saludo[12]="Hola Mundo";

    // Registros objetos o estructuras deben de ir fuera de el main

    /*  Empleado empleado1;
    empleado1.identificador = 215;
    empleado1.salarioMensualBase = 3000;
 */

    // cadena de caracteres
    /* std::string holamundo("Hola Mundo");
std::string saludo;

char primeraLetra = holamundo.at(0);
int longitudHolaMundo = holamundo.length();
 */
    // tipo vector en C++ o vectores de alto nivel

    /* vector<float> ingresosPrimerTrimestre;

    ingresosPrimerTrimestre.push_back(1500);
    ingresosPrimerTrimestre.push_back(1400);
    ingresosPrimerTrimestre.push_back(1800);

    std::cout << ingresosPrimerTrimestre[0] << endl;
 */

    // salidas por pantalla

    cout << "Aprendiendo C++ con los cursos de Linkedin Learning" << endl;

    int numeroDeMienbrosPorEquipo = 7;

    cout << "El numero de mienmbros por equipos es: " << numeroDeMienbrosPorEquipo << " personas." << endl;

    float presoMedioEmpleado = 70.39;
    cout << "El peso medio de los empleados es de: " << presoMedioEmpleado << " Kg." << endl;

    char primeraLetraNombre = 'E';
    cout << "El candidato " << primeraLetraNombre << ". continua el proceso de seleccion" << endl;

    // punteros en C++

    /*  int32_t identificador = 20;
    int32_t *p_identificador = &identificador;

    // utilizar puntteros
    *p_identificador = 30;

    std::cout << "Contenido de ldentificador: " << identificador << endl;
    std::cout << "Contenido del p_identificador: " << p_identificador << endl;
 */
    // cambiar tipo de dato

    /*  float numeroDecimal = 4.1;
    int32_t numero = (int32_t)numeroDecimal;
 */
    return 0;
}