#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
using namespace std;

struct node
{
    int data;
    struct node *pnext;
}*pfirst= NULL,*pnew,*ptemp,*pthis,*plast;

int count=0;
int pos,info;

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
    plast=pnew;
    plast->pnext=pfirst;
}
else
{
    pnew->pnext=pfirst;
    pfirst=pnew;
    plast->pnext=pfirst;
}
cout<<"DATA IS INSERTED:"<<endl;
}

void ins_bspec()
{
    cout << "Location: ";
     cin >> pos;
        if (pos > count || pos < 1)
            {
                cout << "Position invalid!\n";
                
            }
        else if (pos == 1)
            {
                ins_beg();
            }
        else
            {
                pthis = pfirst;
        for (int i = 1; i < pos - 1; ++i)
            {
                 pthis = pthis->pnext;
             }
                ptemp = pthis->pnext;
                pthis->pnext = pnew;
                pnew->pnext = ptemp;
                }
    
}

void ins_end()
{
    if(pfirst==NULL)
    {
        pfirst=pnew;
        plast=pnew;
        plast->pnext=pnew;
    }
    else
    {
        pthis=pfirst;
        while(pthis->pnext!=pfirst)
        {
            pthis=pthis->pnext;
        }
        pthis->pnext=pnew;
        pnew->pnext=pfirst;
        plast=pnew;
    }
}

void ins_aspec()
{
    cout << "Location: ";
    cin >> pos;

if (pos >count || pos < 1)
{
     cout << "Invalid position!\n";
}

else if(pos == count)
{
    ins_end();
}

else
{
pthis = pfirst;
for (int i = 1; i <= pos - 1; ++i)
{
     pthis = pthis->pnext;
}
    ptemp = pthis->pnext;
    pthis->pnext = pnew;
    pnew->pnext = ptemp;
                  
}

}


void del_beg()
{
    if(pfirst==NULL)
    {
        cout<<"LIST IS EMPTY\n";
    }
    else if(pfirst->pnext==pfirst)
    {
        cout<<"THE DEELETED DATA IA :"<<pfirst->data<<endl;
        free(pfirst);
        count--;
        plast=NULL;
    }
    else
    {
        ptemp=pfirst->pnext;
        cout<<"THE DELETED DATA IS:"<<pfirst->data<<endl;
        free(pfirst);
        count--;
        pfirst=ptemp;
        plast->pnext=pfirst;
    }
}

void del_end()
{
    if(pfirst==NULL)
    {
        cout<<"LIST IS EMPTY\n";
    }
    else if(pfirst->pnext==pfirst)
    {
        cout<<"DELETED DATA IS:"<<pfirst->data<<endl;
        free(pfirst);
        count--;
        pfirst=NULL;
        plast=NULL;
    }
    else
    {
        pthis=pfirst;

        while(pthis->pnext->pnext!=pfirst)
        {
        pthis=pthis->pnext;
        }
        cout<<"THE DELETED DATA IS:"<<pthis->pnext->data<<endl;
        free(pthis->pnext);
        count--;
        pthis->pnext=pfirst;
        
    }
}

void del_spec()
{
    cout << "Position: ";
    cin >> pos;
     if (pos > count || pos < 1)
    {
        cout << "Invalid position\n";
        
    }
    else if (pos == 1)
    {
        cout << "Deleted data is " << pfirst->data << endl;
        ptemp = pfirst->pnext;
        free(pfirst);
        pfirst = ptemp;
        count--;
                   
    }
    pthis = pfirst;
    for (int i = 1; i < pos - 1; ++i)
    {
        pthis = pthis->pnext;
    }
        ptemp = pthis->pnext->pnext;
        cout << "Deleted data is " << pthis->pnext->data << endl;
        free(pthis->pnext);
        pthis->pnext = ptemp;
        count--;
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
        while(pthis->pnext!=pfirst )
        {
            cout<<pthis->data<<"\t";
            pthis=pthis->pnext;

        }
        cout<<pthis->data<<"\t";
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
        cout<<"2. INSERTION BEFORE SPECIFIED POSITION\n";
        cout<<"3. INSERTION AFTER SPECIFIED POSITION\n";
        cout<<"4. INSERTION FROM END\n";
        cout<<"5. DELETION FROM BEGINNING\n";
        cout<<"6. DELETION FROM SPECIFIED POSITION\n"; 
        cout<<"7. DELETION FROM END\n";
        cout<<"8. DISPLAY\n";
        cout<<"9. EXIT\n";

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
            ins_bspec();
            break;

            case 3:
            create();
            ins_aspec();
            break;

            case 4:
            create();
            ins_end();
            break;

            case 5:
            del_beg();
            break;

            case 6:
            del_spec();
            break;

            case 7:
            del_end();
            break;

            case 8:
            display();
            break;

            case 9:
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