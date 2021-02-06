#include "node.h"
#include <iostream>
#include <cstdlib>
using namespace std;
node::node():clCircle(),n(new char[4])
{


}
 node::node(int a,int b,int c,int i):clCircle(a,b,c),n(new char[4])
 {

     itoa(i,n,10);
 }

node::~node()
{

}
void node::show()
{
    int x=Getx()-4;
    int y=Gety()-8;
    clCircle::show();
    outtextxy(x,y,n);
}
