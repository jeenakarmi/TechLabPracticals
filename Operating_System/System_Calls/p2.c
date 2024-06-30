/*
To show id of parent and child process after fork() 
Using wait() to make parent process wait until child process finish its work
*/

#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
    pid_t p;
	printf("Before fork\n");
	p = fork();
	if (p == 0)
	{
		printf("I am child having ID %d\n", getpid());
		printf("My parent ID  is %d\n", getppid());
	}
	else
	{
		wait(NULL);
		printf("I am parent having ID %d\n", getpid());
		printf("My child ID is %d\n", p);	
	}
	printf("Common\n");
return 0;
}

