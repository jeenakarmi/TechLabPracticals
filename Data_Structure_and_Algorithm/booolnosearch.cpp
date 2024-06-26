#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
    int choice=1,index=0,n,a[50],search;
    int i,j,temp;
    int beg,end,mid;
    system("cls");
    cout<<"Enter number of items:";
    cin>>n;
    for(int k=0;k<n;k++){
        cout<<"Enter Data "<<k+1<<": ";
        cin>>a[k];
    }
    while(choice!=0){
        //system("cls");
        cout<<endl<<"1. Linear Search"
        <<endl<<"2. Binary Search"
        <<endl<<"Enter Your Choice: ";
        cin>>choice;
        switch(choice){
            case 1:{
                cout<<"Enter Element to Search: ";
                cin>>search;
                index = 0;
                for(int i=0;i<n;i++){
                    if(search==a[i]){
                        index=i;
                        cout<<"Data found. index= "<<index;
                        getch();
                        exit;
                    }
                }
                if(index == 0){
                    cout<<"Data Not Found!";
                    getch();
                }
                break;
            }
            case 2:{
                cout<<"Enter Data to Search: ";
                cin>>search;
                while(i<n-1){//sotring
                    cout<<"loop";
                    j=0;
                    while(j<n-i-1){
                        if(a[j]>a[j+1]){
                        temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                        }
                        j++;
                    }
                    i++;
                }
                beg=0;
                end=n-1;
                mid=(beg+end)/2;
                while(beg<=end && a[mid]!=search){
                    if(search<a[mid]){
                        end = mid-1;
                    }
                    else{
                        beg=mid+1;
                    }
                    mid=(beg+end)/2;
                }
                if(a[mid]==search){
                    index=mid;
                    cout<<"Data Found! Index: "<<index;
                }
                else{
                    cout<<"Data Not Found!";
                }
                getch();
                break;
            }
        }
    }
    getch();
    return(0);
}