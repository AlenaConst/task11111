#include "clLine.h"
#include <iostream>
#include <graphics.h>

using namespace std;

clLine::clLine()
{

}

clLine::clLine(int x3, int y3, int x4, int y4):x1(x3),y1(y3),x2(x4),y2(y4)
{

}

clLine::~clLine()
{

}

void clLine::show()
{
    line(x1, y1, x2, y2);
}
