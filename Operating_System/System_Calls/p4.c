/*
To create hierarchy of processes such that p2 is child of p1 and p1 is child of p.
*/


#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
        pid_t p,p1;
        printf("Using first fork system call\n");
        p = fork();
        if (p == 0)
        {
                printf("I am child p1 of parent p having ID %d\n", getpid());
                printf("My parent p ID  is %d\n", getppid());
		
		wait(NULL);
		printf("Using second fork system call\n");
		p1 = fork();
		if(p1 == 0)
                {
                        printf("I am child p2 of parent p1 having ID %d\n", getpid());
                        printf("My parent p1 ID  is %d\n", getppid());

                }
                else
                {
                        wait(NULL);
                        printf("I am parent p1 of child p2 with ID %d\n", getpid());
                        printf("My child p2 has ID %d\n",p1);
                }
        }
        else
        {		
                wait(NULL);
		printf("I am parent p of p1 having ID %d\n",getpid());
		printf("My child p1 has ID %d\n", p);
        }
return 0;
}
