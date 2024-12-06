/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#define Max 50

// Global Variable

int queue[Max] ;
int rear = -1 ;
int front = -1 ;

// All Operations Prototype

void enqeue(data);
int denqeue();
int isEmpty();
int peek();
int isFull();
void print();

int main()
{
    printf(" ******************************* \n  ");
    printf("      Welcome To Queue:-     \n  ");
    printf(" ******************************* \n  ");
    
    int choice , data;
    
    while(1){
        printf("Choice Your Options:-\n  ");
        printf("1. Add Element \n  ");
        printf("2. Delete Element \n  ");
        printf("3. First Element\n  ");
        printf("4. Print All Elements\n  ");
        printf("5. Quit\n  ");
        printf("Enetr Your Choice:  ");
        scanf("%d", &choice);
    }
    
    
    switch (choice) {
        case 1 :
        printf("Enter your Element : ");
        scanf("%d", &data);
        enqeue(data);
        printf(" Your Element added Successfully :  ");
        break;
        
        case 2 :
        data = denqeue();
        printf(" Data Deleted Successfully %d ", data);
        break;
        
        case 3 :
        printf(" Print the First Element ", peek());
        break;
        
        case 4 :
        printf(" Print the all Element", print());
        break;
        
        case 5 :
        exit(1);





        
        
        
        
    }
    
    
    
    
    
    
    
    return 0;
}