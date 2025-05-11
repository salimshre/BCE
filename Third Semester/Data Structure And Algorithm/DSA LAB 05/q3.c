// delete from specific position
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL, *tail = NULL;

void create_node(int data);
void del_bnode();
void del_enode();
void del_snode(int data);
void display();

int main() {
    int n;
    
    create_node(1);
    create_node(2);
    create_node(3);
    display();

    printf("\nEnter the node to delete (1-3): ");
    scanf("%d", &n);

    if (n == 1)
        del_bnode();
    else if (n == 2)
        del_enode();
    else if (n == 3)
        del_snode(n);
    
    display();
    
    return 0;
}

void create_node(int data) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
        tail = newnode;  // Set tail when creating the first node
    } else {
        tail->next = newnode;
        tail = newnode;
    }
}

void del_bnode() {
    if (head == NULL) return;
    
    struct node *temp = head;
    head = head->next;
    free(temp);
}

void del_enode() {
    if (head == NULL) return;
    
    struct node *current = head, *prev = NULL;

    while (current->next != NULL) {
        prev = current;
        current = current->next;
    }

    if (prev != NULL)
        prev->next = NULL;
    else
        head = NULL;  // If only one node was present

    free(current);
}

void del_snode(int data) {
    if (head == NULL) return;
    
    struct node *current = head, *prev = NULL;

    while (current != NULL && current->data != data) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) return;  // If data is not found
    
    if (current == head) {
        head = current->next;
    } else {
        prev->next = current->next;
    }

    free(current);
}

void display() {
    struct node *current = head;

    if (head == NULL) {
        printf("Empty\n");
        return;
    }

    printf("Nodes of singly linked list:\n");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

