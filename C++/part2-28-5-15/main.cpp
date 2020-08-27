#include <iostream>

using namespace std;

/* Escriba un programa que imprima el cuadrado del mayor de dos numeros introducidos por teclado. Ademas diga si el mayor es multiplo del menor */
int main()
{
    int num1, num2, res, mul;

    cout << "Digite el primer numero: " << endl;
    cin >> num1;

    cout << "Digite el segundo numero: " << endl;
    cin >> num2;


    if (num1 > num2)
    {
        res = num1*num1;

        cout << "El numero mayor al cuadrado es: " << res << endl;

    }
    else
    {
        res = num2*num2;
        cout << "El numero mayor al cuadrado es: " << res << endl;

    }

    mul = num1 % num2;

    if ( mul == 0)
    {
        cout << "El numero es multiplo " << endl;
    }
    else
    {
        cout << "El numero no es multiplo " << endl;
    }

}
