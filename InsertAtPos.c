#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL, *newnode, *temp;
int pos, Count = 0, i = 1;

printf("Enter the Position where you want to insert: ");
scanf("%d", &pos);

if (pos <= count)
{
    priintf("Invalid Position");
    return 0;
}
else
{
    temp = head;
    while (i < pos)
    {
        temp = temp->next;
        i++;
    }

    newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter the data you want to insert at the position: ");
    scanf("%d", &newnode->data);

    newnode->next =temp->next;
    temp->next =newnode;
    
}