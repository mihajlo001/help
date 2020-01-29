#ifndef PRAVOUG_H_INCLUDED
#define PRAVOUG_H_INCLUDED
#include <iostream>
using namespace std;

class Pravoug
{
    double a,b;
public:
    friend istream& operator>>(istream&ut,Pravoug& pp)
    {
        return ut>>pp.a>>pp.b;
    }
    friend ostream& operator<<(ostream&it,const Pravoug& pp)
    {
        return it<<"P["<<pp.a<<','<<pp.b<<']';
    }
    friend int operator< (const Pravoug&p1,const Pravoug& p2)
    {
        return p1.a*p1.b<p2.a*p2.b;
    }
};

#endif // PRAVOUG_H_INCLUDED
