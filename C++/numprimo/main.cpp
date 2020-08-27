#include <iostream>

using namespace std;
// Programar una funcion que devuelva true si es un numero es primo y false en caso contrario.
int main()
{
    int n;
    bool p = true;

    cout << "Digite el n\243umero hasta que desea llegar." << endl;
    cin >> n;

    for(int i = 2; i < n; i++)
    {
        if( n % i == 0)
        {
            p=false;
        }


    }
    if (p)
    {
        cout << "Es primo." << endl;
    }
    else
    {
            cout << "No es primo." << endl;

    }

}
