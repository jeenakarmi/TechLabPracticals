#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 5
using namespace std;

char prefix[MAX];
int stack[MAX];
int top=-1,a,b,result;

void push(int data)
{
    top++;
    stack[top]=data;
}

void pop()
 {
    a=stack[top];
    top--;
    b=stack[top];
    top--;
 }

    int main()
    {
        system("cls");
        cout<<"ENTER PREFIX\n";
        cin>>prefix;
    int len =strlen(prefix);
    strrev(prefix);
    cout<<"THE PREFIX VALUE AFTER REVERSE:"<<prefix<<endl;

        for(int i=0;i<len;i++)
        {
            if(prefix[i]>=33 && prefix[i]<=47)
            {
                pop();
                switch(prefix[i])
                {
                    case '+':
                    result=a+b;
                    break;

                    case '-':
                    result=a-b;
                    break;

                    case '*':
                    result=a*b;
                    break;

                    case '/':
                    result=a/b;
                    break;

                    default:
                    cout<<"ILLEGAL OPERATOR";
                }
                push(result);
            }
            else
            {
                int a= prefix[i]-48;
                push(a);
            }
        }
        cout<<"THE RESULT IS:"<<stack[top];
        getch();
        return 0;
    }
