//Estudiante: Moises Alcivar Castillo; Fecha de entrega: 05-06-2024; Curso: 1ro de TICs
//diseñe unprograma que genere un numero aleatoreo
//El usuario debe adivinar el numero en 3 oportunidades 
//uso numeros aleatorios y blucle while o do while 
#include <iostream>
#include <cstdlib> 
#include <time.h>   
using namespace std;

int main() {
    int num_usuario;
    int intento;
   
    srand(time(NULL));
    int aleatorio = 1 + rand() % (50);

    //ESTE BUCLE NO ES CORRECTO
    
    while (  intento = 1,intento <= 3) {
        intento ++;
    cout << "Ingresa un numero: ";
    cin>>num_usuario; 
    
    

    if(num_usuario < aleatorio)

    cout<<endl<<"Ingresaste el"<< num_usuario <<endl<<
    ".Debes ingresar un numero mayor"<<endl;

    else if (num_usuario > aleatorio)

    {

    cout<<endl<<"Ingresaste el :"<<  num_usuario <<endl<<
    ".Debes ingresar un numero menor"<<endl;

    }
    else

    cout<<endl<<"Felicidades, ganaste una beca en la puce esmeraldas";
    

    }
  

    return 0;
}
