#include <iostream>
#include<conio.h>
#include <malloc.h>

using namespace std;
int main()
{
    struct node
    {
        int info;
        struct node *pprev = NULL;
        struct node *pnext = NULL;
    } *phead = NULL, *plast, *pfirst;

    struct node *pnew;
    struct node *pthis;
    struct node *ptemp;
    struct node *ptemp1;
    int n; // for operation option
    int data;
    int totalNode = 0;
    int loc;

    phead = ((struct node*)malloc(sizeof(struct node)));
    phead->pnext = phead;
    phead->pprev = phead;
    phead->info = 0;

    bool quit = false;
    while (!quit)
    {
        cout << "1 - Insertion from beginning\n";
        cout << "2 - Deletion from beginning\n";
        cout << "3 - Insertion from end\n";
        cout << "4 - Deletion from end\n";
        cout << "5 - Insertion before specified\n";
        cout << "6 - Insertion after specified\n";
        cout << "7 - Deletion specified\n";
        cout << "8 - DISPLAY\n";
        cout << "Enter your choice:";
        cin >> n;
        switch (n)
        {
            case 1:
                cout << "Data: ";
                cin >> data;
                pnew = ((struct node*)malloc(sizeof(struct node)));
                pnew->info = data;
                if (phead->pprev == phead)
                {
                    phead->pnext = pnew;
                    pnew->pprev = phead;
                    pnew->pnext = phead;
                    phead->pprev = pnew;
                }
                else
                {
                    ptemp = phead->pnext;
                    phead->pnext = pnew;
                    pnew->pprev = phead;
                    pnew->pnext = ptemp;
                    ptemp->pprev = pnew;
                }
                totalNode++;
                break;
            case 2:
                if (phead->pnext == phead)
                {
                    cout << "list is empty!\n";
                }
                else
                {
                    ptemp = phead->pnext->pnext;
                    cout << "Deleted data is " << phead->pnext->info << '\n';
                    free(phead->pnext);
                    phead->pnext = ptemp;
                    ptemp->pprev = phead;
                }
                break;
            case 3:
                cout << "Data: ";
                cin >> data;
                pnew = ((struct node*)malloc(sizeof(struct node)));
                pnew->info = data;
                if (phead->pnext == phead)
                {
                   
                    phead->pnext = pnew;
                    phead->pprev = phead;
                
                    pnew->pnext= phead;
                    phead->pprev=pnew;
                }
                else
                {
                    ptemp = phead->pprev;
                    phead->pprev = pnew;
                    pnew->pnext = phead;
                    pnew->pprev = ptemp;
                    ptemp->pnext = pnew;
                }
                totalNode++;
                break;
            case 4:
                if (phead->pprev == phead)
                {
                    cout << "list is empty!\n";
                }
                else
                {
                    ptemp = phead->pprev->pprev;
                    cout << "Deleted data is " << phead->pprev->info << '\n';
                    free(phead->pprev);
                    phead->pprev = ptemp;
                    ptemp->pnext = phead;
                }
                break;
            case 5: // insert before specified
                cout << "Location: ";
                cin >> loc;
                cout << "Data: ";
                cin >> data;
                pnew = ((struct node*)malloc(sizeof(struct node)));
                pnew->info = data;
                pthis = phead;
                for (int i = 1; i <= loc; ++i)
                {
                    pthis = pthis->pnext;
                }
                ptemp = pthis->pprev;
                ptemp->pnext = pnew;
                pnew->pprev = ptemp;
                pnew->pnext = pthis;
                pthis->pprev = pnew;
                break;
            case 6: // insert after specified
                cout << "Location: ";
                cin >> loc;
                cout << "Data: ";
                cin >> data;
                pnew = ((struct node*)malloc(sizeof(struct node)));
                pnew->info = data;
                pthis = phead;
                for (int i = 1; i <= loc + 1; ++i)
                {
                    pthis = pthis->pnext;
                }
                ptemp = pthis->pprev;
                ptemp->pnext = pnew;
                pnew->pprev = ptemp;
                pnew->pnext = pthis;
                pthis->pprev = pnew;
                break;
            case 7: // deleting specified
                cout << "Location: ";
                cin >> loc;
                pthis = phead->pnext;
                for (int i = 1; i <= loc - 1; ++i)
                {
                    pthis = pthis->pnext;
                }
                ptemp1 = pthis->pnext;
                ptemp = pthis->pprev;
                ptemp->pnext = ptemp1;
                ptemp1->pprev = ptemp;
                cout << "Deleted data is " << pthis->info << '\n';
                free(pthis);
                break;
            case 8: // display
                if (phead->pnext == phead)
                {
                    cout << "list is empty!\n";
                }
                else if (phead->pnext->pnext == phead)
                {
                    cout << pthis->pnext->info << '\n';
                }
                else
                {
                    pthis = phead;
                    while (pthis->pnext->pnext != phead)
                    {
                        cout << pthis->pnext->info << '\t';
                        pthis = pthis->pnext;
                    }
                    cout << pthis->pnext->info << '\n';
                }
                break;
        }
    }

    return 0;
    getch();
}
