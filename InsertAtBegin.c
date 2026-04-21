#include <stdio.h>
#include <stdlib.h>


struct node{
    int data;
    struct node *next;
};


int main(){
struct node *head=NULL,*newnode;

newnode =(struct node*) malloc(sizeof(struct node)); 

printf("Enter the data waht you want to insert at the begining: ");
scanf("%d",&newnode->data);

newnode->next=head;
head=newnode;

printf("Data at head: %d\n", head->data);

return 0;

}