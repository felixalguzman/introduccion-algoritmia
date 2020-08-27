#include <iostream>
#include "funciones.h"
#include <stdlib.h>
using namespace std;


        string presas[20];
        float lenght=0;
        float cantmin[20];
        float cantmax[20];
        float cantact[20];
        float n;
        char opcion;
        float porc[20];
        float pos;

        int cont1 =0, cont2 = 0, cont3 = 0;



int main()
{

    cout << "Cuantas presas deseas evaluar ?"<< endl;
    cin >> n;

       cuantapresa(lenght, presas, cantmax, cantmin, n, cantact);
          system("pause>nul");
            system("cls");
    do{
    cout << endl;
    cout << "------------------------------------------------------------------"<< endl;
    cout << "           Digite la opci\242n que desee: " << endl;
    cout << "------------------------------------------------------------------"<< endl;
    cout<< endl;
    cout << "Digite 1: Para mostrar un informe de las presas que se"<< endl;
    cout << "          encuentran actualmente a plena capacidad. " << endl;
    cout << endl;
    cout << "Digite 2: Para mostrar la cantidad total de agua almacenada"<< endl;
    cout << "         en el pa\241s hoy en d\241a. " << endl;
    cout << endl;
    cout << "Digite 3: Para mostrar la presa con el porcentaje "<< endl;
    cout << "          m\240s bajo con respecto a su capacidad m\240xima." << endl;
    cout << endl;
    cout << "Digite 4: Para mostrar cuantas presas se encuentran" << endl;
    cout << "          por encima del nivel m\240ximo, cuantas por debajo del" << endl;
    cout << "          m\241nimo y cuantas est\240n entre ambos niveles. " << endl;
    cout << endl;
    cout << "Digite 5: Para mostrar un informe orden descendente," << endl;
    cout << "          teniendo en cuenta la capacidad actual de" << endl;
    cout << "          cada una de las presas. " << endl;
    cout << endl;
    cout << "Digite 0 para salir." << endl;
    cout << endl;

    cin >> opcion;

    switch(opcion){

    case '1':

            cout << endl;
        partea(presas, cantmax, cantmin, n, cantact);
        system("pause>nul");
        system("cls");
        break;


    case '2':
            cout << endl;
        parteb(n, cantact);
          system("pause>nul");
            system("cls");

        break;

    case '3':
            cout << endl;
         partec(presas, cantmax, cantmin, n, cantact, porc);
              system("pause>nul");
            system("cls");
        break;

    case '4':
            cout << endl;
         parted(presas, cantmax, cantmin, n, cantact);
          system("pause>nul");
            system("cls");

        break;

    case '5':
            cout << endl;
          partee (presas, cantmax, cantmin, n, cantact);
          system("pause>nul");
            system("cls");

        break;





    }
    }while(opcion != '0');
}
