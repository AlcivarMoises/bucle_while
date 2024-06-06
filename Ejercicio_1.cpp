//Estudiante: Moises Alcivar Castillo; Fecha de entrega: 05-06-2024; Curso: 1ro de TICs
//Diseñe el programa que imprima los multiplos de 4, comprendidos entre 1 y 50
//Use Bucle While
#include<iostream>
using namespace std;

int main ()
{
    int k=1;
    while (k <= 25)
    {
       cout<<endl<<k*4;
       k++;
    }
    //otra forma
    cout<<endl<<"Forma dos";
    k=0;
      while (k < 25)
    {
        k++;
       cout<<endl<<k*4;
       
    }
    return 0;
}