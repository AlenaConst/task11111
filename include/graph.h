#ifndef GRAPH_H
#define GRAPH_H
#include "draw.h"
#include "node.h"
const int nn=5;
class graph:public draw
{
    public:
        graph();
        graph(int n,int* m);
        virtual ~graph();
        int Getnum(){return numb;}
        void Setnum(int n){numb=n;}
        void show();
        void Floyd(int i1, int j1);
    private:
        int numb;
        int* ms;
        node* g;

};

#endif // GRAPH_H
