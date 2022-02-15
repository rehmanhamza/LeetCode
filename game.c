#include<stdio.h>
#include<stdlib.h>

#define N 50

int main(){
    int num;
    time_t t;

    srand((unsigned) time(&t));
    int count[N], frequency[N];
    int i = 0;

    while(1){
        num = rand()%10;
        count[i] = num;
        frequency[i] = -1;
        i++;

        if(i == N){
            break;
        }
    }

    int flag;
    for(int i=0; i<N; i++){
        flag = 1;
        for(int j=i+1; j<N; j++){
            if(count[i] == count[j]){
                flag++;
                frequency[j] = 0;
            }
        }
        if(frequency[i] != 0){
            frequency[i] = flag;
        } 
    }
    int sum_freq = 0;
    int sum_count = 0;
    for(int i=0; i<N; i++){
        sum_freq += frequency[i];
        sum_count += count[i];
    }

    printf("sum_freq = %d\nsum_count = %d\n", sum_freq, sum_count);
    for(int i=0; i<N; i++){
        if(frequency[i] != 0){
            printf("%d occurs %d times\n", count[i], frequency[i]);
        }
    }

    return 0;
}