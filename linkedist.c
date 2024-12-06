/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};

int main() {
    struct node* head = NULL;

    head = (struct node*)malloc(sizeof(struct node));
    head->data = 40;
    
   
    printf("The data of current pointer which is head: %d\n", head->data);
    printf("The memory address of head: %p\n", &head->link);

    struct node* current = NULL;
    current = malloc(sizeof(struct node));
    current->data = 30;
    current->link = NULL;
    head->link = current;
    
    printf("The data of current pointer which is head: %d\n", current->data);
    printf("The memory address of head: %p\n", &current->link);


    
    return 0;
}
