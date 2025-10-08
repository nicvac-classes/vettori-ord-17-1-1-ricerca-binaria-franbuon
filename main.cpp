#include <iostream>
using namespace std;

int main() {
    int N, i, j, t;
    bool scambio;
    cout<<"Quanti numeri vuoi inserire?"<<endl;
    cin>>N;
    int v[N];
    i=0;
    while(i<=N-1)
    {
        v[i]=random()%N*10-1;
        i=i+1;
    }
    i=0;
    scambio=true;
    while(i<=N-1 & scambio)
    {
        scambio=false;
        j=0;
        while(j<=(N-2)-i)
        {
            if(v[j]>v[j+1])
            {
                t=v[j];
                v[j]=v[j+1];
                v[j+1]=t;
                scambio=true;
            }
            j=j+1;
        }
        i=i+1;
    }
    i=0;
    while(i<=N-1)
    {
        cout<<"Il "<<i+1<<"° numero è "<<v[i]<<endl;
        i=i+1;
    }
    int controlli, indice, inizio, fine, medio, x;
    indice=-1;
    controlli=0;
    inizio=0;
    fine=N-1;
    cout<<"Che numero vuoi trovare?"<<endl;
    cin>>x;
    while(indice=-1 & inizio<=fine)
    {
        medio=inizio+(fine-inizio)/2;
        if(v[medio]=x)
        {
            indice=medio;
        }
        else
        {
            if(v[medio]>x)
            {
                fine=medio-1;
            }
            else
            {
                inizio=medio+1;
            }
        }
        controlli=controlli+1;
    }
    cout<<"I controlli effetuati con la ricerca binaria sono stati "<<controlli<<endl;
    indice=-1;
    i=0;
    controlli=0;
    while(i<=N-1 & indice=-1)
    {
        if(v[i]=x)
        {
            indice=i;
        }
        i=i+1;
        controlli=controlli+1;
    }
    cout<<"I controlli effetuati con la ricerca sequenziale sono stati "<<controlli;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
