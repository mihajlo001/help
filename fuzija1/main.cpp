#include <iostream>
#include "fuzija.h"
#include "tacka.h"
#include "pravoug.h"
using namespace std;

int main()
{
    int na,nb,nc,i,k=1;

    {
        cout <<"Fuzija nizova celih brojeva\n\n";
        cout<<"Unesi duzinu prvog niza: ";
        cin>>na;
        int*a=new int [na];

        cout<<"\nPrvi niz:\n\n";
        for (i=0;i<na;i++)
        {
            cout<<'x'<<k<<'=';
            cin>>a[i];
            cout<<"\n";
            k++;
        }
        cout <<endl;
        cout <<"\nUnesite duzinu drugog niza: ";
        cin>>nb;
        int*b=new int [nb];
        k=1;
        cout <<"\nDrugi niz:\n\n";
        for (i=0;i<nb;i++)
        {
            cout<<'x'<<k<<'=';
            cin>>b[i];
            cout<<"\n";
            k++;
        }
        cout<<endl;

        int* c;
        fuzija <int> (a,na,b,nb,c,nc);

        cout<<"\nFuzija:\t";
        cout<<"c[";
        cout<<nc;
        cout<<"] = {";
        for(i=0;i<nc;i++)
        {
            cout<<' '<<c[i];
        }
        cout<<" }";
        cout<<endl;
        delete []a; delete []b;delete []c;
    }

    {
        cout <<"\n\nFuzija nizova tacaka\n\n";
        cout<<"Unesi duzinu prvog niza: ";
        cin>>na;
        Tacka* a=new Tacka [na];
        k=1;

        cout<<"\nPrvi niz:\n\n";
        for (i=0;i<na;i++)
        {
            cout<<'x'<<k<<' '<<'y'<<k<<'=';
            cin>>a[i];
            cout<<' '<<a[i];
            cout<<"\n\n";
            k++;
        }
        cout <<endl;
        cout <<"\nUnesite duzinu drugog niza: ";
        cin>>nb;
        Tacka* b=new Tacka [nb];
        k=1;
        cout <<"\nDrugi niz:\n\n";
        for (i=0;i<nb;i++)
        {
            cout<<'x'<<k<<' '<<'y'<<k<<'=';
            cin>>b[i];
            cout<<' '<<b[i];
            cout<<"\n\n";
            k++;
        }
        cout<<endl;

        Tacka* c;
        fuzija <Tacka> (a,na,b,nb,c,nc);

        cout<<"\nFuzija:\n\n";
        cout<<"c[";
        cout<<nc;
        cout<<"] = {";
        for(i=0;i<nc;i++)
        {
            cout<<' '<<c[i];
        }
        cout<<" }";
        cout<<endl;
        delete []a; delete []b;delete []c;
    }

    {
        cout <<"\n\nFuzija nizova pravougaoinka\n\n";
        cout<<"Unesi duzinu prvog niza: ";
        cin>>na;
        Pravoug* a=new Pravoug [na];
        k=1;

        cout<<"\nPrvi niz:\n\n";
        for (i=0;i<na;i++)
        {
            cout<<'a'<<k<<' '<<'b'<<k<<'=';
            cin>>a[i];
            cout<<' '<<a[i];
            cout<<"\n\n";
            k++;
        }
        cout <<endl;
        cout <<"\nUnesite duzinu drugog niza: ";
        cin>>nb;
        Pravoug* b=new Pravoug [nb];
        k=1;
        cout <<"\nDrugi niz:\n\n";
        for (i=0;i<nb;i++)
        {
            cout<<'a'<<k<<' '<<'b'<<k<<'=';
            cin>>b[i];
            cout<<' '<<b[i];
            cout<<"\n\n";
            k++;
        }
        cout<<endl;

        Pravoug* c;
        fuzija <Pravoug> (a,na,b,nb,c,nc);

        cout<<"Fuzija:\n\n";
        cout<<"c[";
        cout<<nc;
        cout<<"] = {";
        for(i=0;i<nc;i++)
        {
            cout<<' '<<c[i];
        }
        cout<<" }";
        cout<<endl;
        delete []a; delete []b;delete []c;
    }
}
