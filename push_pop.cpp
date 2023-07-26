#include<iostream>
#include<stdlib.h>
#include<conio.h>
#define MAX 5
using namespace std;

int main()
{
    int data,n;
    int top=-1;
    int stack[MAX];
    char ch;
    system("cls");

        do{
            cout<<"1. PUSH\n";
            cout<<"2. POP\n";
            cout<<"3. DISPLAY\n";
            cout<<"4. EXIT\n";

            cout<<"ENTER YOUR CHOICE !!!\n";
            cin>>n;

            switch(n)
            {
                case 1: //push

                if (top==MAX -1)
                {
                    cout<<"STACK OVERFLOW!!\n";
                }            
                else
                {
                    cout<<"ENTER DATA:";
                    top++;
                    cin>>stack[top];
                }
                break;  

                case 2: //pop

                if (top==-1)
                {
                    cout<<"STACK UNDERFLOW!!\n";
                }            
                else
                {
                   data=stack[top];
                   cout<<"DATA POPPED\n";
                   top--;
                }
                break;  

                
                case 3: //display

                if (top==-1)
                {
                    cout<<"NO ENTRIES!!\n";
                }            
                else
                {
                   for(int i=0;i<=top;i++)
                   {
                    cout<<"\n"<<stack[i];
                   }
                }
                break; 

                case 4:
                exit(0);
            }
            cout<<"\n DO YOU WANT TO CONTINUE??(Y/N)";
            cin>>ch;

            if(ch=='y'|| ch=='Y')
            {
            cin>>ch;
            }
            else
            {
                exit(0);
            }

            }
            while(ch!=n);
            getch();
            return 0;

}