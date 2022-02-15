#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void rotate_array_right(int *nums, int numsSize, int k){
    int n = numsSize;

    if(k < 0) {
        return;
    }
    
    for(int i = 0; i < k; i++) {
        int last = nums[n - 1];
        for(int i = n - 2; i >= 0; i--) {
            nums[i + 1] = nums[i];
        }
    
        nums[0] = last;
    }
}

int main(){
    int nums[7] = {1,2,3,4,5,6,7};
    int n = 7;
    int x = 0;
    int k = 3;

    rotate_array_right(nums, n, k);
    
    for(int i=0; i<n; i++){
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}