#include <iostream>
#include <cstdlib>
#define PI 3.1416
using namespace std;

int main()
{


    int base, altura, resultado, radio;
    char opcion;

    cout << endl;
    cout << "Digite la opcion que desee: " << endl;
    cout << "Presione 1 para calcular el area del rectangulo " << endl;
    cout << "Presione 2 para calcular el area del triangulo " << endl;
    cout << "Presione 3 para calcular el area del circulo " << endl;
     cin >> opcion;
    cout << endl;

    system("cls");



    switch (opcion)
    {
            case '1':
                cout << "* Programa para calcular el area  de un rectangulo *" << endl;
                cout << "-----------------------------------------------------" << endl;

                cout << "Digite la base: " ;
                cin >> base;

                cout << "Digite la altura: " ;
                cin >> altura;

                resultado = base * altura;

                cout << endl;
                cout << "El area del rectangulo es: " ;
                cout << resultado << endl;


                system("pause>nul");
                system("cls");



        break;

            case '2':

                cout << "* Programa para calcular el area del triangulo *" << endl;
                cout << "-------------------------------------------------" << endl;
                cout << "Digite la base: ";
                cin >> base;

                cout << "Digite la altura: ";
                cin >> altura;

                resultado = (base * altura)/ 2;

                cout << endl;
                cout << "El area del triangulo es: " << resultado << endl;

                system("pause>nul");
                system("cls");

        break;


            case '3':

                cout << "* Programa para calcular el area del circulo *" << endl;
                cout << "----------------------------------------------" << endl;
                cout << "Digite el radio: " << endl;
                cin >> radio;

                resultado = PI*radio*radio;

                cout << endl;
                cout << "El area del circulo es: " <<  resultado << endl;

                system("pause>nul");
                system("cls");


        break;

    }











}
