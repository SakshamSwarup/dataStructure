
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data ;
    struct node* link;
    
};


void traversal(struct node* head){
    if(head ==NULL){
        printf("Linked List empty.");
    }
    int count = 1 ; 
    struct node* ptr;
    ptr = head->link;
    printf("All values are here. \n");
    printf(" Linked head value %d \n ",  head->data);
    while (ptr != NULL){
        count++;
        printf(" Linked %d value %d \n ", count , ptr->data);
        ptr = ptr->link; //  value should be stored in varaiale of ptr to 
    }
    
    
    
}

void insertion(struct node* head, int data){
    if(head== NULL){
    printf("Empty List");
    return ;  
        
    }
    
    struct node* ptr = head;
    struct node *temp =  malloc(sizeof(struct node));;
    ptr = head->link;
    
    temp->link = NULL;
    temp->data = data;
    
    while(ptr->link != NULL){
        ptr = ptr->link;
    }
    ptr->link = temp;
    
    
    
}


void add_to_beg(struct node** head, int data) {
    struct node* temp = malloc(sizeof(struct node)); // Allocate memory for new node
    temp->data = data; // Set the data
    temp->link = *head; // Point new node to the current head
    *head = temp; // Update head to new node
}




int main()

{
    
    // Creating all pointer here. 
    
    struct node* head ; 
    struct node* first ; 
    struct node* second; 
    
    // Intializing all dynamic Allocation here.
    
    head =  malloc(sizeof(struct node));
    first=  malloc(sizeof(struct node));
    second= malloc(sizeof(struct node));
    
    // Assinging value & linked togther.
    
    head->data = 45;
    head->link = first;
    
    printf("This is 1 data : %d \n", head->data );
    
    first->data = 2000;
    first->link = second;
    
    printf("This is 2 data : %d \n", first->data );
    
    second->data = 7000;
    second->link = NULL;
    
    printf("This is 3 data : %d \n", second->data );
    
    insertion(head , 500);
    add_to_beg(&head, 850);
    traversal(head);
    
    
    
    
    return 0;
}
