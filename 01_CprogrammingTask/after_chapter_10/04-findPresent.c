#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // Includes 'true' and 'false' macros

struct Node {
    int data;
    struct Node *next;
};

// Function to search for a value
// Returns 1 (true) if found, 0 (false) if not found
int search(struct Node *head, int target) {
    struct Node *temp = head;

    while (temp != NULL) {
        // Check if current node has the target value
        if (temp->data == target) {
            return 1; // Found it!
        }
        
        // Move to next node
        temp = temp->next;
    }

    return 0; // Reached end, value not found
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
    int target;

    // Create a list: 10 -> 20 -> 30 -> 40 -> NULL
    head = append(head, 10);
    head = append(head, 20);
    head = append(head, 30);
    head = append(head, 40);

    printf("Enter value to search: ");
    scanf("%d", &target);

    if (search(head, target)) {
        printf("True (Value %d is present)\n", target);
    } else {
        printf("False (Value %d is not present)\n", target);
    }

    return 0;
}