// Programa33.cpp : Imprimir la suma y el producto de todos los posibles pares diferentes de enteros del 15 al 20.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Imprimir la suma y el producto de todos los posibles pares diferentes de enteros del 15 al 20, por favor, ingrese el numero 20" << endl;
    cin >> n;
    for (int p = 15; p <= n; p += 2) {
        cout << p << " ";
    }
    return 0;
}
