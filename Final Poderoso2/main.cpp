#include <iostream>
#include "funciones.h"
#include <stdlib.h>
using namespace std;


        string presas[20] = {"Taveras", "Checo", "Sabaneta", "Moncion", "Rincon", "Jaguey", "Jimenoa"};
        float lenght=0;
        float cantmin[20]  = {20, 350, 200, 120, 32, 500, 25};
        float cantmax[20] = {100, 500, 600, 400, 80, 900, 350};
        float cantact[20] = {80, 500, 199, 456, 50, 845, 270};

        char opcion;
        float porc[20];
        float pos;





int main()
{
int n=7;



    do{
    cout << endl;
    cout << "------------------------------------------------------------------"<< endl;
    cout << "           Digite la opci\242n que desee: " << endl;
    cout << "------------------------------------------------------------------"<< endl;
    cout<< endl;
    cout << "Digite 1: Para mostrar todas las presas del programa"<< endl;
   // cout << "          encuentran actualmente a plena capacidad. " << endl;
    cout << endl;
    cout << "Digite 2: Para agregar una o mas presas."<< endl;
    // cout << "         en el pa\241s hoy en d\241a. " << endl;
    cout << endl;
    cout << "Digite 3: Para eliminar una presa."<< endl;
   // cout << "          m\240s bajo con respecto a su capacidad m\240xima." << endl;
    cout << endl;
    cout << "Digite 4: Para mostrar presas que se encuentran" << endl;
    cout << "          en plena capacidad" << endl;
    //cout << "          m\241nimo y cuantas est\240n entre ambos niveles. " << endl;
    cout << endl;
    cout << "Digite 5: Para mostrar el total de agua almacenada" << endl;
    cout << "          hoy en dia." << endl;
    //cout << "          cada una de las presas. " << endl;
    cout << endl;
    cout << "Digite 6: Para Mostrar el porcentaje mas bajo del " << endl;
    cout << "          deposito con respecto a su capacidad m\240xima," << endl;
    cout << "          estando encima de la cantidad minima" << endl;
    cout << endl;
    cout << "Digite 7: Para mostrar cuantas presas se encuentran"<<endl;
    cout << "          por encima del nivel m\240ximo, cuantas por "<<endl;
    cout << "          debajo del mínimo y cuantas est\240n entre "<<endl;
    cout << "          ambos niveles."<< endl;
    cout << endl;
    cout << "Digite 8: Para mostrar un informe orden descendente " << endl;
    cout << "          teniendo en cuenta la capacidad actual de " << endl;
    cout << "          cada una de las presas." << endl;
    cout << endl;
    cout << "Digite 0 para salir." << endl;
    cout << endl;

    cin >> opcion;

    switch(opcion){

    case '1':
        system("cls");
        cout<< endl;
        info (presas, cantmax, cantmin, n, cantact);
        system("pause");
        system("cls");

     //       cout << endl;
     //   partea(presas, cantmax, cantmin, n, cantact);
      //  system("pause>nul");
      //  system("cls");
        break;


    case '2':
        system("cls");
        cout << endl;
        n=   insertar(presas, cantmax, cantmin, n, cantact, lenght);
        system("pause");
        system("cls");
    //        cout << endl;
      //  parteb(n, cantact);
        //  system("pause>nul");
          //  system("cls");

        break;

    case '3':
        system("cls");
        cout << endl;
        n=eliminar (presas, cantmax, cantmin, n, cantact, lenght);
     //       cout << endl;
       //  partec(presas, cantmax, cantmin, n, cantact, porc);
              system("pause");
              system("cls");
        break;

    case '4':
        cout << endl;
        partea(presas, cantmax, cantmin, n, cantact);
       //  parted(presas, cantmax, cantmin, n, cantact);
          system("pause");
            system("cls");

        break;

    case '5':
            cout << endl;
          parteb(n, cantact);
          //partee (presas, cantmax, cantmin, n, cantact);
          system("pause");
        system("cls");

        break;

    case '6':
        cout << endl;
        partec(presas, cantmax, cantmin, n, cantact, porc);
       // info (presas, cantmax, cantmin, n, cantact);
        system("pause");
        system("cls");
        break;

    case '7':
        system("cls");
        cout<<endl;
        parted(presas, cantmax, cantmin, n, cantact);
        // n=    insertar(presas, cantmax, cantmin, n, cantact, lenght);
        system("pause");partee (presas, cantmax, cantmin, n, cantact);
        system("cls");

        break;


    case '8':

        cout<< endl;
       partee (presas, cantmax, cantmin, n, cantact);
        system("pause");
        system("cls");

        break;


    }
    }while(opcion != '0');
    cout<<"Usted ya puede salir del Programa"<<endl;
}
