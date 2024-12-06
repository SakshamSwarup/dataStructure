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
    struct node* link;
};

// Delte at specific Position. 


void deleteAtPos(struct node **head , int pos){
    
    if(*head == NULL){
        printf("List is empty. Deletion not possible.\n");
        return;
    }
    
    if (pos == 0){
    struct node* temp = *head;
    *head = temp-> link;
    free(temp);
    }
    
    int count = 1 ; 
    struct node* previous = *head ;
    struct node* current = previous->link ;
    
    while(current != NULL && count < pos){
        
        previous = current;
        current = current->link;
        count++;
        
        if(current == NULL) {
        printf("Deletion Faild. \n");
        return;

        };
        
    
    }
    previous-> link = current->link;
    
    free(current);
    
}




// Function to traverse the linked list
void traversal(struct node *head) {
    if (head == NULL) {
        printf("Linked List empty.");
        return;
    }
    int count = 1;
    struct node* ptr = head;
    printf("All values are here:\n");

    while (ptr != NULL) {
        printf(" Linked %d value %d \n", count, ptr->data);
        count++;
        ptr = ptr->link;
    }
}

// Function to insert a node at the end of the linked list
void insertion(struct node* head, int data) {
    if (head == NULL) {
        printf("Empty List");
        return;
    }

    struct node* ptr = head;
    struct node* temp = malloc(sizeof(struct node));
    temp->link = NULL;
    temp->data = data;

    while (ptr->link != NULL) {
        ptr = ptr->link;
    }
    ptr->link = temp;
}

// Function to add a node at the beginning of the linked list
// The head is passed by reference to reflect changes in the calling function
void addbeg(struct node** head, int data) {
    struct node* ptr = malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = *head;
    *head = ptr;
}

int main() {
    // Creating all pointers here
    struct node* head;
    struct node* first;
    struct node* second;

    // Initializing all dynamic allocation here
    head = malloc(sizeof(struct node));
    first = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));

    // Assigning values & linking together
    head->data = 1000;  // Added this line to initialize head->data
    head->link = first;
    first->data = 2000;
    first->link = second;
    second->data = 7000;
    second->link = NULL;

    printf("Initial linked list:\n");
    printf("This is 1 data: %d \n", head->data);
    printf("This is 2 data: %d \n", first->data);
    printf("This is 3 data: %d \n", second->data);

    // Adding node at the beginning
    addbeg(&head, 400);

    // Inserting node at the end
    insertion(head, 500);
    
    
    deleteAtPos(&head, 8);

    // Traversing the linked list
    traversal(head);

    return 0;
}
