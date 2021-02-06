#ifndef CIRCLE_H
#define CIRCLE_H


class circle
{
    public:
        circle();
        virtual ~circle();

        int Getx() { return x; }
        void Setx(int val) { x = val; }
        int Gety() { return y; }
        void Sety(int val) { y = val; }
        int Getr() { return r; }
        void Setr(int val) { r = val; }
        void draw()
    protected:

    private:
        int x;
        int y;
        int r;
};

#endif // CIRCLE_H
