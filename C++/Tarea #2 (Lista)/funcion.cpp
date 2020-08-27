#include <iostream>
using namespace std;

float formulapro (int p, float sum){

    float porc;

    porc = p / sum *100;

    return porc;
}

float formulp1 (int pa1, int pa2, int pa3, int pa4, int pa5){

    float sum, porc1, porc2, porc3, porc4, porc5;
    sum = pa1 + pa2 + pa3 + pa4 + pa5;

    porc1 = formulapro(pa1, sum);
    cout << "    " << pa1 << "         "  ;
    for(int i =0; i< porc1; i++)
        {
            cout << "*";
        }
        cout << " " << porc1 << "%" << endl;

    porc2 = formulapro(pa2, sum);
    cout << "    " << pa2 << "         " ;
    for(int i =0; i< porc2; i++)
    {
        cout << "*";
    }
    cout <<  " " << porc2 << "%"  <<endl;

    porc3 = formulapro(pa3, sum);
    cout << "    " << pa3 << "         " ;
    for (int i =0; i< porc3; i++)
    {
        cout << "*";
    }
    cout << " " << porc3 << "%" << endl;

    porc4 = formulapro(pa4, sum);
    cout << "    " << pa4 << "         " ;
    for(int i =0; i<porc4; i++)
    {
        cout << "*";
    }
    cout << " " << porc4 << "%" << endl;

    porc5 = formulapro(pa5, sum);
    cout << "    " << pa5 << "         " ;
    for(int i =0; i< porc5; i++)
    {
        cout << "*";
    }
    cout <<  " " << porc5 << "%" << endl;


}
