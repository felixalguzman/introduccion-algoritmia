#include <iostream>

using namespace std;

// Sucesion de fibonacci.
int main()
{
    int n, ult = 1, pen = 0;


    cout << "Digite el n\243umero hasta que desea llegar." << endl;
    cin >> n;

    cout << endl;
    cout << pen << endl;
    cout << ult << endl;


    for( int i = 3; i <= n; i++)
    {

        int ultimo2 = ult + pen;
        cout << ultimo2 << endl;
        pen = ult;
        ult = ultimo2;

    }



}
