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

void reverse_string(char *s){
    char *start = s;
    char *end = start + strlen(s) - 1;
    char temp;

    while(end > start){
        temp = *start;
        *start = *end;
        *end = temp;
        
        ++start;
        --end;
    }
}

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
    //nums_sort(nums, n);
    /*for(int i=0; i<n; i++){
        printf("%d\n", nums[i]);
    }*/

    //int index = sort_search(nums, n, 9);
    //printf("index = %d\n", index);

    /*
    move_zero(nums, n);

    for(int i=0; i<n; i++){
        printf("%d ", nums[i]);
    }
    printf("\n");
    */
    
    /*
    int *ptr;
    ptr = two_sums(nums, n, x);

    if(ptr){
        for(int i=0; i<2; i++){
            printf("%d ", ptr[i]);
        }
        printf("\n");
    }

    free(ptr);
    */

    //char *s = "Hamza";
    //reverse_string(s);

    rotate_array_right(nums, n, k);
    
    for(int i=0; i<n; i++){
        printf("%d ", nums[i]);
    }
    printf("\n");


    return 0;
}

// Leet Code

/*

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    int low = 1;
    int high = n;
    
    while(low < high){
        int mid = low + (high - low)/2;
        
        if(isBadVersion(mid)){
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    
    return low;
}

*/