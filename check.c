#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int val;
    struct node *next;
} node_t;


void push(node_t *head, int n){
    node_t *current = head;
    current = (node_t *) malloc(sizeof(node_t));

    printf("here in push() and n = %d\n", n);
    while(current->next != NULL){
        current = current->next;
        printf("Here in while in push()\n");
    }
    
    current->next = (node_t *) malloc(sizeof(node_t));
    current->next->val = n;
    current->next->next = NULL;
    
    //free(current);
}

void print_list(node_t *head){
    node_t *current = head;

    while(current != NULL){
        printf("%d ", current->val);
        current = current->next;
    }

    printf("\n");
}


int main(){
    node_t *head;
    head = (node_t *) malloc(sizeof(node_t));

    if(head == NULL){
        return -1;
    }

    head->val = 1;
    head->next = NULL;

    push(head, 2);
    push(head, 3);
    push(head, 4);
    push(head, 5);

    print_list(head);

    free(head);
    return 0;
}