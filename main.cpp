#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
     * Escriba un programa que verifique si el número ingresado por el usuario es un número estrobogramático
     * Un número estrobogramático es aquel que se ve exactamente igual cuando se gira 180 grados, es decir si se pusiera de cabeza se vería exactamente igual
     * Ejemplo 1: 88 ---> Sí es un número estrobogramático
     * Ejemplo 2: 69 ---> Sí es un número estrobogramático
     * Ejemplo 3: 123 ---> No es un número estrobogramático
     * Ejemplo 4: 668 ---> No es un número estrobogramático
     * Ejemplo 5: 10801 ---> Sí es un número estrobogramático
     * Clave 1: Si un número tiene al menos uno de estos dígitos: 2, 3, 4, 5 o 7, entonces no es un número estrobogramático
     * Clave 2: No solo basta con tener los dígitos correctos, recuerde que al girarlo 180 grados se debe tener el mismo orden
     */
    cout << "Challenge #2" << endl;
    int num;
    cout << "Ingrese un numero:" << endl;
    cin >> num;
    // Comience a programar desde aquí
    return 0;
}
