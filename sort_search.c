#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int sort_search(int *nums, int numsSize, int target){
    int n = numsSize;
    int x = target;

    for(int i=0; i<n; i++){
        if(nums[i] == x){
            return i;
        } else if(nums[i] > x){
            return i;
        }
    }

    return n;
}

int main(){
    int nums[7] = {1,2,3,4,5,6,7};
    int n = 7;

    int index = sort_search(nums, n, 9);
    printf("index = %d\n", index);

    return 0;
}