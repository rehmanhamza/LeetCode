#include<pthread.h>
#include <stdio.h>
#include <stdlib.h>

void *myfunc(void *ptr){
    int *tidP, data;
    data = (int *) ptr;
    printf("%d ", data);
    return NULL;
}

int main(int argc, char *argv[])
{
    int i, x;
    void *retval;
    pthread_t tid[10];
    for(i=0; i<10; i++){
        pthread_create(&tid[i], NULL, myfunc, (void *)i);
    }
    for(x=0; x<10; x++){
        pthread_join(tid[x], &retval);
    }
    pthread_exit(NULL);
    printf("\n");
}