#include<iostream>
#include<conio.h>
#include<stdlib.h>
#define MAX 10

using namespace std;

int index,i,last,item,loc;
int a[MAX],n,j,beg,mid;
void input(){
    cout<<"Input no.of elements of an array \n ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"ENTER YOUR DATA\n";
        cin>>a[i];
    }
    cout<<"data to be searched\n";
    cin>>item;
}
void linear(){
bool found = false; 
i=0;
while(i<n)
{
if(i<n)
{
    i++;
}
if(item == a[i])
{
    found = true;
    loc=i;
    goto level;
}
}
level:
if(found)
{
    cout<<"DATA IS FOUND! SEARCHING IS SUCCESSFUL! and it is in array index "<<loc;
}
else
{
    cout<<"DATA IS  NOT FOUND AND SEARCHING IS UNSUCCESSFUL!\n";
}
}

void binary(){
    beg=0;
    last=n-1;
    mid=((beg+last)/2);
    while(beg<=last && a[mid] != item)
    {
        if(item < a[mid])
        {
            last=mid-1;
        }
        else{
        beg=mid+1;
    mid=((beg+last)/2);
    }
    if(a[mid] == item)
    {
        loc=mid;
        cout<<"value is fouond at loc:\t"<<loc;
    }
    else
    {
        cout<<"DATA DOESN'T EXISTS\n";
    }
}
}

int main() {
    int choice;
    char ans;
    start:
        cout<<"1.LINEAR SEARCH\n";
        cout<<"2.BINARY SEARCH\n";
        cout<<"ENTER YOUR CHOICE:\n";
        cin>>choice;
    switch(choice)
    {
        case 1:
        input();
        linear();
        break;

        case 2:
        input();
        binary();
        break;
    }
    cout<<"\nDO YOU WANT TO CONTINUE(y/n)?\n";
        cin>>ans;
        if(ans=='y'||ans=='Y'){
            goto start;
        }
        else{
            exit(0);
        }
    
    getch();
    return (0);
}