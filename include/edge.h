#ifndef EDGE_H
#define EDGE_H
#include "clLine.h"

class edge:public clLine
{
    public:
        edge();
        edge(int a, int b,int c,int t,int w);
        virtual ~edge();
        int Getw(){return weight;}
        void Setw(int w){ weight=w;}
        void show();

    private:
        int weight;
};

#endif // EDGE_H
