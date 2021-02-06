#include <iostream>
#include <graphics.h>
#include <vector>
#include <cmath>
#include "node.h"
#include "edge.h"
#include "graph.h"
using namespace std;
const float pi=3.14159265;
int main()
{   vector <int> p;
    p.assign(nn*nn,-1);
    vector <int> v;
    int i,j,k,i1,j1;
    int a[nn][nn];
    int ar[]= {  0, 1, 0, 1, 2,
                 1, 0, 0, 0, 5,
                 0, 0, 0, 6, 0,
                 1, 0, 6, 0, 4,
                 2, 5, 0, 4, 0
           };
    graph G(nn,ar);
    cin >>i1>>j1;
    int gd=DETECT;
    int gm;
    initgraph(&gd,&gm,"");
    G.show();
    G.Floyd(i1,j1);
    readkey();
    closegraph();
    return 0;
}
