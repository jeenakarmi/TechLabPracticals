#include<iostream>
#include<conio.h>
#include<stdlib.h>
#define MAX 10

using namespace std;

int a[MAX],i,n,j,temp;
void input()
{
    cout<<"Input no.of elements of an array \n ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"ENTER YOUR DATA\n";
        cin>>a[i];
    }
}

void bubble()
{
i=0;
    for(i=0;i<n;i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;  
            }
        }
    }
}

void selection()
{
i=0;
    while(i<n-1)
    {
        j=i+1;
        while(j<n)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
                j++;
            }
        i++;
    }
}

void insertion()
{
i=0;
    while(i<n)
        {
            temp=a[i];
            j=i-1;
            while(j>=0 && temp <a[j])
            {
                a[j+1]=a[j];
                j=j-1;
            }
            a[j+1]=temp;
            i++;
        }   
}

void display()
{
    cout<<"\nTHE SORTED ELEMENTS ARE:";
        for(i=0;i<n;i++)
        {
        cout<<"\t";
        cout<<a[i];
        }
}

int main() {
    int choice;
    char ans;
    start:
        cout<<"1.BUBBLE SORT\n";
        cout<<"2.SELECTION SORT\n";
        cout<<"3.INSERTION SORT\n";
        cout<<"4.EXIT\n";
        cout<<"ENTER YOUR CHOICE:\n";
        cin>>choice;
    switch(choice)
    {
        case 1:
        input();
        bubble();
        display();
        break;

        case 2:
        input();
        selection();
        display();
        break;

        
        case 3:
        input();
        insertion();
        display();
        break;

        case 4:
        exit(0);
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
