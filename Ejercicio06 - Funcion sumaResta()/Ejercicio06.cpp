// 6. Hacer una funci�n que se llame �sumaResta� que reciba dos n�meros y que devuelva la suma y 
//    la resta del primer n�mero con el segundo.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int sumaResta(int, int&);

int main()
{
    int A, B, S;

    cout << "Ingrese el primer numero: ";
    cin >> A;
    cout << "Ingrese el segundo numero: ";
    cin >> B;

    S = sumaResta(A, B);

    cout << "\nLa suma es: " << S;
    cout << "\nLa resta es: " << B << endl;
    return 0;
}

int sumaResta(int N1, int& N2)
{
    int Suma = N1 + N2;
    N2 = N1 - N2;
    return Suma;
}