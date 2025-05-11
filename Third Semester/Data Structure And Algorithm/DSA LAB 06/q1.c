// insert node at begining
#include <stdio.h>  // For printf and scanf
#include <stdlib.h> // For malloc

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;  // Initialize head to NULL
struct node *temp = NULL;  // Temporary pointer to traverse the list

// Function to insert a new node into the list
void insertNode(struct node *newnode) {
    if (head == NULL) {
        // If the list is empty, make the new node the head
        head = temp = newnode;  // Head points to the new node, temp also points to it
    } else {
        // Add the new node to the end of the list
        temp->next = newnode;
        newnode->prev = temp;
        temp = newnode;  // Move temp to the new node
    }
}

// Function to create the linked list
void create() {
    int choice = 1;  // Variable to control the loop

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

        // Insert the new node into the list
        insertNode(newnode);

        // Ask user if they want to continue adding nodes
        printf("Do you want to continue? (1 for Yes, 0 for No): ");
        scanf("%d", &choice);
    }
}

// Function to display the linked list
void display() {
    struct node *temp = head;  // Start from the head of the list
    
    if (temp == NULL) {
        printf("The list is empty.\n");
        return;
    }

    printf("The list is: ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);  // Print the data of each node
        temp = temp->next;  // Move to the next node
    }
    printf("NULL\n");
}

// Main function to control the flow of the program
int main() {
	
    create();  // Call create to build the list
    display(); // Call display to print the list
    getchar(); // Wait for user input before closing the program
    return 0;
}

