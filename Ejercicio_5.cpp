//Estudiante: Moises Alcivar Castillo; Fecha de entrega: 05-06-2024; Curso: 1ro de TICs.
//Se lee un número por teclado que representa una tabla de multiplicar. Imprima los resultados de la tabla de multiplicar desde el 1 al 12.

//Use un bucle do..while para que se impriman varias tablas de multiplicar. El bucle termina cuando el usuario ingresa como tabla el número cero.
#include <iostream>
using namespace std;

int main() {
    int numero;

    do {
        
        cout << "Ingrese un número para la tabla de multiplicar (0 para salir): ";
        cin >> numero;

        
        if (numero == 0) {
            break;
        }

       
        cout << "Tabla de multiplicar del " << numero << ":" << endl;
        for (int i = 1; i <= 12; ++i) {
            cout << numero << " x " << i << " = " << numero * i << endl;
        }

        cout << endl; 

    } while (numero != 0);

    cout << "Programa terminado." << endl;
    return 0;
}
