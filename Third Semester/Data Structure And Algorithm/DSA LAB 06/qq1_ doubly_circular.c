#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL, *tail = NULL;

// Insert at beginning (Circular)
void insertAtBeg() {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    
    if (head == NULL) {
        newnode->prev = newnode;
        newnode->next = newnode;
        head = tail = newnode;
    } else {
        newnode->next = head;
        newnode->prev = tail;
        head->prev = newnode;
        tail->next = newnode;
        head = newnode;
    }
}

// Insert at end (Circular)
void insertAtEnd() {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    
    if (head == NULL) {
        newnode->prev = newnode;
        newnode->next = newnode;
        head = tail = newnode;
    } else {
        newnode->prev = tail;
        newnode->next = head;
        tail->next = newnode;
        head->prev = newnode;
        tail = newnode;
    }
}

// Insert at specific position (1-based)
void insertAtPos() {
    int pos, i = 1;
    printf("Enter position: ");
    scanf("%d", &pos);
    
    if (pos < 1) {
        printf("Invalid position!\n");
        return;
    }
    
    if (pos == 1) {
        insertAtBeg();
        return;
    }
    
    struct node *temp = head;
    while (i < pos-1 && temp->next != head) {
        temp = temp->next;
        i++;
    }
    
    if (i != pos-1) {
        printf("Position out of range!\n");
        return;
    }
    
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    
    newnode->prev = temp;
    newnode->next = temp->next;
    temp->next->prev = newnode;
    temp->next = newnode;
    
    if (temp == tail) tail = newnode; // Update tail if inserted at end
}

// Insert AFTER specific position
void insertAfterPos() {
    int pos, i = 1;
    printf("Enter position: ");
    scanf("%d", &pos);
    
    if (pos < 1) {
        printf("Invalid position!\n");
        return;
    }
    
    struct node *temp = head;
    while (i < pos && temp->next != head) {
        temp = temp->next;
        i++;
    }
    
    if (i != pos) {
        printf("Position out of range!\n");
        return;
    }
    
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    
    newnode->prev = temp;
    newnode->next = temp->next;
    temp->next->prev = newnode;
    temp->next = newnode;
    
    if (temp == tail) tail = newnode;
}

// Display list (Circular)
void display() {
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    
    struct node *temp = head;
    printf("List: ");
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}

int main() {
    int choice;
    while(1) {
        printf("\n1. Insert at beginning\n2. Insert at end\n");
        printf("3. Insert at position\n4. Insert after position\n");
        printf("5. Display\n6. Exit\nEnter choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1: insertAtBeg(); break;
            case 2: insertAtEnd(); break;
            case 3: insertAtPos(); break;
            case 4: insertAfterPos(); break;
            case 5: display(); break;
            case 6: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}