/*
Programador: Josue Isaias Martinez
Fecha: 12/10/2021
Descripcion:
5.4. Escriba un programa que calcule y visualice
1 + 2 + 3 + ... + (n-1) + n

n = 5 
1 + 2 + 3 + ... + 5

donde n es un valor de un dato.
*/
#include <iostream>

using namespace std;

int main()
{
    int n = 5, suma = 0;
    for (int i = 1; i <= n; i++)
    {
        suma += i;
    }

    cout << "El resultado de la suma es: "  << suma << endl;
    return 0;
}