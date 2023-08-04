#include <iostream>
#include <conio.h>
#include <graphics.h>
#include <math.h>

using namespace std;
int main() {
    //system("cls");
    level:
    float x, y, tx, ty, x1, x2, y1, y2, angle, ang, sx, sy;
    int choice, gd = DETECT, gm;
    char ans;
    initwindow(500, 460, (char*)"window size");
    x = getmaxx() / 2;
    y = getmaxy() / 2;
    x1 = 0;
    y1 = 0;
    x2 = 100;
    y2 = -60;
    cleardevice();
    line(x - 200, y, x + 200, y);
    line(x, y - 200, x, y + 200);
    outtextxy(x + 205, y, (char*)"X");
    outtextxy(x, y - 205, (char*)"Y");
    line(x + x1, y + y1, x + x2, y + y2);
    cout <<"\t\tTransformation\n1.Translation\n2.Rotation\n3.Scaling\n4.Exit\n";
    cout<<"Enter choice:";
    cin >> choice;
    switch (choice) {
    case 1:
        cout << "Enter tx and ty: ";
        cin >> tx >> ty;
        x1 = x1 + tx;
        x2 = x2 + tx;
        y1 = y1 + ty;
        y2 = y2 + ty;
        break;
    case 2:
        cout << "Enter the angle of rotation: ";
        cin >> ang;
        angle = (ang * 3.14) / 180;
        int a, b, c, d;
        a = x + x1 * cos(angle) - y1 * sin(angle);
        b = y + x1 * sin(angle) + y1 * cos(angle);
        c = x + x2 * cos(angle) - y2 * sin(angle);
        d = y + x2 * sin(angle) + y2 * cos(angle);
        line(x + x1, y + y1, x + x2, y + y2);
        x1 = a - x;
        y1 = b - y;
        x2 = c - x;
        y2 = d - y;
        break;
    case 3:
        cout << "Enter the scaling factors: ";
        cin >> sx >> sy;
        x1 = x1 * sx;
        y1 = y1 * sy;
        x2 = x2 * sx;
        y2 = y2 * sy;
        line(x + x1, y + y1, x + x2, y + y2);
        break;
    }
    line(x + x1, y + y1, x + x2, y + y2);
    cout<<"\nDO YOU WANT TO CONTINUE(y/n)?\n";
        cin>>ans;
        if(ans=='y'||ans=='Y'){
            goto level;
        }
        else{
            exit(0);
        }
    getch();
    closegraph();
    return 0;
}

