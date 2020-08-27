#include <iostream>

using namespace std;




void cuantapresa (float lenght2, string pre[], float camax[], float camin[], float nu, float caac[]){

        for(int i=lenght2; i<nu; i++)
    {
            cout << "Entre el nombre de la presa: ";
                cin >> pre[i];
            cout << "Entre la cantidad minima de la presa: " ;
                cin >> camin[i];

                    cout << "Entre la cantidad maxima de la presa: " ;
                    cin >> camax[i];
                while(camin[i] >= camax[i])
                    {

                            cout << "Error! la cantidad m\240xima no puede ser menor o igual que la minima." << endl;
                            cout << "Entre la cantidad m\240xima de la presa: " ;
                            cin >> camax[i];

                    }
            cout << "Entre la cantidad actual la presa: " ;
                cin >> caac[i];
            lenght2++;

           cout << endl;
    }
      cout << "PRESIONE ENTER PARA CONTINUAR AL MENU " << endl;
            cout << endl;


}


 void partea (string pre[], float camax[], float camin[], float nu, float caac[]){

     cout << "NOMBRE" <<  "     "  << "CANT. MIN."  <<  "     "  << "CANT. MAX."  <<  "     "  <<  "CANT. ACTUAL" << endl;
     cout << "------------------------------------------------------------------------------------" << endl;
    for ( int i=0; i<nu; i++){

        if(caac[i] > camin[i] && caac[i] < camax[i] )
        {
            cout << pre[i] << "     "  <<  "     "  << camin[i] << "     "  <<  "     "  <<  camax[i] << "     "  <<  "     "  << caac[i]<< endl;

        }

    }
    cout << endl;
      cout << "PULSE CUALQUIER TECLA PARA CONTINUAR AL MENU " << endl;
            cout << endl;
 }



void parteb(float nu, float caac[] ){
    float sum=0;
    for(int i=0; i<nu;i++)
    {
        sum+= caac[i];
    }
    cout << "La suma total de la cantidad de agua actual es: " ;
    cout<< sum;
    cout << endl;
    cout << endl;
       cout << "PULSE CUALQUIER TECLA PARA CONTINUAR AL MENU " << endl;
            cout << endl;
}


void partec (string pre[], float camax[],float camin[], float nu, float caac[], float porce[]) {
    float menor=0;
    int pos=0;
    for(int i =0; i<nu; i++)
    {
        if(caac[i] > camin[i])
        {
            porce[i] = caac[i] / camax[i] * 100;
            //cout << "Porcentajes" << endl;
            //cout << endl;
            // cout << porc[i] << endl;
           // cout << endl;
            menor = porce[0];

            if( porce[i] < menor)
            {
                menor = porce[i];
                pos = i;
            }
        }


    }

        cout << "El porciento menor es: " << menor << " de " << pre[pos] << endl;
        cout << endl;

        cout << endl;
        cout << "PULSE CUALQUIER TECLA PARA CONTINUAR AL MENU " << endl;
            cout << endl;

}


  void parted(string pre[], float camax[], float camin[], float nu, float caac[]){

    int cont1 =0, cont2 =0, cont3=0;

    for ( int i=0; i<nu; i++)
        {
        if (caac[i]>camax[i])
        { // ahi se evalua las presas por encima del nivel maximo
        cont1++;

        }
        if (caac[i]<camin[i]){ // ahi se evalua las presas por debajo del nivel minimo

            cont2++;
        }

        if(caac[i]>camin[i] && caac[i]<camax[i]){ // ahi se evalua las presas que estan entre los niveles

            cont3++;
        }
        }
        cout << endl;
        cout << "La cantidad de presas por encima del maximo nivel son: ";
        cout << cont1<< endl;
        cout << "La cantidad de presas por debajo del minimo nivel son: ";
        cout << cont2<< endl;
        cout << "La cantidad de presas entre el maximo nivel y minimo nivel son: ";
        cout << cont3<< endl;

            cout << endl;
        cout << "PULSE CUALQUIER TECLA PARA CONTINUAR AL MENU " << endl;
            cout << endl;

    }

      void partee (string pre[], float camax[], float camin[], float nu, float caac[]) {
    int temp=0;
    int pos=0;

         cout << "Informe de las presas descendente. " << endl;
            cout << "NOMBRE     CANT. ACTUAL    CANT. MAXIMA    CANT. MINIMA " << endl;
                for(int i=0; i<nu; i++)
                {
                    for(int j=0; j<nu-1;j++)
                    {
                        if(caac[j] < caac[j+1])
                        {
                          temp= caac[j];
                          caac[j] = caac[j+1];
                          caac[j+1] = temp;
                          pos=temp;
                          cout << pre[pos]  << "     " << caac[pos] <<  "   " <<  camax[pos] <<  "   " << camin[pos] << endl;
                        }
                    }
                }





                cout << endl;
        cout << "PULSE CUALQUIER TECLA PARA CONTINUAR AL MENU " << endl;
            cout << endl;


  }
