#include <iostream>

using namespace std;






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

}


void partec (string pre[], float camax[],float camin[], float nu, float caac[], float porce[]) {
    float menor = 1000000;
    int pos=0;
    for(int i =0; i<nu; i++)
    {
        if(caac[i] > camin[i])
        {
            porce[i] = caac[i] / camax[i] * 100;
            //cout << "Porcentajes" << endl;
            //cout << endl;
           //  cout << porce[i] << endl;
           // cout << endl;
           //menor = porce[0];

            if( porce[i] < menor)
            {
                menor = porce[i];
                pos = i;
            }
        }


    }

        cout << "El porciento menor es: " << menor << " de " << pre[pos] << endl;




}


void parted(string pre[], float camax[], float camin[], int nu, float caac[]){

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

        if(caac[i]>=camin[i] && caac[i]<=camax[i]){ // ahi se evalua las presas que estan entre los niveles

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

        }


void partee (string pre[], float camax[], float camin[], float nu, float caac[]) {
    int temp=0;
    int pos=0;

         cout << "Informe de las presas descendente. " << endl;
            cout << "NOMBRE     CANT. ACTUAL    CANT. MAXIMA    CANT. MINIMA " << endl;

                for(int i=0; i<nu; i++)
                {
                    int menor=caac[i], pos=i;



                    for (int j=i; j<nu; j++)
                    {
                    if(caac[j] > menor){
                    menor=caac[j];
                    pos=j;


                    caac[pos]=caac[i];
                    caac[i]=menor;

                    string aux1=pre[i];
                    pre[i]=pre[j];
                    pre[j]=aux1;


                    int aux2=camax[i];
                    camax[i]=camax[j];
                    camax[j]=aux2;

                    int aux3=camin[i];
                    camin[i]=camin[j];
                    camin[j]=aux3;}
}

    if (camax[i] != 0 && camin[i] != 0 && caac[i] !=0 )
        {
            cout << pre[i] << "                 "  << caac[i] << "                 "  <<  camax[i] << "                 "  << camin[i]<< endl;
        }
/*
        if(caac[i] > camin[i])
        {
            float porce[20];
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
        } */
}


}


void info (string pre[], float camax[], float camin[], float nu, float caac[]){

     cout << "NOMBRE" <<  "     "  << "CANT. MIN."  <<  "     "  << "CANT. MAX."  <<  "     "  <<  "CANT. ACTUAL" << endl;
     cout << "-----------------------------------------------------" << endl;


    for ( int i=0; i<nu; i++)
    {
        if (camax[i] != 0 && camin[i] != 0 && caac[i] !=0 )
        {
               cout << pre[i] << "     "  <<  "     "  << camin[i] << "     "  <<  "     "  <<  camax[i] << "     "  <<  "     "  << caac[i]<< endl;

        }


    }
                cout << endl;
}


float insertar(string pre[], float camax[], float camin[], float nu, float caac[], float lenght2){
cout << endl;
            cout << "Entre la cantidad de presas a insertar: ";
cin >> lenght2;

       /*Guardar posicion pos; Poner n en posicion pos*/
    for (int i=nu; i<nu+lenght2; i++)
        {
                      cout << endl;
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
       //     lenght2++;

           cout << endl;

        }

    return nu+lenght2;
}


int eliminar (string pre[], float camax[], float camin[], float nu, float caac[], float lenght2){

            bool eliminate=false;

            string borrar;
             cout << "Inserte el nombre de presa que desea borrar: ";
             cin >> borrar;
        for(int i=0; i<nu; i++){


             if (pre[i] == borrar){
                 pre[i]= pre[i+1];
                 camax[i]=camax[i+1];
                 camin[i]=camin[i+1];
                 caac[i]=caac[i+1];
                 eliminate=true;
             }
             if (eliminate==true) {
                pre[i]= pre[i+1];
                 camax[i]=camax[i+1];
                 camin[i]=camin[i+1];
                 caac[i]=caac[i+1];

             }
        }
        if (eliminate==false){
            cout<<"No existe la Presa que buscabas."<<endl;
        }
        else {
            cout<<"La Presa ha sido eliminada."<<endl;
        }


        return nu=nu-1;
}




