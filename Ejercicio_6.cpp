#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

int main() {
    int num_usuario;
    int intento = 1;
    bool adivinaste = false;

   
    srand(time(NULL));
    int aleatorio = 1 + rand() % 50;  

    do {
        cout << "Ingresa un número (intento " << intento << " de 3): ";
        cin >> num_usuario; 

        if (num_usuario < aleatorio) {
            cout << "Debes ingresar un número mayor." << endl;
        } else if (num_usuario > aleatorio) {
            cout << "Debes ingresar un número menor." << endl;
        } else {
            adivinaste = true;
            cout << "Felicidades, ganaste una beca en la PUCE Esmeraldas!" << endl;
        }

        intento++;
    } while (intento <= 3 && !adivinaste);

    if (!adivinaste) {
        cout << "Lo siento, se han agotado tus 3 intentos. El número era: " << aleatorio << endl;
    }

    return 0;
}
