#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

// delete first node
void deleteAtBeginning(struct node **head) {
    struct node *temp;

    if (*head == NULL) {
        printf("List does not exist\n");
        return;
    }

    temp = *head;
    *head = (*head)->next;
    free(temp);
}

int main() {
    struct node *head = NULL, *temp;

    // create list: 10 -> 20 -> 30
    struct node *n1 = malloc(sizeof(struct node));
    struct node *n2 = malloc(sizeof(struct node));
    struct node *n3 = malloc(sizeof(struct node));

    n1->data = 10; n1->next = n2;
    n2->data = 20; n2->next = n3;
    n3->data = 30; n3->next = NULL;

    head = n1;

    // delete first node
    deleteAtBeginning(&head);

    // display list
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}