#include <iostream>
#include  "funcion.h"

using namespace std;




int main()
{
    float p1, p2, p3, p4, p5;

    cout << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "PROGRAMA PARA CALCULAR EL % DE MEDALLAS DE 5 PAISES " << endl;
    cout << "----------------------------------------------------" << endl;
    cout << endl;

    cout << "Digite la cantidad de medallas para el pa\241s #1: ";
    cin >> p1;
    cout << "Digite la cantidad de medallas para el pa\241s #2: ";
    cin >> p2;
    cout << "Digite la cantidad de medallas para el pa\241s #3: ";
    cin >> p3;
    cout << "Digite la cantidad de medallas para el pa\241s #4: ";
    cin >> p4;
    cout << "Digite la cantidad de medallas para el pa\241s #5: ";
    cin >> p5;

    cout << endl << endl;
    cout << " Medallas      Gr\240fica de Porcentajes " << endl;
    cout << "---------------------------------------------" << endl;


    formulp1(p1, p2, p3, p4, p5);




}
