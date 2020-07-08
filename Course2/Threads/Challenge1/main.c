#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

#define NUMOFTHREADS 10

pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
int count = 0;

void *threadFunc(void *num) {
   int* passednum = (int*) num; 
   pthread_mutex_lock(&lock);
   count++;
   pthread_mutex_unlock(&lock);

   printf("Calling Thread: %ld\n", pthread_self());
   printf("Integer passed: %d\n", 5);
   printf("Global Count variable value: %d\n", count);
}

int main() {

    pthread_t threadlist[NUMOFTHREADS];
    int numlist[NUMOFTHREADS];
    for (int i = 0; i < NUMOFTHREADS; i++) {
        numlist[i] = i;
    }
    for (int i = 0; i < NUMOFTHREADS; i++) {
        pthread_create(&threadlist[i], NULL, threadFunc, NULL);
    }

    for (int i = 0; i < NUMOFTHREADS; i++) {
        pthread_join(threadlist[i], NULL);
    }

    return 0;
}
