#include<iostream>
#include<conio.h>
#include<graphics.h>
using namespace std;
int main(){
    int gd=DETECT, gm;
    initgraph(&gd, &gm, (char*)"");
    
    float rad, xc, yc, pk;
    float x=0,y;
    cout << "ENTER RADIUS ";
    cin >> rad;
    cout << "ENTER CENTER OF CIRCLE: ";
    cin >> xc >> yc;
    
    y=rad;
    pk = 1-rad;
    line(x+xc,y+yc,x+xc,-y+yc);
    outtextxy(x+xc,y+yc,(char*)"(0,r)");
    outtextxy(x+xc,-y+yc-20,(char*)"(0,r)");
    
    line(-y+xc,x+yc,y+xc,-x+yc);
    outtextxy(y+xc,-x+yc,(char*)"(r,0)");
    while(x<=y){
        if(pk<0){
            x+=1;
            pk+=2*x+1;
        }
        else{
            x+=1;
            y-=1;
            pk+=2*x-2*y+1;
        }

    putpixel(x+xc,y+yc,WHITE);
    putpixel(-x+xc,y+yc,BLUE);
    putpixel(x+xc,-y+yc,RED);
    putpixel(-x+xc,-y+yc,YELLOW);
    putpixel(y+xc,x+yc,GREEN);
    putpixel(-y+xc,x+yc,CYAN);
    putpixel(y+xc,-x+yc,LIGHTBLUE);
    putpixel(-y+xc,-x+yc,LIGHTGRAY);
    }
    line(x+xc,y+yc,-y+xc,-x+yc);
    outtextxy(x+xc,y+yc,(char*)"(x,-y)");
    outtextxy(-y+xc-30,-x+yc,(char*)"(-x,y)");

    line(-y+xc,x+yc,x+xc,-y+yc);
    outtextxy(-y+xc-30,x+yc,(char*)"(-x,-y)");
    outtextxy(x+xc,-y+yc,(char*)"(x,y)");
getch();
closegraph();
}
