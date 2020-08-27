#include <iostream>

using namespace std;

int main()
{
    float  vcsbate1, vcsbate2, vcsbate3, canth1, canth2, canth3, cantdob1, cantdob2, cantdob3, canttri1, canttri2, canttri3, cuad1, cuad2, cuad3, prom1, prom2, prom3, extrav1, extrav2, extrav3;
    string nombre1, nombre2, nombre3;
    int cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0,  cont6 = 0;

    cout << "Digite el nombre del bateador 1: " ;
    cin >> nombre1;

    cout << "Digite las veces al bate de este jugador: " ;
    cin >> vcsbate1;

    cout << "Digite la cantidad de hits de este jugador: ";
    cin >> canth1;

    cout << "Digite la cantidad de dobles de este jugador: ";
    cin >> cantdob1;

    cout << "Digite la cantidad de triples de este jugador: ";
    cin >> canttri1;

    cout << "Digite la cantidad de cuadrangulares de este jugador: ";
    cin >> cuad1;

    cout << endl;

    prom1 = (canth1 + cantdob1 + canttri1 + cuad1) / vcsbate1 *1000;


    cout << "Digite el nombre del bateador 2: " ;
    cin >> nombre2;

    cout << "Digite las veces al bate de este jugador: " ;
    cin >> vcsbate2;

    cout << "Digite la cantidad de hits de este jugador: ";
    cin >> canth2;

    cout << "Digite la cantidad de dobles de este jugador: ";
    cin >> cantdob2;

    cout << "Digite la cantidad de triples de este jugador: ";
    cin >> canttri2;

    cout << "Digite la cantidad de cuadrangulares de este jugador: ";
    cin >> cuad2;

    cout << endl;

    prom2 = (canth2 + cantdob2 + canttri2 + cuad2) /vcsbate2*1000;


    cout << "Digite el nombre del bateador 3: " ;
    cin >> nombre3;

    cout << "Digite las veces al bate de este jugador: " ;
    cin >> vcsbate3;

    cout << "Digite la cantidad de hits de este jugador: ";
    cin >> canth3;

    cout << "Digite la cantidad de dobles de este jugador: ";
    cin >> cantdob3;

    cout << "Digite la cantidad de triples de este jugador: ";
    cin >> canttri3;

    cout << "Digite la cantidad de cuadrangulares de este jugador: ";
    cin >> cuad3;

    cout << endl;

    prom3 = (canth3 + cantdob3 + canttri3 + cuad3) /vcsbate3 *1000;


    cout << endl;

    cout << "---------------------------" << endl;
    cout << "-- Datos del bateador 1 -- " << endl;
    cout << "---------------------------" << endl;
    cout << "El promedio  es: " << prom1 << endl;
    cout << "El nombre es: " << nombre1 << endl;
    cout << "Las veces al bate son: " << vcsbate1 << endl;
    cout << "La cantidad de hits son: " << canth1 << endl;
    cout << "La cantidad de dobles son: " << cantdob1 << endl;
    cout << "La cantidad de triples son: " << canttri1 << endl;
    cout << "La cantidad de cuadrangulares son: " << cuad1 << endl;
    cout << endl;

    cout << "---------------------------" << endl;
    cout << "-- Datos del bateador 2 -- " << endl;
    cout << "---------------------------" << endl;
    cout << "El promedio es: " << prom2 << endl;
    cout << "El nombre es: " << nombre2 << endl;
    cout << "Las veces al bate son: " << vcsbate2 << endl;
    cout << "La cantidad de hits son: " << canth2 << endl;
    cout << "La cantidad de dobles son: " << cantdob2 << endl;
    cout << "La cantidad de triples son: " << canttri2 << endl;
    cout << "La cantidad de cuadrangulares son: " << cuad2 << endl;
    cout << endl;


    cout << "---------------------------" << endl;
    cout << "-- Datos del bateador 3 -- " << endl;
    cout << "---------------------------" << endl;
    cout << "El promedio es: " << prom3 << endl;
    cout << "El nombre es: " << nombre3 << endl;
    cout << "Las veces al bate son: " << vcsbate3 << endl;
    cout << "La cantidad de hits son: " << canth3 << endl;
    cout << "La cantidad de dobles son: " << cantdob3 << endl;
    cout << "La cantidad de triples son: " << canttri3 << endl;
    cout << "La cantidad de cuadrangulares son: " << cuad3 << endl;
    cout << endl;



    if (prom1 != prom2 && prom1 != prom3 && prom2 != prom3 )
    {

        if(prom1 > prom2 && prom1 > prom3)
        {
                cout << "El tercer puesto es el " << nombre1 << " con " << prom1 << " de promedio." << endl;
                cont1++;
        }
        else if(prom2 > prom1 && prom2 > prom3)
        {
                cout << "El tercer puesto es el " << nombre2 << " con " << prom2 << " de promedio." << endl;
                cont2++;

        }
        else if(prom3 > prom1 && prom3 > prom2)
        {
            cout << "El tercer puesto es el " << nombre3 << " con " << prom3 << " de promedio." << endl;
            cont3++;

        }
    }
    else if ( prom1 == prom2 || prom1 == prom3 || prom2 == prom3)
    {


            if (prom1 == prom2 || prom1 == prom3 )
            {
                cout << "Extravases para el bateador 1: " ;
                cin >> extrav1;

                cout << endl;
            }
            if (prom2 == prom1 || prom2 == prom3 )
           {
                cout << "Extravases para el bateador 2: " ;
                cin >> extrav2;

                cout << endl;
           }
            if (prom3 == prom2 || prom3 == prom1 )
           {
                cout << "Extravases para el bateador 3: " ;
                cin >> extrav3;

                cout << endl;
           }


        if (extrav1 > extrav2 && extrav1 > extrav3)
        {
            cout << "El tercer puesto es para:  " << nombre1 << " con " << prom1 << " de promedio " << " y " << extrav1 << " extravases realizadas." << endl;

        }
        else if ( extrav2 > extrav1 && extrav2 > extrav3)
        {
            cout << "El tercer puesto es para:  " << nombre2 << " con " << prom2 << " de promedio " << " y " << extrav2 << " extravases realizadas." << endl;

        }
        else if ( extrav3 > extrav1 && extrav3 > extrav2)
        {
            cout << "El tercer puesto es para:  " << nombre3 << " con " << prom3 << " de promedio " << " y " << extrav3 << " extravases realizadas." << endl;

        }


    }

    if (cuad1 > cuad2 && cuad1 > cuad3)
    {

        cout << " El cuarto puesto es para: " << nombre1 << " con " << prom1 << " de promedio " << " y " << cuad1 << "  cuadrangulares." << endl;
        cont4++;
    }
    else if (cuad2 > cuad1 && cuad2 > cuad3)
    {
        cout << "El cuarto puesto es para: " << nombre2 << " con " << prom2 << " de promedio " << " y " << cuad2 << " cuadrangulares." << endl;
        cont5++;
    }
    else if (cuad3 > cuad1 && cuad3 > cuad2)
    {
        cout << "El cuarto puesto es para: " << nombre3 << " con " << prom3 << " de promedio " << " y " << cuad3 << " cuadrangulares." << endl;
        cont6++;
    }


/*
    if((cont2 == 1 && cont3 == 1) || (cont5 == 1 && cont6 == 1))
    {
        cout << "El quinto puesto es para: " << nombre1 << " con " << prom1 << " de promedio." << endl;
    }
    else if( cont1 ==1 && cont3 == 1 && cont4 == 1 && cont6 == 1)
    {
        cout << "El quinto puesto es para: " << nombre2 << " con " << prom2 << " de promedio." << endl;
    }
    else if( cont1 == 1 && cont2 == 1 && cont4 == 1 && cont5 == 1)
    {
        cout << "El quinto puesto es para: " << nombre3 << " con " << prom3 << " de promedio." << endl;
    }

*/



























}
