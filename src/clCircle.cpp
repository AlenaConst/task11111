#include "clCircle.h"
#include <iostream>
#include <graphics.h>

using namespace std;

clCircle::clCircle():r(15)
{

}

clCircle::clCircle(int a, int b,int c):x(a),y(b), r(c)
{

}

clCircle::~clCircle()
{

}

void clCircle::show()
{
    circle(x, y, r);
}
