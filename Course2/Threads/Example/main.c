#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void* hello_fun() {
    printf("Hello World!\n");
    return NULL;
}

int main(int argc, char** argv) {

    pthread_t thread = 0;
    pthread_create(&thread, NULL, hello_fun, NULL);
    // Must have join because we want the main thread to wait for hello_fun to execute
    pthread_join(thread, NULL);
    pthread_exit(NULL);

    return 0;
}
