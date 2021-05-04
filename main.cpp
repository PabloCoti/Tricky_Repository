#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
void check(int number){
    // int largo = number.length();
    // string digito[largo];
    // for (int i = 0; i < largo; i++){
    //     //no estoy seguro de cómo hacerlo con string :)))))
    // }
    int digit[9999], tentimes = 10, reverse[9999]; bool check = true;
    digit[0] = number%10;
    for (int i = 0; i < number; i++){
        for (int j = 0; j < i; j++){
            tentimes = tentimes*tentimes;
        }
        digit[i] = (number)/(tentimes%10);
        if (digit[i] == 2 || digit[i] == 3 || digit[i] == 4 || digit[i] == 5 || digit[i] == 7){
            cout << "No es estrobogramático!\n";
            check = false;
            break;
        }else{
            switch (digit[i]){
                case 1:
                reverse[i] = 1;
                //en este momento me dí cuenta de que con string hubiera sido mucho más fácil :')
                break;
                case 6:
                reverse[i] = 9;
                break;
                case 8:
                reverse[i] = 8;
                break;
                case 9:
                reverse[i] = 9;
                break;
                case 0:
                reverse[i] = 0;
                break;
            }
            
        }
    }
    if (check == true) cout << "Es estrobogramático!!!\n";

}
int main(){
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
    cout << "Ingrese un numero: " << endl;
    cin >> num;
    // Comience a programar desde aquí
    check(num);
    return 0;
}