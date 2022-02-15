#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void move_zero(int *nums, int n){
    int count = 0;

    for(int i=0; i<n; i++){
        if(nums[i] != 0){
            nums[count] = nums[i];
            count++;
        }
    }
    for(int i=count; i<n; i++){
        nums[i] = 0;
    }
}

int main(){
    int nums[7] = {1,2,3,4,5,6,7};
    int n = 7;
    
    move_zero(nums, n);

    for(int i=0; i<n; i++){
        printf("%d ", nums[i]);
    }

    return 0;
}