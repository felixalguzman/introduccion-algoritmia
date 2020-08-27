#include <iostream>
#include <math.h>

using namespace std;


float hip (int a, int b){

    float result;

    result = sqrtf((a*a) + (b*b));
    return result;
}

int main()
{
   int x, y;

   cout << "Digite 2 numeros: " << endl;
   cin >> x;
   cin >> y;

   cout << hip(x,y);


    /* int a;

    cin >> a;

    for (int i =1; i<=a; i++)
    {
        cout << ":";

    }
