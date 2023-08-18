#include<iostream>
#include<conio.h>
#include<graphics.h>
using namespace std;
void triangle(int x, int y, int x1, int y1, int x2, int y2, int x3, int y3){
 line(x+x1,y-y1,x+x2,y-y2);
 line(x+x2,y-y2,x+x3,y-y3);
 line(x+x3,y-y3,x+x1,y-y1);
}
void cross(int x, int y){
 line(x+200,y-200,x-200,y+200);
 line(x-200,y-200,x+200,y+200);
 line(x-200,y,x+200,y);
 line(x,y+200,x,y-200);
 outtextxy(x-10,y-210,(char*)"Y-Axis");
 outtextxy(x+210,y-10,(char*)"X-Axis");
}
int main(){
 system("cls");
 int x1, y1, x2, y2, x3, y3;
 int x, y;
 int choice = -1;
 int gd=DETECT, gm;
 initgraph(&gd,&gm,(char*)"");
 x = getmaxx()/2;
 y = getmaxy()/2+25;
 cout<<"\t\t Reflection"<<endl
 <<"Enter Coordinates of Triangle: "<<endl
 <<"First Point: ";
 cin>>x1>>y1;
 cout<<"Second Point: ";
 cin>>x2>>y2;
 cout<<"Third Point: ";
 cin>>x3>>y3;
 cross(x,y);
 triangle(x,y,x1,y1,x2,y2,x3,y3);
 //getch(); 
 while(choice != 0){
 system("cls");
 cout<<"\t\t Reflection"<<endl<<endl
 <<"1. Reflect in X axis"<<endl
 <<"2. Reflect in Y axis"<<endl
<<"3. Reflect in Y=X axis"<<endl
 <<"4. Reflect about axis perpendicular to XY"<<endl
 <<"Enter Your Choice: ";
 cin>>choice;
 switch(choice){
 case 1:
 //Reflection in x axis
 outtextxy(x-20,25,(char*)"Reflection in X axis");
 triangle(x,y,x1,-y1,x2,-y2,x3,-y3);
 getch();
 break;
 case 2:
 //Reflection in y axis
 outtextxy(x-20,25,(char*)"Reflection in Y axis");
 triangle(x,y,-x1,y1,-x2,y2,-x3,y3);
 getch();
 break;
 case 3:
 //Reflection in y=x
 outtextxy(x-20,25,(char*)"Reflection in Y=X axis");
 triangle(x,y,y1,x1,y2,x2,y3,x3);
 getch();
 break;
 case 4:
 //Reflection in xy perpendicular
 outtextxy(x-20,25,(char*)"Reflection in XY perpendicular axis");
 triangle(x,y,-x1,-y1,-x2,-y2,-x3,-y3);
 getch();
 break;
 case 0:
 choice = 0;
 break;
 default:
 cout<<"Invalid Choice!!"<<endl;
 getch();
 break;
 }
 cleardevice();
 cross(x,y);
 triangle(x,y,x1,y1,x2,y2,x3,y3);
 }
 getch();
 closegraph();
 return 0;
}
