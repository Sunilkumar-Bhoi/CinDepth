#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// Function to find the length
int getLength(struct Node *head) {
    int count = 0;
    struct Node *temp = head; // Use a temporary pointer to not lose the head

    // Iterate until we hit the end (NULL)
    while (temp != NULL) {
        count++;
        temp = temp->next; // Move to the next node
    }
    
    return count;
}

// Helper: Add node to build the list
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

int main(void) {
    struct Node *head = NULL;

    // Create a list: 10 -> 20 -> 30 -> 40 -> NULL
    head = append(head, 10);
    head = append(head, 20);
    head = append(head, 30);
    head = append(head, 40);

    // Call the length function
    int len = getLength(head);
    
    printf("Length of Linked List: %d\n", len);

    return 0;
}