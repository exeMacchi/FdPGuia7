// 2. Hacer una función llamada “mayor” que reciba dos números enteros y devuelva el mayor de ellos 
//    o cero si son iguales.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int Mayor(int, int);

int main()
{
    int A, B, R;

    cout << "Ingrese el primer numero: ";
    cin >> A;
    cout << "Ingrese el segundo numero: ";
    cin >> B;

    R = Mayor(A, B);

    if (R != 0)
    {
        cout << "\nEl maximo es: " << R << endl;
    }
    else
    {
        cout << "\nAmbos numeros son iguales." << endl;
    }

    return 0;
}

int Mayor(int N1, int N2)
{
    if (N1 == N2)
    {
        return 0;
    }
    else if (N1 > N2)
    {
        return N1;
    }
    else
    {
        return N2;
    }
}