//Show output of given code

#include<unistd.h>
#include<stdio.h>
#include<pthread.h>

void *thread_func(void *arg);

int i, j;
void main()
{
	pthread_t a_thread;
	pthread_create(&a_thread,NULL,thread_func,NULL);
	pthread_join(a_thread,NULL);
	printf("Inside main program\n");
		for(i=10;i<=20;i++)
		{
			printf("%d\n",i);
			sleep(1);
		}
}
void *thread_func(void *arg)
{
	printf("Inside the thread\n");
	for(j=1;j<=5;j++)
	{
		printf("%d\n",j);
		sleep(1);
	}
}	
