#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 5

using namespace std;

char postfix[MAX];
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
        cout<<"ENTER POSTFIX\n";
        cin>>postfix;
        int len=strlen (postfix);
        for(int i=0;i<len;i++)
        {
            if(postfix[i]>=33 && postfix[i]<=47)
            {
                pop();
                switch(postfix[i])
                {
                    case '+':
                    result=b+a;
                    break;

                    case '-':
                    result=b-a;
                    break;

                    case '*':
                    result=b*a;
                    break;

                    case '/':
                    result=b/a;
                    break;

                    default:
                    cout<<"ILLEGAL OPERATOR";
                }
                push(result);
            }
            else
            {
                int a= postfix[i]-48;
                push(a);
            }
        }
        cout<<"THE RESULT IS:"<<stack[top];
        getch();
        return 0;
    }
