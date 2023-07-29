#include <iostream>
#include <math.h>
#include <conio.h>
#include <graphics.h>
using namespace std;

int main(){
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)" ");
    float x, y, xk, yk, x1, y1, x2, y2, dx, dy, m, p0, pk, pk1;
    cout << "Enter the value of x1 and y1: ";
    cin >> x1 >> y1;
    cout << "Enter the value of x2 and y2: ";
    cin >> x2 >> y2;
    // identifying left most point 
    if((x1 < x2 && y1 < y2) || (x1 < x2 && y1 > y2)){
        x = x1;
        y = y1;
    }
    else if(x1 == x2 && y1 < y2){
        x = x1;
        y = y1;
    }
    else{
        x = x2;
        y = y2;
    }
    dx = (x2 - x1);
    dy = (y2 - y1);
    m = abs(dy / dx);
    int k = 0;
    xk = x;
    yk = y;
    // m <= 1
    if (m <= 1){
        pk = 2 * dy - dx;
        cout<<"\n";
        cout<<"|\tk\t|\t"<<"xk\t|\t"<<"yk\t|\t"<<"pk\t"<<
        "|\txk+1\t|"<<"\tyk+1\t|"<<"\tpk+1\t|\n";
        cout<<"\n";
        // For table and line
        for(int i = 0 ; i < dx ; i++){
            if(pk <= 0){
                putpixel(xk, yk, WHITE);
                delay(100);
                pk1 = pk + 2* dy;
                cout<<"|\t"<<k<<"\t|\t"<< xk <<"\t|\t"<<yk<<"\t|\t"<< pk <<"\t|\t"<< 
                xk + 1 <<"\t|\t"<< yk + 1<< "\t|\t" << pk1 << "\t|\n" ;
                cout<<"\n";
                xk = xk + 1;
                pk = pk1;
                k += 1;
            }
            else{
                putpixel(xk, yk, WHITE);
                delay(100);
                pk1 = pk + 2* dy - 2* dx;
                cout<<"|\t"<<k<<"\t|\t"<< xk <<"\t|\t"<<yk<<"\t|\t"<< pk <<"\t|\t"<< 
                xk + 1 <<"\t|\t"<< yk + 1<< "\t|\t" << pk1 << "\t|\n" ;
                cout<<"\n";
                xk = xk + 1;
                yk = yk + 1;
                pk = pk1;
                k += 1;
            }
        }
    }
    // m > 1
    else {
        pk = 2 * dx - dy;
        cout<<"\n";
        cout<<"|\tk\t|\t"<<"xk\t|\t"<<"yk\t|\t"<<"pk\t"<<
        "|\txk+1\t|"<<"\tyk+1\t|"<<"\tpk+1\t|\n";
        cout<<"\n";
        // for table and line graph
        for(int i = 0 ; i < dx ; i++){
            if(pk < 0){
                putpixel(xk, yk, WHITE);
                delay(100);
                pk1 = pk + 2* dx;
                cout<<"|\t"<<k<<"\t|\t"<< xk <<"\t|\t"<<yk<<"\t|\t"<< pk <<"\t|\t"<< 
                xk + 1 <<"\t|\t"<< yk + 1<< "\t|\t" << pk1 << "\t|\n" ;
                cout<<"\n";
                yk = yk + 1;
                pk = pk1;
                k += 1;
            }
            else
                putpixel(xk, yk, WHITE);
                delay(100);
                pk1 = pk + 2* dx - 2* dy;
                cout<<"|\t"<<k<<"\t|\t"<< xk <<"\t|\t"<<yk<<"\t|\t"<< pk <<"\t|\t"<< 
                xk + 1 <<"\t|\t"<< yk + 1<< "\t|\t" << pk1 << "\t|\n";
                cout<<"\n";
                xk = xk + 1;
                yk = yk + 1;
                pk = pk1;
                k += 1;
            }
        }
    getch();
    closegraph();
    return 0;
}
