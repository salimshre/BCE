// delete from begining
#include <stdio.h>
#include <stdlib.h>

// Define a node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to delete a node from the beginning
struct Node* deleteFromBeginning(struct Node* head) {
    // Check if the list is empty
    if (head == NULL) {
        printf("List is already empty.\n");
        return head;
    }

    // Store the head node in a temporary pointer
    struct Node* temp = head;

    // Move the head pointer to the next node
    head = head->next;

    // Free the memory of the deleted node
    free(temp);

    printf("Node deleted from the beginning.\n");
    return head;
}

// Function to insert a node at the end
struct Node* insertAtEnd(struct Node* head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        return newNode;
    }

    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

// Function to print the linked list
void printList(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    struct Node* head = NULL;

    // Insert some nodes
    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);

    printf("Initial Linked List: ");
    printList(head);

    // Delete the first node
    head = deleteFromBeginning(head);

    printf("Linked List after deletion: ");
    printList(head);

    return 0;
}

