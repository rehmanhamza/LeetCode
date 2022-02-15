#include<stdio.h>
#include<stdlib.h>

int singleNumber(int* nums, int numsSize){
    int count = 0;
    for(int i=0; i<numsSize; i++){
        count ^= nums[i];
    }
    return count;
}

int main(){
    int num[5] = {2, 1, 4, 1, 2};
    int n = 5;
    printf("single number in array = %d\n", singleNumber(num, n));  
    return 0;
}