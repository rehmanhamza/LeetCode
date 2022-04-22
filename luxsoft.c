#include<stdio.h>
#include<string.h>

void check_brackets(char *str){
    int l = strlen(str);
    int count = 0;
    int count_brackets_open = 0;
    int count_brackets_close = 0;

    for(int i=0; i<l; i++){
        if(str[i] == '(' && str[i+1] == ')'){
            count++;
        }
        if(str[i] == '(' && str[i+1] != ')'){
            count_brackets_open++;
        }
        if(str[i] == ')' && str[i-1] != '('){
            count_brackets_close++;
        }
    }

    if(count == l/2 && count_brackets_open == 0 && count_brackets_close == 0){
        printf("String is valid\n");
    }else{
        printf("String is not valid\n");
    }

}

int main(){
    char *str = "()())";
    check_brackets(str);

}