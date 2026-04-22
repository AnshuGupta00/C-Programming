#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void main()
{

    struct node *head= NULL, *newnode, *temp;
    newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter the data you want to insert at the end: ");
    scanf("%d", &newnode->data);

    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;

        while (temp != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }


//printing list//
temp=head;
printf("The list is: ");

while (temp != NULL){
    printf("%d ",temp->data);
    temp=temp->next;
}
printf("Null");   

}