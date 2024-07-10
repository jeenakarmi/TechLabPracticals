/*
 WAP to create a thread. Thread prints number from 0-n where n is passed from main process to thread.
 The main process also wait for thread to finish and then prints from 30-40.
*/

#include <unistd.h>
#include <stdio.h>
#include <pthread.h>

void *thread_func(void *arg);

int main()
{
    pthread_t a_thread;
    int n = 10; // to set upper limit for thread to print
    void *result;

    pthread_create(&a_thread, NULL, thread_func, (void *)&n);
    pthread_join(a_thread, &result);

    printf("Inside main program\n");
    for (int i = 30; i <= 40; i++) {
        printf("%d\n", i);
    }

    return 0;
}

void *thread_func(void *arg)
{
    int n = *((int *)arg);
    printf("Inside the thread\n");
    for (int i = 0; i <= n; i++) {
        printf("%d\n", i);
    }
    pthread_exit(NULL);
}

