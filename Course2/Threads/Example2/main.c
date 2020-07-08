#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void* print_message_function(void *ptr) {
    char *message;
    message = (char *) ptr;
    printf("%s \n", message);
}

int main() {

    pthread_t thread1, thread2;
    char *message1 = "Thread 1";
    char *message2 = "Thread 2";
    int iret1 = 0, iret2 = 0;

    // Create independent thread each of which will execute a function
    iret1 = pthread_create(&thread1, NULL, print_message_function, (void*) message1);
    iret2 = pthread_create(&thread2, NULL, print_message_function, (void*) message2);
    // Wait till threads are complete before main continues, unless we 
    // wait we run the risk of executing an exit which will terminate the 
    // process and all threads before the threads have completed.
    
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("Thread 1 returns %d\n", iret1);
    printf("Thread 2 returns %d\n", iret2);
    pthread_exit(NULL);

    return 0;
}
