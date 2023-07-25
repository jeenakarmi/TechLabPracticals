#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<math.h>
using namespace std;

int main(){
    system("cls");
    int choice=-1;
    int x, y, radius, major_axis, minor_axis, length, breadth, start_angle, end_angle;
    int x1, y1, x2, y2, x3, y3;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");
    cout<<"1. Point"<<endl
    <<"2. Line"<<endl
    <<"3. Circle"<<endl
    <<"4. Ellipse"<<endl
    <<"5. Arc"<<endl
    <<"6. Rectangle"<<endl
    <<"7. Square"<<endl
    <<"8. Triangle"<<endl
    <<"0. Exit"<<endl
    <<"Select a figure to draw:\n";
    while (choice!=0){
        cin>>choice;
        switch(choice){
            case 0:{
                choice=0;
                exit;
            }
            case 1:{//point
                cout<<"\nEnter the coordinate of Point:\n";
                cin>>x>>y;
                putpixel(x,y,RED);
                getch();
                break;
            }
            case 2:{//line
                cout<<"\nEnter the starting coordinate of Line:\n";
                cin>>x1>>y1;
                cout<<"\nEnter the ending coordinate of Line:\n";
                cin>>x2>>y2;
                line(x1,y1,x2,y2);
                getch();
                break;
            }
            case 3:{//circle
                cout<<"\nEnter the centre coordinate of Circle:\n";
                cin>>x>>y;
                cout<<"\nEnter the radius of Circle:\n";
                cin>>radius;
                circle(x,y,radius);
                getch();
                break;
            }
            case 4:{//ellipse
                cout<<"\nEnter the centre coordinate of Ellipse:\n";
                cin>>x>>y;
                cout<<"\nEnter starting angle and ending angle:\n";
                cin>>start_angle>>end_angle;
                cout<<"\nEnter major and minor axis:\n";
                cin>>major_axis>>minor_axis;
                ellipse(x,y,start_angle,end_angle,major_axis,minor_axis);
                getch();
                break;
            }
            case 5:{//arc
                cout<<"\nEnter the centre coordinate of Arc:\n";
                cin>>x>>y;
                cout<<"\nEnter starting angle and ending angle:\n";
                cin>>start_angle>>end_angle;
                cout<<"\nEnter the radius of Arc:\n";
                cin>>radius;
                arc(x,y,start_angle,end_angle,radius);
                getch();
                break;
            }
            case 6:{//rectangle
                cout<<"\nEnter the starting coordinate of Rectangle:\n";
                cin>>x1>>y1;
                cout<<"\nEnter the length and breadth of Rectangle:\n";
                cin>>length>>breadth;
                x2=x1+length;
                y2=y1+breadth;
                rectangle(x1,y1,x2,y2);
                getch();
                break;
            }
            case 7:{//square
                cout<<"\nEnter the starting coordinate of Square:\n";
                cin>>x1>>y1;
                cout<<"\nEnter length of Square:\n";
                cin>>length;
                x2=x1+length;
                y2=y1+length;
                rectangle(x1,y1,x2,y2);
                getch();
                break;
            }
            case 8:{//triangle
                cout<<"\nEnter the First coordinate of Triangle:\n";
                cin>>x1>>y1;
                cout<<"\nEnter the Second coordinate of Triangle:\n";
                cin>>x2>>y2;
                cout<<"\nEnter the Third coordinate of Triangle:\n";
                cin>>x3>>y3;
                line(x1,y1,x2,y2);
                line(x2,y2,x3,y3);
                line(x3,y3,x1,y1);
                getch();
                break;
            }
            default:{
                cout<<"\nError Input:\n";
                break;
            }
        }
    }
    closegraph();
    return 0;
}
