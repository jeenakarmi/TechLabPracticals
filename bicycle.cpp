#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<time.h>

using namespace std;

int main(){	
    system("cls");
    int gd=DETECT, gm;
    initgraph(&gd,&gm,(char*)"");
    int x1=0,y1=0,x2=0,y2=0,x3=30,y3=440,x4,y4,x5,y5,radius;
    int choice=1,entry,range,top=400,side=560;
    float width,value,length,stick;
    int start_angle,end_angle;
    int font,color,pattern;
    string data;
    while(choice!=0){
        cout<<"1. Bar Graph"<<endl
        <<"2. 3D-Bar Graph"<<endl
        <<"3. Moving Cycle"<<endl
        <<"0. Exit"<<endl
        <<"Enter Your choice:";
        cin>>choice;
        switch(choice){
            case 1://bar graph
            {
                // int aa =2019;
                settextstyle(1,0,1);
                outtextxy(25,10,(char*)"x");
                outtextxy(620,433,(char*)"y");
                outtextxy(0,450,(char*)"year");
                settextstyle(1,1,1);
                outtextxy(10,300,(char*)"No. of students");
                line(30,30,30,440);
                line(30,440,600,440);
                entry=5;
                cout<<"Enter Maximum Range:";
                cin>>range;
                stick=entry*2;
                width = side/stick;
                for(int i=0;i<entry;i++){
                    srand(time(0));
                    font=rand()%10;
                    color=rand()%15;
                    pattern=rand()%9;
                    cout<<"Enter value:";
                    cin>>value;
                    length=top*value/range;
                    y1=40+top-length;
                    x1+=width;
                    x2=width+x1;
                    x4 = x1 +((x2 - x1)/2);
                    y4 = y1;
                    setfillstyle(pattern,color);
                    bar(x1,y1,x2,440);
                    line(x3,y3,x4,y4);
                    x1=x2;
                    x3 = x4;
                    y3 = y4;
                    switch(i){
                        case 0:
                            settextstyle(1,0,1);
                            outtextxy(x1 - width,450,(char*)"2019");
                            break;
                        case 1:
                            settextstyle(1,0,1);
                            outtextxy(x1 - width,450,(char*)"2020");
                            break;
                        case 2:
                            settextstyle(1,0,1);
                            outtextxy(x1 - width,450,(char*)"2021");
                            break;
                        case 3:
                            settextstyle(1,0,1);
                            outtextxy(x1 - width,450,(char*)"2022");
                            break;
                        case 4:
                            settextstyle(1,0,1);
                            outtextxy(x1 - width,450,(char*)"2023");
                            break;
                    }
                }
                break;
            }
            case 2://3D-bar graph
                settextstyle(1,0,1);
                outtextxy(25,10,(char*)"x");
                outtextxy(620,433,(char*)"y");
                outtextxy(0,450,(char*)"year");
                settextstyle(1,1,1);
                outtextxy(10,300,(char*)"No. of students");
                line(30,30,30,440);
                line(30,440,600,440);
                entry=5;
                cout<<"Enter Maximum Range:";
                cin>>range;
                stick=entry*2;
                width = side/stick;
                for(int i=0;i<entry;i++){
                    srand(time(0));
                    color=rand()%15;
                    srand(time(0));
                    pattern=rand()%10;
                    cout<<"Enter value:";
                    cin>>value;
                    length=top*value/range;
                    y1=40+top-length;
                    x1+=width;
                    x2=width+x1;
                    setfillstyle(pattern,color);
                    x4 = x1 +((x2 - x1)/2) + 20;
                    y4 = y1 - 15;
                    bar3d(x1,y1,x2,440,40,40);
                    line(x3,y3,x4,y4);
                    x1=x2;
                    x3 = x4;
                    y3 = y4;
                    switch(i){
                        case 0:
                            settextstyle(1,0,1);
                            outtextxy(x1 - width,450,(char*)"2019");
                            break;
                        case 1:
                            settextstyle(1,0,1);
                            outtextxy(x1 - width,450,(char*)"2020");
                            break;
                        case 2:
                            settextstyle(1,0,1);
                            outtextxy(x1 - width,450,(char*)"2021");
                            break;
                        case 3:
                            settextstyle(1,0,1);
                            outtextxy(x1 - width,450,(char*)"2022");
                            break;
                        case 4:
                            settextstyle(1,0,1);
                            outtextxy(x1 - width,450,(char*)"2023");
                            break;
                    }
                }
                break;
            case 3://moving cycle
            x1=-250,y1=400;
            x2=-50,y2=400;
            radius=50;
            start_angle=0;
            end_angle=0;
            for(int i=0;i<=2400;i++){
                x1+=1;
                x2+=1;
                if(x1==691){
                    x1=-250;
                    x2=-50;
                }
                setlinestyle(0,1,4);
                //back wheel
                circle(x1,y1,radius);            
                //front wheel               
                circle(x2,y2,radius);
                setcolor(YELLOW);
                //bottom
                line(x1,y1,x2-100,y2);
                //top
                line(x1+40,y1-70,x2-40,y2-70);
                //back
                line(x1,y1,x1+40,y1-70);
                //front
                line(x2,y2,x2-55,y2-100);
                //hor
                line(x2-100,y2,x2-40,y2-70);
                //handel
                line(x2-80,y2-100,x2-55,y2-100);
                //digonal
                line(x2-100,y2,x1+25,y1-90);
                line(x1+20,y1-90,x1+35,y1-90);
                delay(9);
                start_angle-=1;
                end_angle-=1;
                cleardevice();
            }
                break;
            case 0:
                choice=0;
                break;
            default:
                cout<<"Error Input";
                break;
        }
    }
    closegraph();
    return 0;
}

