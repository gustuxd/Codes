#include <stdio.h> // rotina standard I/O 
#include <stdlib.h> // standard library do C
#include <pthread.h> // funções pthread 

#define THREADS_MAX 4 // definindo "THREADS_MAX"
// função que a nova threads irá executar
void *function(void *param) {
	int id = *((int *)(param));
       int i, loops = 2;
       for(i = 0; i < loops; i++)
       {
               printf("thread %d: loop %d\n", id, i);
       }
       pthread_exit(NULL);
}

//função main
	int main (){
		pthread_t threads[THREADS_MAX];
    	int thread_args[THREADS_MAX];
    	int i;
    	printf("\nInicio\n");
    	for (i = 0; i < THREADS_MAX; i++)
       {
               thread_args[i] = i;
               pthread_create(&threads[i], NULL, function, (void *) &thread_args[i]);
       }
		printf("\nMeio\n");
       for (i = 0; i < THREADS_MAX; i++)
       {
               pthread_join(threads[i], NULL);
       }
       printf("\nFim\n");
       return EXIT_SUCCESS;
}
