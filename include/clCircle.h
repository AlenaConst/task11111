#ifndef CLCIRCLE_H
#define CLCIRCLE_H
#include "draw.h"

class clCircle: public draw
{
    public:
        clCircle();
        clCircle(int x0, int y0, int c);
        virtual ~clCircle();

        int Getx() { return x; }
        void Setx(int val) { x = val; }
        int Gety() { return y; }
        void Sety(int val) { y = val; }
        void Setr(int rad){r=rad;}
        int Getr(){return r;}
        void show();

    private:
        int x;
        int y;
        int r;
};

#endif // CLCIRCLE_H
