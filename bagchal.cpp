//basic graph function 2
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
using namespace std;
/*
arc, pie, rectangle, bar, 3d bar, pie chart, bagchal border;
setcolor(colour), setfillstyle(pattern, colour) , settextstyle(font, direction, fontsize), outtextxy(x-coordinate,y-coordinate,to print);
pieslice(x-coordinate, y-coordinate, starting angle, ending angle,radius)
*/
int main(){
    int choice, x, y, start_angle, end_angle, radius, length, breadth;
    int depth,topflag;
    int x1,y1,x2,y2;
    int gd=DETECT, gm;
    system("cls");
    initgraph(&gd,&gm,(char*)"");
    settextstyle(8,0,3);//to print text in horizontal direction
    outtextxy(53,250,"DRAWING WILL BE DISPALYED HERE");
    settextstyle(8,1,3);//to print text in vertical direction
    outtextxy(250,455,"DRAWING WILL BE DISPALYED HERE");
    cout<<"Choose Operation to Perform:"<<endl
    <<"1. Arc"<<endl
    <<"2. Pie"<<endl
    <<"3. Rectangle"<<endl
    <<"4. Bar"<<endl
    <<"5. 3D Bar"<<endl
    <<"6. Pie chart"<<endl
    <<"7. Bagchal Border"<<endl
    <<"Enter Choice:"<<endl;
    cin>>choice;
    switch(choice){
        case 1://arc
            cout<<"Enter Center Coordinate"<<endl;
            cin>>x>>y;
            cout<<"Enter Start Angle and End Angle"<<endl;
            cin>>start_angle>>end_angle;
            cout<<"Enter Radius"<<endl;
            cin>>radius;
            cleardevice();//clears graphics
            setcolor(LIGHTGREEN);//sets border color
            setfillstyle(7,YELLOW);//fills the color in object
            arc(x, y, start_angle, end_angle, radius);
            getch();
            break;
        case 2://pie
            cout<<"Enter Coordinate"<<endl;
            cin>>x>>y;
            cout<<"Enter Start Angle and End Angle"<<endl;
            cin>>start_angle>>end_angle;
            cout<<"Enter Radius"<<endl;
            cin>>radius;
            cleardevice();
            setcolor(LIGHTGREEN);
            setfillstyle(7,YELLOW);
            pieslice(x, y, start_angle, end_angle, radius);
            break;
        case 3://rectangle
            cout<<"Enter the starting coordinate of Rectangle:"<<endl;
            cin>>x1>>y1;
            cout<<"Enter the length and breadth of Rectangle:"<<endl;
            cin>>length>>breadth;
            x2 =x1+length;
            y2 =y1+breadth;
            cleardevice();
            setcolor(LIGHTRED);
            setfillstyle(2,GREEN);
            rectangle(x1, y1, x2, y2);
            getch();
            break;
        case 4://bar
            cout<<"Enter the starting coordinate of Bar:"<<endl;
            cin>>x1>>y1;
            cout<<"Enter the length and breadth of Bar:"<<endl;
            cin>>length>>breadth;
            x2=x1+length;
            y2=y1+breadth;
            cleardevice();
            setcolor(LIGHTRED);
            setfillstyle(2,LIGHTGREEN);
            bar(x1, y1, x2, y2 );
            break;
        case 5://3d bar
            cout<<"Enter the starting coordinate of 3D Bar:"<<endl;
            cin>>x1>>y1;
            cout<<"Enter the length and breadth of 3D Bar:"<<endl;
            cin>>length>>breadth;
            x2=x1+length;
            y2=y1+breadth;
            cout<<"Enter depth,topflag:"<<endl;
            cin>>depth>>topflag;
            cleardevice();
            setcolor(LIGHTRED);
            setfillstyle(5,LIGHTGREEN);
            bar3d(x1, y1, x2, y2, depth, topflag );
            break;
        case 6://pie chart
            cleardevice();
            setcolor(WHITE);
            settextstyle(8,0,1);
            outtextxy(10,30,"PIE CHART OF EXPENSES:");
            settextstyle(8,0,3);
            setfillstyle(2,GREEN);
            pieslice(380,240,0,108,230);//food
            outtextxy(400,170,"FOOD-30%");
            setfillstyle(5,YELLOW);
            pieslice(380,240,108,180,230);//cloth
            outtextxy(170,170,"CLOTHING-20%");
            setfillstyle(7,LIGHTRED);
            pieslice(380,240,180,216,230);//internet
            outtextxy(160,250,"INTERNET-10%");
            settextstyle(8,0,3);
            setfillstyle(4,LIGHTBLUE);
            pieslice(380,240,216,360,230);//others
            outtextxy(340,350,"OTHERS-40%");
            break;
        case 7://baag chaal
            cleardevice();
            setcolor(YELLOW);
            // vertical lines
                line(10,10,10,410);
                line(110,10,110,410);
                line(210,10,210,410);
                line(310,10,310,410);
                line(410,10,410,410);
            //horizontal lines
                line(10,10,410,10);
                line(10,110,410,110);
                line(10,210,410,210);
                line(10,310,410,310);
                line(10,410,410,410);
            //digonal lines
                line(10,10,410,410);
                line(10,410,410,10);
            //dimond lines
                line(210,10,10,210);
                line(10,210,210,410);
                line(210,410,410,210);
                line(410,210,210,10);
            settextstyle(6,0,2);
            outtextxy(50,430,"BAAG CHAAL BORDER");
            break;
        default:
            cout<<"INVALID INPUT";
            settextstyle(0,1,3);
            outtextxy(210,210,"INVALID INPUT");
            break;
    }
    getch();
    closegraph();
    return 0;
}