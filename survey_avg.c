#include<stdio.h>

void continuous_average(){
    while(1){
        int n;
        printf("Enter number of elements: ");
        scanf("%d", &n);
        if(n == 0){
            break;
        }
        float arr[n];
        for(int i=0; i<n; i++){
            printf("Enter element %d: ", i+1);
            scanf("%f", &arr[i]);
        }
        float sum = 0;
        for(int i=0; i<n; i++){
            sum += arr[i];
        }
        printf("Average: %.2f\n", (float)sum/n);
    }
}
int main(){
    continuous_average();
    return 0;
}