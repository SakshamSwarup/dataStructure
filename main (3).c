
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * link;
}*top = NULL; 

void push(int data){
    struct node* newNode ;
    newNode = malloc(sizeof(struct node));
    if (newNode == NULL){
        printf("Stack is Ovverflow");
        exit(1);
    }
newNode->data = data;
newNode->link = NULL;
newNode->link = top;
top = newNode;
    
    
    
}

void print_stack() {
    struct node *temp = top;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}


int main()
{

push(7);

print_stack();

    return 0;
}