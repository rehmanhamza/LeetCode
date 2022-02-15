#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int *two_sums(int *nums, int n, int x){
    int l = 2;
    int *index_r = (int *) malloc(l*sizeof(int));

    int a = 0;
    int b = 1;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i] + nums[j] == x){
                index_r[a] = i+1;
                index_r[b] = j+1;
                goto A;
            }
        }
    }
    A:
    return index_r;
}

int main(){
    int nums[7] = {1,2,3,4,5,6,7};
    int n = 7;

    int *ptr;
    ptr = two_sums(nums, n, x);

    if(ptr){
        for(int i=0; i<2; i++){
            printf("%d ", ptr[i]);
        }
        printf("\n");
    }

    free(ptr);

    return 0;
}