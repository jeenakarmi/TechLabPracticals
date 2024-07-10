//WAP to show purpose of functions of thread

#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

void *ThreadFun()
{
	sleep(3);
	printf("Printing thread\n");
}
int main()
{
	pthread_t thread_id;
	printf("Before thread\n");
	pthread_create(&thread_id,NULL,ThreadFun,NULL);
	pthread_join(thread_id,NULL);
	printf("After thread Common Message\n");
	printf("Id of thread: %ld\n",pthread_self());
	return 0;
}
