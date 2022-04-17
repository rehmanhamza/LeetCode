#include<stdio.h>

int main(){
    int G_1, S_1, B_1, G_2, S_2, B_2;
    int C_1 = 0, C_2 = 0;

    // country_1 medal count
    G_1 = 0;
    S_1 = 29;
    B_1 = 30;

    // country_2 medal count
    G_2 = 0;
    S_2 = 12;
    B_2 = 60;

    if(G_1 > G_2){
        C_1 = 1;
    }else if(G_2 > G_1){
        C_2 = 1;
    }else if(G_1 == G_2 && S_1 > S_2){
        C_1 = 1;
    }else if(G_1 == G_2 && S_1 < S_2){
        C_2 = 1;
    }else if(G_1 == G_2 && S_1 == S_2 && B_1 > B_2){
        C_1 = 1;
    }else if(G_1 == G_2 && S_1 == S_2 && B_1 < B_2){
        C_2 = 1;
    }else if(G_1 == G_2 && S_1 == S_2 && B_1 == B_2){
        printf("Both C_1 and C_2, have same number of medals.\n");
    }else{
        printf("Test run.\n");
    }

    if(C_1 == 1){
        printf("C_1 on top!.\n");
    }else if(C_2 == 1){
        printf("C_2 on top!.\n");
    }

    return 0;
}