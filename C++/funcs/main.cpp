#include <iostream>

using namespace std;

/*
long facto (int n){
        int fact=1;
          for(int i =1; i<=n; i++)
    {
        fact=fact*i;

    }
    return fact;

}
*/

long fibo (int pri, int seg, int n){
    cout << pri << endl;
    cout << seg << endl;


    for( int i = 3; i <= n; i++)
    {

        int ultimo2 = seg + pri;
        cout << ultimo2 << endl;
        pri = seg;
        seg = ultimo2;

    }




}

int main()
{


    int m, ult, pen;
    ult = 1, pen = 0;


    cout << "Digite el n\243umero hasta que desea llegar." << endl;
    cin >> m;

    cout << endl;
    cout << fibo(pen, ult, m);

    /*
    cout << facto(n);
    */


























/*
    float h,g,x;
    int a,d;
//ENTRAR h,g,x, a,d;
    cin >> h;
    cin >> g;
    cin >> x;
    cin >> a;
    cin >> d;

    float w = 1/(-(1 + h/g * (h/g))/ a*a / (d*d)*(1 + x));
//MOSTRAR W
    cout << w;
    */

}
