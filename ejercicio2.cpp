/*
Programador: Josue Isaias Martinez
Fecha: 12/10/2021
Descripcion:

5.3. ¿Cuál es la salida de los siguientes bucles?
int n, m;
for ( n = 1; n <= 10; n++)
 for (m = 10; m >= 1; m––)
    cout << n << "veces" << m << " = " << n * m << endl;
    n
    1 * 10
    1 * 9
    1 * 8
    ...
    1 * 1

    2 * 10
    ...
    2 * 1

    10 * 10
    ...
    10 * 1
*/
#include <iostream>

using namespace std;

int main()
{
    int n, m;
    for (n = 1; n <= 10; n++)
    {
        for (m = 10; m >= 1; m--)
            cout << n << " veces " << m << " = " << n * m << endl;
        cout << endl;
    }

    return 0;
}