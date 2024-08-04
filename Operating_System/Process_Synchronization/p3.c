// Process Synchronization using Mutex
#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

void *fun1();
void *fun2();

int shared = 1;   //shared variable
pthread_mutex_t l; // mutex lock

int main ()
{
    pthread_mutex_init(&l, NULL);    //initializing mutex lock
    pthread_t thread1, thread2;
    pthread_create(&thread1, NULL, fun1, NULL);
    pthread_create(&thread2, NULL, fun2, NULL);
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    printf("Final value of shared is %d\n", shared);  //prints last updated value of shared variable
    return 0;
}

void *fun1()
{
    int x;
    printf("Thread1 trying to acquire lock\n");
    pthread_mutex_lock(&l);
    printf("Thread1 acquire lock\n");
    x = shared;
    printf("Thread1 reads the value of shared variable as %d\n", x);
    x++;
    printf("Local update by thread1: %d\n", x);
    sleep(1);
    shared = x;
    printf("Value of shared variable updated by thread1 is %d\n", shared);
    pthread_mutex_unlock(&l);
    printf("Thread1 released the lock\n");
}

void *fun2()
{
    int y;
    printf("Thread2 trying to acquire lock\n");
    pthread_mutex_lock(&l);
    printf("Thread2 acquire lock\n");
    y = shared;
    printf("Thread2 reads the value of shared variable as %d\n", y);
    y--;
    printf("Local update by thread2: %d\n", y);
    sleep(1);
    shared = y;
    printf("Value of shared variable updated by thread2 is %d\n", shared);
    pthread_mutex_unlock(&l);
    printf("Thread2 released the lock\n");
}
