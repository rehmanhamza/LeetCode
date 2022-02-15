#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int *nums_sort(int *nums, int n){
    for(int i=0; i<n; i++){
        nums[i] = nums[i]*nums[i];
        for(int j=0; j<=n-i; j++){
            if(nums[j] > nums[j+1]){
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }

    return nums;
}

int main(){
    int nums[7] = {1,2,3,4,5,6,7};
    int n = 7;
    nums_sort(nums, n);
    for(int i=0; i<n; i++){
        printf("%d\n", nums[i]);
    }
}