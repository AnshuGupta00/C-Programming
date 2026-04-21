#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void deleteAtPosition(struct node **head, int pos) {
    struct node *temp = *head;
    struct node *nextnode;
    int i = 1;

    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }

    // delete first node
    if (pos == 1) {
        *head = temp->next;
        free(temp);
        return;
    }

    // move to (pos-1)
    while (i < pos - 1 && temp->next != NULL) {
        temp = temp->next;
        i++;
    }

    if (temp->next == NULL) {
        printf("Invalid position\n");
        return;
    }

    nextnode = temp->next;
    temp->next = nextnode->next;
    free(nextnode);
}

int main() {
    struct node *head = NULL;

    // create list: 10 -> 20 -> 30 -> 40 ->50 -> NULL
    struct node *n1 = malloc(sizeof(struct node));
    struct node *n2 = malloc(sizeof(struct node));
    struct node *n3 = malloc(sizeof(struct node));
    struct node *n4 = malloc(sizeof(struct node));
    struct node *n5 = malloc(sizeof(struct node));
    
    
    n1->data = 10; n1->next = n2;
    n2->data = 20; n2->next = n3;
    n3->data = 30; n3->next = n4;
    n4->data = 40; n4->next = n5;
    n5->data = 50; n5->next = NULL;

    head = n1;

    int pos;
    printf("Enter position to delete: ");
    scanf("%d", &pos);

    deleteAtPosition(&head, pos);

    // display
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}