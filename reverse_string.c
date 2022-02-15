#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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

int main(){
    char *s = "Hamza";
    reverse_string(s);

    return 0;
}