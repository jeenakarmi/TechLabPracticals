//To show implementation of fork()

#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main(){
	printf("Before fork: Hello\n");
	fork();
	printf("After fork: Hello World!\n");

return 0;
}
