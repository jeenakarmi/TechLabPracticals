// Implementation of FCFS when arrival time is 0


#include<stdio.h>
#include<unistd.h>

void main()
{
	int bt[15], wt[15], tat[15], ct[15], n, i, j;
	float awt, atat, twt = 0, ttat=0;
	printf("Enter no. of process:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter no. of burst time for p%d\n",i);
		scanf("%d", &bt[i]);
	}
	int tempT = 0;
	for(i=0;i<n;i++)
	{
		ct[i] = bt[i] +tempT;
		tempT = ct[i];

		tat[i] = ct[i] + 0;
		wt[i] = tat[i] -bt[i];

		twt = twt + wt[i];
		ttat = ttat + tat[i];
	} 

	awt = (twt / n);
	atat = (ttat / n);
	printf("Process\t\tbt\t\twt\t\ttat\n");
	for(i=0;i<n;++i)
	{
		printf("%d\t\t%d\t\t%d\t\t%d\n",i,bt[i],wt[i],tat[i]);
	}
	printf("AWAT: %f\n", awt);
	printf("ATAT: %f\n", atat);
}
