#ifndef NODE_H
#define NODE_H
#include <cstdlib>
#include "clCircle.h"


class node : public clCircle
{
    public:
        node();
        node(int a,int b,int c, int i);
        virtual ~node();
        char* Getnum(){return n;};
        void Setnum(int val){itoa(val,n,10);}
        void show();

    private:
       char *n;

};

#endif // NODE_H
