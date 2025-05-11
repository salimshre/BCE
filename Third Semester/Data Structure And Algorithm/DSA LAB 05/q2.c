#include <stdio.h>
#include <stdlib.h>

// Define node structure
struct node {
    int data;
    struct node *next;
};

struct node *head = NULL, *tail = NULL;

// Function prototypes
void create_node(int data);
void del_end();
void display();

int main() {
    // Creating nodes
    create_node(10);
    create_node(20);
    create_node(30);
    create_node(40);

    printf("Original Linked List:\n");
    display();

    // Deleting the last node
    del_end();

    printf("\nLinked List after deleting last node:\n");
    display();

    return 0;
}

// Function to create a new node
void create_node(int data) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
        tail = newnode;
    } else {
        tail->next = newnode;
        tail = newnode;
    }
}

// Function to delete the last node
void del_end() {
    if (head == NULL) {
        printf("List is empty, nothing to delete.\n");
        return;
    }

    // If only one node is present
    if (head->next == NULL) {
        free(head);
        head = NULL;
        return;
    }

    struct node *second_last = head;

    // Traverse to the second-last node
    while (second_last->next->next != NULL) {
        second_last = second_last->next;
    }

    // Free the last node
    free(second_last->next);
    second_last->next = NULL;  // Update last pointer
    tail = second_last;  // Update tail pointer
}

// Function to display the linked list
void display() {
    struct node *current = head;

    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

