//Estudiante: Moises Alcivar Castillo; Fecha de entrega: 05-06-2024; Curso: 1ro de TICs
//Diseñe un promgrama que solicite una tabla de multiplicar 
//Y a continuación imprima sus resultados del 12 al 1
//Use Bucle Do While

#include<iostream>
using namespace std;

int main ()
{
    int tabla;
    cout<<endl<<"Por favor ingresa la tabla que deseas: ";
    cin>>tabla;

    int k=12;
    
    do
    {
        cout<<endl<<tabla << "X" << k <<" = "<<(tabla*k);
        k--;
    }while (k >=1);
    

    return 0;
}