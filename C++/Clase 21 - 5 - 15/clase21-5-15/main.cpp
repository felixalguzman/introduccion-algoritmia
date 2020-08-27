#include <iostream>

using namespace std;

int main()
{


    int base, altura, resultado;
    char opcion;

    cout << "***************************************************************" << endl;
    cout << "* Programa para calcular el area y perimetro de un rectangulo *" << endl;
    cout << "***************************************************************" << endl;
    cout << "Digite la base: " ;
    cin >> base;

    cout << "Digite la altura: " ;
    cin >> altura;

    cout << endl;
    cout << "Digite la opcion que desee: " << endl;
    cout << "Presione 1 para calcular el perimetro del rectangulo " << endl;
    cout << "Presione 2 para calcular el area del rectangulo " << endl;

    cin >> opcion;
    cout << endl;

    if(opcion == '1')
        {
            cout << "El perimetro del rectangulo es: " << endl;
            resultado= 2*altura+2*base;

            cout << resultado << endl;


        }
        else if(opcion == '2')
            {

                resultado = base * altura;

                cout << endl;

                cout << "El area del rectangulo es: " ;

                cout << resultado << endl;


            }
            else if (opcion != 1 || opcion != 2 )
                {
                    cout << "La opcion no es valida. " << endl;
                }
















}
