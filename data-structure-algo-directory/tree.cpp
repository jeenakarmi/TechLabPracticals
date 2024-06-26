#include<iostream>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
using namespace std;
int con;
struct node{
    int data;
    struct node *lchild;
    struct node *rchild;
} *pnew, *pthis, *ppthis,*root;

void create(){
    pnew=(struct node *)malloc(sizeof(struct node));
    cout<<"ENTER DATA  !!"<<endl;
    cin>>pnew->data;
    pnew->lchild=NULL;
    pnew->rchild=NULL;
}

void tree(){
    create();
    if(root==NULL){
        root=pnew;
    }
    else{
        pthis=root;
        while(pthis!=NULL){
            ppthis=pthis;
            if(pnew->data<pthis->data){
                pthis=pthis->lchild;
                if(pthis==NULL){
                    ppthis->lchild=pnew;
                }
            }
            else if(pnew->data>pthis->data){
                pthis=pthis->rchild;
                if(pthis==NULL){ 
                    ppthis->rchild=pnew;
                }
            }
            else{
            cout<<"DUPLICATE NODES!!\n";
            break;
            }
            
        }
    }
    
}

void inorder(struct node *p){
    if(p!=NULL){
        inorder(p->lchild);
        cout<<"\t "<<p->data;
        inorder(p->rchild);
     }
}

void preorder(struct node *p){
    if(p!=NULL){
        cout<<"\t "<<p->data;
        preorder(p->lchild);
        preorder(p->rchild);
    }
}

void postorder(struct node *p){
    if(p!=NULL){
        postorder(p->lchild);
        postorder(p->rchild);
        cout<<"\t "<<p->data;
    }
}
 void search(){
    int value;
    cout<<"ENTER THE DATA YOU WANT TO SEARCH:\n";
    cin>>value;
    if(root==NULL){
        cout<<"TREE IS EMPTY!\n";
    }
    pthis=root;
    while(pthis!=NULL){
        if(value<pthis->data){
            pthis=pthis->lchild;
        }
        else if(value>pthis->data){
            pthis=pthis->rchild;
        }
        else{
            cout<<"DATA FOUND!\n";
            break;
        }
    }
    if(pthis==NULL){
        cout<<"DATA NOT FOUND\n";
    }
 }
int main()
{
    char ans;
    level:
    int choice;
        cout<<"**** BINARY SEARCH TREE ****\n";
        cout<<"\n1. CREATING BINARY SEARCH TREE\n";
        cout<<"2. PREORDER TRAVERSAL \n";
        cout<<"3. POSTORDER TRAVERSAL\n";
        cout<<"4. INORDER TRAVERSAL\n";
        cout<<"5. SEARCHING DATA\n";
        cout<<"6. EXIT \n";
        cout<<"ENTER YOUR CHOICE:\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
            tree();
            break;

            case 2:
            cout<<"PREORDER TRAVERSAL \n";
            preorder(root);
            getch();
            break;

            case 3:
            cout<<"POSTORDER TRAVERSAL\n";
            postorder(root);
            getch();
            break;

            case 4:
            cout<<"INORDER TRAVERSAL\n";
            inorder(root);
            getch();
            break;

            case 5:
            cout<<"SEARCHING DATA\n";
            search();
            getch();
            break;

            case 6:
            exit(0);
            break;
        }
       cout<<"\nDO YOU WANT TO CONTINUE(y/n)?\n";
        cin>>ans;
        if(ans=='y'||ans=='Y'){
            goto level;
        }
        else{
            exit(0);
        }
        getch();
        return(0);
}
