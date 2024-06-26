#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
using namespace std;

struct node
{
    int data;
    struct node *pnext;
}*pfirst=NULL,*pnew,*ptemp,*pthis;

int count=0;

void create()
{
    pnew=(struct node *)malloc(sizeof(struct node));
    cout<<"ENTER DATA  !!"<<endl;
    cin>>pnew->data;
    count++;
}

void ins_beg()
{
if(pfirst==NULL)
{
    pfirst=pnew;
    pnew->pnext=NULL;
}
else
{
    pnew->pnext=pfirst;
    pfirst=pnew;
}
cout<<"DATA IS INSERTED:"<<endl;
}

void ins_end()
{
    if(pfirst==NULL)
    {
        pfirst=pnew;
        pnew->pnext=NULL;
    }
    else
    {
        pthis=pfirst;
        while(pthis->pnext!=NULL)
        {
            pthis=pthis->pnext;
        }
        pthis->pnext=pnew;
        pnew->pnext=NULL;
    }
}

void del_beg()
{
    if(pfirst==NULL)
    {
        cout<<"LIST IS EMPTY\n";
    }
    else if(pfirst->pnext==NULL)
    {
        cout<<"THE DEELETED DATA IA :"<<pfirst->data<<endl;
        free(pfirst);
        count--;
        pfirst=NULL;
    }
    else
    {
        ptemp=pfirst->pnext;
        cout<<"THE DELETED DATA IS:"<<pfirst->data<<endl;
        free(pfirst);
        count--;
        pfirst=ptemp;
    }
}

void del_end()
{
    if(pfirst==NULL)
    {
        cout<<"LIST IS EMPTY\n";
    }
    else if(pfirst->pnext==NULL)
    {
        cout<<"DELETED DATA IS:"<<pfirst->data<<endl;
        free(pfirst);
        count--;
        pfirst=NULL;
    }
    else
    {
        pthis=pfirst;
        while(pthis->pnext->pnext!=NULL)
        {
        pthis=pthis->pnext;
        }
        cout<<"THE DELETED DATA IS:"<<pthis->pnext->data<<endl;
        free(pthis->pnext);
        count--;
        pthis->pnext=NULL;
        
    }
}

void display()
{
    if(pfirst==NULL)
    {
        cout<<"LIST IS EMPTY!!"<<endl;
    }
    else
    {
        pthis=pfirst;
        while(pthis!=NULL)
        {
            cout<<pthis->data<<"\t";
            pthis=pthis->pnext;

        }
        cout<<"\n";
    }
}

int main()
{
    system("cls");
    char a;
    do
    {
        start:
        int choice;
        cout<<"1. INSERTION FROM BEGINNING\n";
        cout<<"2. INSERTION FROM END\n";
        cout<<"3. DELETION FROM BEGINNING\n";
        cout<<"4. DELETION FROM END\n";
        cout<<"5. DISPLAY\n";
        cout<<"6. EXIT\n";

        cout<<"ENTER YOUR CHOICE !!\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
            create();
            ins_beg();
            break;

            case 2:
            create();
            ins_end();
            break;

            case 3:
            create();
            del_beg();
            break;

            case 4:
            create();
            del_end();
            break;

            case 5:
            display();
            break;

            case 6:
            exit(0);
            break;
        }
        cout<<"DO YOU WANT TO CONTINUE??(y/n)"<<endl;
        cin>>a;
       
         if(a=='y'|| a=='Y')
            {
            goto start;
            }
            else
            {
                exit(0);
            }
    }
    while(a!='n');
    getch();
    return 0;
}