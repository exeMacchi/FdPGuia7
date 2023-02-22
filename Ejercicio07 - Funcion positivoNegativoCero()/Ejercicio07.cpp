/*
   7. Hacer una funci�n de tipo void (porque no va a devolver nada) llamada �positivoNegativoCero� que reciba
      un n�mero por valor y una variable por referencia. Que analice el n�mero y escriba variable recibida por
      referencia con:
         a. 1 si el n�mero es positivo.
         b. - 1 si el n�mero es negativo.
         c. 0 si el n�mero es cero.
      Hacer un programa main que permita ingresar 100 n�meros y emitir por pantalla cu�ntos son positivos,
      cu�ntos negativos y cu�ntos cero.
*/


#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void positivoNegativoCero(int, int&);

int main()
{
    int N, conPos = 0, conNeg = 0, conCero = 0, PNC;

    for (int i = 0; i < 10; i++)
    {
        cout << i + 1 << ". Ingrese un numero: ";
        cin >> N;

        positivoNegativoCero(N, PNC);

        switch (PNC)
        {
        case 1:
            conPos++;
            break;

        case -1:
            conNeg++;
            break;

        default:
            conCero++;
            break;
        }
    }

    cout << "\nCantidad de numeros positivos: " << conPos;
    cout << "\nCantidad de numeros negativos: " << conNeg;
    cout << "\nCantidad de ceros: " << conCero << endl;
    return 0;
}

void positivoNegativoCero(int N, int& Var)
{
    if (N == 0)
    {
        Var = 0;
    }
    else if (N > 0)
    {
        Var = 1;
    }
    else
    {
        Var = -1;
    }
}