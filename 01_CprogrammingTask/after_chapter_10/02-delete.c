#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// Function to delete the tail
struct Node* deleteTail(struct Node *head) {
    // Case 1: List is Empty
    if (head == NULL) {
        printf("List is already empty.\n");
        return NULL;
    }

    // Case 2: List has only ONE node
    // We must delete the head itself
    if (head->next == NULL) {
        free(head);
        return NULL; // The list is now empty
    }

    // Case 3: General Case (More than 1 node)
    struct Node *temp = head;

    // Stop at the SECOND TO LAST node
    // We look two steps ahead: if temp->next is the last one, stop.
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    // Now 'temp' is the second-to-last node
    // 'temp->next' is the last node (to be deleted)
    free(temp->next); 
    
    // Break the link
    temp->next = NULL;

    return head;
}

// Helper: Add node to end (to build the list first)
struct Node* append(struct Node* head, int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;
    if (head == NULL) return newNode;
    struct Node* temp = head;
    while (temp->next != NULL) temp = temp->next;
    temp->next = newNode;
    return head;
}

// Helper: Print list
void printList(struct Node *head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main(void) {
    struct Node *head = NULL;

    // 1. Create a list: 10 -> 20 -> 30 -> 40 -> NULL
    head = append(head, 10);
    head = append(head, 20);
    head = append(head, 30);
    head = append(head, 40);

    printf("Original List: ");
    printList(head);

    // 2. Delete the tail (40)
    printf("Deleting Tail...\n");
    head = deleteTail(head);
    
    printf("Updated List:  ");
    printList(head);

    return 0;
}