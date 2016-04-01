#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
 
#define NUM_THREADS 100000

int main ()
{
	int i;
	for(i=0;i <= NUM_THREADS;i++){
		printf("Loop \n");
}
	for(i=0;i <= NUM_THREADS;i++){
		printf("Loop \n");
}
	return 0;
}
