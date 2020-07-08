#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

pthread_mutex_t lock;

int j = 0;

void* do_process(void* nothing) {
    pthread_mutex_lock(&lock); // Lock the block of code
    int i = 0;
    j++;

    while(i < 5) {
        printf("%d", j);
        sleep(1);
        i++;
    }
    printf("...Done\n");
    pthread_mutex_unlock(&lock); // Unlock the block of code
}

int main(void) {

    int err = 0;
    pthread_t t1, t2;

    if (pthread_mutex_init(&lock, NULL) != 0) {
        printf("Mutex initialization failed.\n");
        return 1;
    }

    j = 0;

    pthread_create(&t1, NULL, do_process, NULL);
    pthread_create(&t2, NULL, do_process, NULL);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    return 0;
}
