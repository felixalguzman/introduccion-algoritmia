#include <iostream>

using namespace std;

int main()
{
    int a, n, b, nn=0, nnv;

    cout << "Digite el n\243mero que desea boltear." << endl;
    cin >> n;


    while( n > 0)
    {
        a= n/10;
        b= n%10;
        nnv= nnv+b;

        nn= nn*10+b;
        n=a;


    }
        cout << nn << endl;
        cout << nnv << endl;




}
