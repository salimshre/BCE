#include<stdio.h>
#include<stdlib.h> // For malloc

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;
struct node *temp = NULL;

void create() {
    int choice = 1; // Variable to control the loop
    
    while (choice) {
        struct node *newnode = (struct node*)malloc(sizeof(struct node));
        
        // Check if memory allocation was successful
        if (newnode == NULL) {
            printf("Memory allocation failed!\n");
            return;
        }

        printf("Enter data: ");
        scanf("%d", &newnode->data);  // Corrected scanf to use &newnode->data
        
        newnode->prev = NULL;  // Set previous pointer to NULL
        newnode->next = NULL;  // Set next pointer to NULL

        // If the list is empty
        if (head == NULL) {
            head = temp = newnode;
        } else {
            // Add the new node to the end of the list
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }

        // Ask user if they want to continue adding nodes
        printf("Do you want to continue? (1 for Yes, 0 for No): ");
        scanf("%d", &choice);
    }
}

void display() {
    struct node *temp = head;
    
    if (temp == NULL) {
        printf("The list is empty.\n");
        return;
    }
    
    printf("The list is: ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    create();  // Call create to build the list
    display(); // Call display to print the list
    getchar(); // To hold the screen before closing
    return 0;
}

