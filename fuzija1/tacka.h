#ifndef TACKA_H_INCLUDED
#define TACKA_H_INCLUDED
#include <iostream>
using namespace std;

class Tacka
{
    double x,y;
public:
    friend istream& operator>>(istream&ut,Tacka& tt)
    {
        return ut>>tt.x>>tt.y;
    }
    friend ostream& operator<<(ostream&it,const Tacka& tt)
    {
        return it<<"T("<<tt.x<<','<<tt.y<<')';
    }
    friend int operator< (const Tacka&t1,const Tacka& t2)
    {
        return t1.x*t1.x+t1.y*t1.y < t2.x*t2.x+t2.y*t2.y;
    }
};

#endif // TACKA_H_INCLUDED
