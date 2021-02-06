#include "edge.h"
#include "stdio.h"
#include <cstdlib>
edge::edge()
{

}

edge::edge(int a, int b,int c,int d,int w):clLine(a,b,c,d),weight(w)
{

}

edge::~edge()
{

}
void edge::show()
{   char* str=new char[4];
    itoa(Getw(),str,10);
   clLine::show();
   outtextxy((Getx1()+Getx2())/2,(Gety1()+Gety2())/2, str);
}
