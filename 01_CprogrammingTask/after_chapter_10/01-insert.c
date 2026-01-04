#include <stdio.h>
#include <stdlib.h>

//define structure
struct Node {
    int data;
    struct Node *next;
};

// Function to insert at the beginning
struct Node* insertAtHead(struct Node *head, int val) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    
    newNode->data = val;
    
    newNode->next = head;
    
    return newNode;
}

// Helper function to print the list
void printList(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main(void) {
    struct Node *head = NULL; // Start with an empty list

    head = insertAtHead(head, 10);
    
    head = insertAtHead(head, 20);
    
    head = insertAtHead(head, 30);

    printf("Updated Linked List: ");
    printList(head);

    return 0;
}