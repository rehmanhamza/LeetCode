#include<stdio.h>
#include<string.h>

int max(int a, int b){
    return (a > b) ? a : b;
}

int longestSubstring(char *s){
    int max_count = 0;
    int start = 0;
    int indexes[129];  // 128 ASCII characters + 1 NULL character

    for(int i=0; i<129; i++){
        indexes[i] = -1;
    }

    for(int i=0; i<strlen(s); i++){
        const char c = s[i];
        if(indexes[c] >= start){
            start = indexes[c] + 1;
        }
        indexes[c] = i;
        max_count = max(max_count, i - start + 1);
    }

    return max_count;
}


int main(){
    char *s = "aab";
    printf("%d\n", longestSubstring(s));
    return 0;
}