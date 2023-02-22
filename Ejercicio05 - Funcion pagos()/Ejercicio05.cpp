// 5. Hacer una función llamada “pagos” que reciba un monto (float) y una cantidad de pagos (entero) y devuelva 
//    el monto de cada pago. 
//    Hacer un programa para ingresar 10 ventas. Para cada venta se conoce el monto y la cantidad de pagos. 
//    El programa deberá mostrar la cantidad de pagos y el monto del pago para cada una de las ventas.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

float Pagos(float, int);

int main()
{
    int M, CP;
    float MC;

    for (int i = 0; i < 10; i++)
    {

        cout << "Ingrese el monto: $";
        cin >> M;
        cout << "Ingrese la cantidad de pagos: ";
        cin >> CP;
        cout << endl;

        MC = Pagos(M, CP);

        cout << "Numero de pagos: " << CP << endl;
        cout << "Monto de cada pago: $" << MC << "\n" << endl;
    }
    return 0;
}

float Pagos(float M, int C)
{
    return M / C;
}