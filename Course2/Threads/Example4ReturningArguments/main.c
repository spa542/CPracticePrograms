#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<pthread.h>

void* hello_return(void* args) {
    char *hello = strdup("Hello World!\n");
    return (void*) hello;
}

int main(int argc, char** argv) {

    char *str;
    pthread_t thread;

    pthread_create(&thread, NULL, hello_return, NULL);

    pthread_join(thread, (void**) &str);
    // Cannot have the pthread_exit call because it will end the thread
    // before any value can be returned from the thread
    //pthread_exit(NULL);
    printf("%s", str);

    return 0;
}
