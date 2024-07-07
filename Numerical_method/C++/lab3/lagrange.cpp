// Lagrange interpolation

#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	int n,i,j;
	float y[10],yp=0,xp,y0,y1,x[10],x0,x1,p;
	
	cout<<"Enter the number of terms :\t";
	cin>>n;
	cout<<"\n";
	for(i=0; i<n; i++)
	{
		
	cout<<"Enter the points  x"<<i+1<<" :\t";
	cin>>x[i];
	}
	cout<<"\n";
	for(i=0; i<n; i++)
	{
	cout<<"Enter the points  y"<<i+1<<" :\t";
	cin>>y[i];
	}
	cout<<"\nEnter the independent value xp :\t";
	cin>>xp;
	
	for(i=0; i<n; i++)
	{
		p=1;
		for(j=0; j<n; j++)
		{
		if(i!=j)
		{
			p=p*(xp-x[j])/(x[i]-x[j]);
		}
		
		}
		yp=yp+p*y[i];
	}
	cout<<"Interpolated value at \t"<<xp<<" is "<<yp;
	return 0;
}
