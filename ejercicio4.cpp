/*
Programador: Josue Isaias Martinez
Fecha: 12/10/2021
Descripcion:

5.5. ¿Cuál es la salida del siguiente bucle?
suma = 0;
while (suma < 100)
 suma += 5;
cout << suma << endl;

salida = 95 X MALO 
Salida es 100
*/
#include <iostream>

using namespace std;

int main()
{
    int suma;
    suma = 0;
    while (suma < 100)
    {
        suma += 5; // -------- Ya ha sumado los 5 a 95[Maloooooo]
        cout << suma << endl;
    }
    return 0;
}