/* Estudiante: Moises Alcivar Castillo; Fecha de entrega: 05-06-2024; Curso: 1ro de TICs
//Ejercicio 7: Diseñe el programa que usando un bucle while, imprima 100 números aleatorios 
//comprendidos entre 15 y 120 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL)); // Insertando una semilla para que los números aleatorios al azar sean diferentes en cada ocasión

    int contador = 0;

    while (contador < 100) {
        int num_aleatorio = 15 + rand() % (120 - 15 + 1); // Genera un número entre 15 y 120
        cout << num_aleatorio << endl;
        contador++;
    }

    return 0;
}