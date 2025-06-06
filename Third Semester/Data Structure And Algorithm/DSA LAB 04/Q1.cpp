// Program to display and create singly linear linked list:
#include <stdio.h> 
#include <stdlib.h> 


struct node { 
    int data; 
    struct node *next; 
}; 


struct node *head = NULL, *tail = NULL; 


void addNode(int data) { 
    
    struct node *newNode = (struct node*)malloc(sizeof(struct node)); 
    newNode->data = data; 
    newNode->next = NULL;

    
    if (head == NULL) { 
        
		head = newNode; 
        tail = newNode; 
    } else { 
        
        tail->next = newNode; 
       
        tail = newNode; 
    } 
} 


void display() { 
    
    struct node *current = head; 

    if (head == NULL) { 
        printf("List is empty\n"); 
        return; 
    } 
    printf("Nodes of singly linked list: \n"); 
    while (current != NULL) { 
        
        printf("%d ", current->data); 
        current = current->next; 
    } 
    printf("\n"); 
} 

int main() { 
    
    addNode(1); 
    addNode(2); 
    addNode(3); 
    addNode(4); 

    
    display(); 

    return 0; 
}  

