/*
 To create a thread. The main process passes 2 numbers to thread. 
 Calculate sum of numbers and return sum to main process for printing
*/


#include<unistd.h>
#include<stdio.h>
#include<pthread.h>
#include<malloc.h>

void *thread_func(void *arg);

int i, j;
int num[2]={3,5};
void *result;

void main()
{
        pthread_t a_thread;
        pthread_create(&a_thread,NULL,thread_func,(void *)num);
        pthread_join(a_thread,&result);
        printf("Inside main program\n");
        printf("Sum is %d\n",*((int*)result));
}
void *thread_func(void *arg)
{
        printf("Inside the thread\n");
   	int *x =arg;
	int *sum = (int *)malloc(sizeof(int));
	*sum = x[0]+x[1];
	pthread_exit((void *)sum);
}
