#include <iostream>

using namespace std;


/* Un trabajador cobra un salario fijo por 192 horas de trabajo al mes (24 dias laborales por 8 horas diarias) mas el 5% de la tarifa horaria por cada una de las primeras 10 horas extras si las hace, mas el 10% de la tarifa horaria por cada hora extra por encima de las 10 primeras. Conociendo el salario fijo y la cantidad de horas trabajadoas por un trabajador calcular su salario.*/
int main()
{

 float salariofijo, horas, salarioph, horasex, salariotot, pph;

 cout << "Digite el salario: " << endl;
 cin >> salariofijo;

 cout << "Digite las horas trabajadas: " << endl;
 cin >> horas;

salarioph = salariofijo / 192;
horasex = horas - 192;
pph = salariofijo / 192;

 if (horasex == 0)
    {

        cout << "El salario por hora es: " << salariofijo << endl;
        cout << "El salario por hora es: " << pph;

    }
    else if ( horasex <= 10 )
        {
            salariotot = salarioph * 1.05 * horasex + salariofijo;
            cout << "El salario total es: " << salariotot << endl;
            cout << "El salario por hora es: " << pph;

        }
        else
            {
                salariotot = (10 * salarioph *1.05) + (horasex - 10) * (salarioph * 1.1)+ salariofijo;
                cout << "El salario es: " << salariotot << endl;
                cout << "El salario total es: " << pph;

            }

}
