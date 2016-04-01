#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
 
#define NUM_THREADS 1

void *funcao(void *args){
	printf("Loop %d", );
	return (NULL);
}

int main (){
	pthread_t threads[NUM_THREADS];
	int i;
	for(i=0;i <= NUM_THREADS; i++)
		pthread_create(&threads[i], NULL, funcao, &i);
	for(i=0;i <= NUM_THREADS; i++)
		pthread_join(threads[i],NULL);
	return 0;
}
