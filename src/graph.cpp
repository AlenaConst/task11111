#include "graph.h"
#include <cmath>
#include "node.h"
#include "edge.h"
#include <iostream>
#include <vector>
#include <graphics.h>
using namespace std;
const float pi=3.14159265;
vector <int> p;
vector <int> path(int a,int b)
{
    vector <int> u,v;
    if(p[nn*a+b]==-1)
    {
        u.push_back(a);
        u.push_back(b);
        return u;
    }
    else
    {
        u=path(a,p[nn*a+b]);
        v=path(p[nn*a+b],b);
        v.erase(v.begin());
        v.insert(v.begin(),u.begin(),u.end());
        return v;
    }
}
graph::graph()
{

}
graph::graph(int n,int* m):numb(n),ms(new int[n*n]),g(new node[n])
{
    int i;
    for(i=0; i<n*n; i++)ms[i]=m[i];
     for(i=0; i<numb; i++)
    {
        g[i].Setx(300+(int)round(200*cos(2*pi*i/numb)));
        g[i].Sety(250+(int)round(200*sin(2*pi*i/numb)));
        g[i].Setnum(i+1);
        g[i].Setr(15);
    }

}

graph::~graph()
{
   delete ms;
   delete g;
}
void graph::show()
{
    edge e[(nn-1)*nn/2];
    int i,j,k=0;
    for(i=0; i<numb; i++)
    {
        g[i].show();
    }
    for(i=0; i<numb; i++)
        for(j=i; j<numb; j++)
        {
            if(ms[i+nn*j]!=0)
            {
                e[k].Setx1(g[i].Getx());
                e[k].Sety1(g[i].Gety());
                e[k].Setx2(g[j].Getx());
                e[k].Sety2(g[j].Gety());
                e[k].Setw(ms[i+nn*j]);
                k++;
            }
        }

    for(i=0; i<k; i++)
    {
        e[i].show();

    }
}
void graph::Floyd(int i1,int j1)
{   p.assign(nn*nn,-1);
    int a[nn][nn];
    vector <int> v;
    int i,j,k;
    for(i=0; i<nn; i++)
        for(j=0; j<nn; j++)
        {
            a[i][j]=ms[i+nn*j];
        }
    for(i=0; i<nn; i++)
        for(j=0; j<nn; j++)
        {
            if(a[i][j]==0&&i!=j)a[i][j]=10000;
        }
    for(k=0; k<nn; k++)
        for(i=0; i<nn; i++)
            for(j=0; j<nn; j++)
            {
                if(a[i][j]>a[i][k]+a[k][j])p[nn*i+j]=k;
                a[i][j]=min(a[i][j],a[i][k]+a[k][j]);

            }
    for(i=0; i<nn; i++)
    {

        for(j=0; j<nn; j++)
        {
            if(a[i][j]==10000)a[i][j]=0;
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    v=path(i1-1,j1-1);
    for(i=0; i<v.size(); i++) cout<<v[i]+1<<" ";
    setcolor(RED);
    for(i=0; i<v.size()-1; i++)
    {
        line(g[v[i]].Getx(),g[v[i]].Gety(),g[v[i+1]].Getx(),g[v[i+1]].Gety());
    }
    readkey();

}
