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
    } *pfirst = NULL, *plast;

    struct node *pnew;
    struct node *pthis;
    struct node *ptemp;
    struct node *ptemp1;
    int n; // for operation option
    int data;
    int totalNode = 0;
    int loc;

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
                if (pfirst == NULL)
                {
                    pfirst = pnew;
                    plast = pnew;
                    pfirst->pnext = NULL;
                    pfirst->pprev = NULL;
                }
                else
                {
                    pnew->pprev = NULL;
                    pnew->pnext = pfirst;
                    pfirst->pprev = pnew;
                    pfirst = pnew;
                }
                totalNode++;
                break;
            case 2:
                if (pfirst == NULL)
                {
                    cout << "list is empty\n";
                }
                else if (pfirst->pnext == NULL)
                {
                    cout << "Deleted data is " << pfirst->info << endl;
                    free(pfirst);
                    pfirst = NULL;
                    plast = NULL;
                    totalNode = 0;
                }
                else
                {
                    cout << "Deleted data is " << pfirst->info << endl;
                    ptemp = pfirst->pnext;
                    free(pfirst);
                    ptemp->pprev = NULL;
                    pfirst = ptemp;
                    totalNode--;
                }
                break;
            case 3:
                cout << "Data: ";
                cin >> data;
                pnew = ((struct node*)malloc(sizeof(struct node)));
                pnew->info = data;
                if (pfirst == NULL)
                {
                    pfirst = pnew;
                    plast = pnew;
                    pfirst->pnext = NULL;
                    pfirst->pprev = NULL;
                }
                else
                {
                    plast->pnext = pnew;
                    pnew->pprev = plast;
                    pnew->pnext = NULL;
                    plast = pnew;
                }
                totalNode++;
                break;
            case 4:
                if (pfirst == NULL)
                {
                    cout << "list is empty\n";
                }
                else if (pfirst->pnext == NULL)
                {
                    cout << "Deleted data is " << pfirst->info << endl;
                    free(pfirst);
                    pfirst = NULL;
                    plast = NULL;
                    totalNode = 0;
                }
                else
                {
                    cout << "Deleted data is " << plast->info << endl;
                    ptemp = plast->pprev;
                    free(plast);
                    ptemp->pnext = NULL;
                    plast = ptemp;
                    totalNode--;
                }
                break;
            case 5: // insert before specified
                cout << "Location: ";
                cin >> loc;
                cout << "Data: ";
                cin >> data;
                pnew = ((struct node*)malloc(sizeof(struct node)));
                pnew->info = data;
                pthis = pfirst;
                for (int i = 1; i < loc; ++i)
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
                pthis = pfirst;
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
            case 7: // deleting specified
                cout << "Location: ";
                cin >> loc;
                if (loc > totalNode || loc < 1)
                {
                    cout << "location out of bound!\n";
                    break;
                }

                if (loc == 1)
                {
                    cout << "Deleted data is " << pfirst->info << endl;
                    ptemp = pfirst->pnext;
                    free(pfirst);
                    ptemp->pprev = NULL;
                    pfirst = ptemp;
                    totalNode--;
                }
                else if (loc == totalNode)
                {
                    cout << "Deleted data is " << plast->info << endl;
                    ptemp = plast->pprev;
                    free(plast);
                    ptemp->pnext = NULL;
                    plast = ptemp;
                    totalNode--;
                }
                else
                {
                    pthis = pfirst;
                    for (int i = 1; i <= loc - 1; ++i)
                    {
                        pthis = pthis->pnext;
                    }
                    ptemp1 = pthis->pnext;
                    ptemp = pthis->pprev;
                    ptemp->pnext = ptemp1;
                    ptemp1->pprev = ptemp;
                    cout << "Deleted data is " << pthis->info << endl;
                    free(pthis);
                    totalNode--;
                }
                break;
            case 8: // display
                if (pfirst != NULL)
                {
                    pthis = pfirst;
                    int i;
                    i = 1;
                    while (pthis->pnext != NULL)
                    {
                        cout << "Data at " << i++ << ": " << pthis->info << endl;
                        pthis = pthis->pnext;
                    }
                    cout << "Data at " << i++ << ": " << pthis->info << endl;
                }
                else
                {
                    cout << "list is empty\n";
                }
                break;
        }
    }

    return 0;
    getch();
}
