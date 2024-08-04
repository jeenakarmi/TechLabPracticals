// RACE CONDITION
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
void *fun1();
void *fun2();

int shared = 1; //shared variable

int main()
{
    pthread_t thread1, thread2;
    pthread_create(&thread1, NULL, fun1, NULL);
    pthread_create(&thread2, NULL, fun2, NULL);
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    printf("Final value of shared is %d\n", shared);

}

void *fun1()
{
    int x;
    x = shared;
    printf("Thread1 reads the value of shared variable as %d\n", x);
    x++;
    printf("Local update by thread1: %d\n", x);
    sleep(1);
    shared = x;
    printf("Value of shared variable updated by thread1 is %d\n", shared);
}

void *fun2()
{
    int y;
    y = shared;
    printf("Thread2 reads the value of shared variable as %d\n", y);
    y--;
    printf("Local update by thread2: %d\n", y);
    sleep(1);
    shared = y;
    printf("Value of shared variable updated by thread2 is %d\n", shared);
}
