// 1. Hacer una funci�n llamada �producto� que reciba dos n�meros enteros y que devuelva el producto de ambos. 
//    Luego hacer un programa que pida el precio de un art�culo y la cantidad vendida y muestre por pantalla 
//    el monto total a pagar. Usar la funci�n.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int Producto(int, int);

int main()
{
    int P, C;
    float MT;

    cout << "Precio del articulo: $";
    cin >> P;
    cout << "Cantidad vendida: ";
    cin >> C;

    MT = Producto(P, C);

    cout << "\nTotal: $" << MT << endl;
    return 0;
}

int Producto(int A, int B)
{
    return A * B;
}
