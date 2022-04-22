#include<stdio.h>

void missing_number(int a[], int n){
    for(int i=0; i<n-1; i++){
        if((a[i] - a[i+1])*(-1) == 1){
            continue;
        }
        else{
            printf("Missing number = %d\n",a[i]+1);
        }
    }
}

int main(){
    int a[4] = {0,2,4,6};
    int n = 4;

    missing_number(a, n);
}