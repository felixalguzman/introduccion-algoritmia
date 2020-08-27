#include <iostream>

using namespace std;
//
int main()
{
    int lim, cont =0;

    cout << "Digite el n\243mero que desea de limite para buscar numeros primos." << endl;
    cin >> lim;

    for(int n=1; n<=lim; n++)
    {

        bool primo = true;
        for (int i =2; i<=n/2; i++)
        {
            if( n % i == 0)
            {
                primo = false;
            }

        }

        if (primo)
        {
            cout << n << endl;
            cont++;
        }

    }

    cout << endl << "Hay " << cont << " n\243meros primos." << endl;
}



