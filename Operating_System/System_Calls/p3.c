/*
To create child process of parent p1. Also  p1 makes another child  c2
*/


#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
    pid_t p1,p2;
    printf("Using fork system call\n");
    p1 = fork();
    if (p1 == 0)
    {
        printf("I am child c1 of parent p1 having ID %d\n", getpid());
        printf("My parent ID  is %d\n", getppid());
    }
    else
    {
		wait(NULL);
        p2 = fork();
		if(p2 == 0)
		{
			printf("I am child c2 of parent p1 having ID %d\n", getpid()); 
			printf("My parent ID  is %d\n", getppid());
       
	    }
		else
		{
			wait(NULL);
			printf("I am parent p1 of child c2 with ID %d\n", getpid());
			printf("My child c2 has ID %d\n",p2);
		}
	}
return 0;
}
