#include <iostream>
#include <iomanip>
#include <graphics.h>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    int x1, y1; // starting point
    int x2, y2; // end point
    float  x, y; // initial value of point
    cout << "Enter start points (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Enter end points(x2, y2): ";
    cin >> x2 >> y2;
    x = x1;
    y = y1;

    int dx, dy; // change in x and y
    dx = x2 - x1;
    dy = y2 - y1;

    int steps;
    steps = (abs(dx) > abs(dy)) ? abs(dx) : abs(dy);
    
    float x_inc, y_inc;
    x_inc = (float)dx / steps;
    y_inc = (float)dy / steps;

    int k = 0;
    cout<<"k\tx\t y\t      Rounded x\t     Rounded y\n";
    for (k = 0; k <= steps; ++k)
    {
        cout << k << '\t' << x << "\t"<< y << "\t\t" << round(x) << "\t\t" << round(y) << endl;
        putpixel(round(x), round(y), YELLOW);
        x += x_inc;
        y += y_inc;
    }

    system("pause");
    closegraph();
    return 0;
}