#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int val;
    struct node *next;
}  node_t;

void print_list(node_t *head){
    node_t *current = head;

    while(current != NULL){
        printf("%d ", current->val);
        current = current->next;
    }
    printf("\n");

    free(current);
}

int list_size(node_t *head){
    int count = 0;
    node_t *current = head;

    while(current != NULL){
        count++;
        current = current->next;
    }

    free(current);
    return count;
}


void push(node_t *head, int n){
    node_t *current = head;
    current = (node_t *) malloc(sizeof(node_t));

    printf("here in push()\n");
    while(current->next != NULL){
        current = current->next;
        printf("Here in while in push()\n");
    }
    
    current->next = (node_t *) malloc(sizeof(node_t));
    current->next->val = n;
    current->next->next = NULL;
    
    free(current);
}

struct node *middleNode(struct node *head){
    node_t *current = head;
    int count = 0;

    while(current != NULL){
        count++;
        current = current->next;
    }

    int mid = count / 2;
    int i = 0;
    current = head;

    while(current != NULL){
        current = current->next;
        i++;
    }

    return current;
}

void deleteNode(struct node *head, int pos);

int main(){
    node_t *head = NULL;

    head = (node_t *) malloc(sizeof(node_t));
    if(head == NULL){
        return -1;
    }

    head->val = 1;
    head->next = NULL;

    push(head, 2);
    printf("here\n");
    push(head, 3);
    push(head, 4);
    push(head, 5);
    push(head, 6);

    //print_list(head);
    //deleteNode(head, 3);
    //print_list(head);

    free(head);
    return 0;
}

/*
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};


class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        vector<ListNode*> A = {head};
        while (A.back()->next != NULL)
            A.push_back(A.back()->next);
        return A[A.size() / 2];
    }
};

struct node_t *middleNode(struct node_t *head){
    node_t *current = head;
    int count = 0;

    while(current != NULL){
        count++;
        current = current->next;
    }

    int mid = count / 2;
    int i = 0;
    current = head;

    while(current != NULL){
        current = current->next;
        i++;
    }

    return current;
}

*/

void deleteNode(struct node * head, int pos)
{
    int i;
    struct node *toDelete, *prevNode;

    if(head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        toDelete = head;
        prevNode = head;

        for(i=2; i<=pos; i++) { 
            prevNode = toDelete; 
            toDelete = toDelete->next;

            if(toDelete == NULL)
                break;
        }

        if(toDelete != NULL)
        {
            if(toDelete == head)
                head = head->next;

            prevNode->next = toDelete->next;
            toDelete->next = NULL;

            // Delete nth node
            free(toDelete);

            printf("Successfully delete the node\n");
        }
        else
        {
            printf("Invalid position");
        }
    }
}