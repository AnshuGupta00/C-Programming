#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *pre;
    struct node *next;
};

struct node *head=NULL,*newnode;


void display(){
    struct node *temp = head;
  while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}




void main(){
    struct node *temp;
    int choice=1;

    while(choice != 0){
    newnode =(struct node* )malloc(sizeof(struct node));
        printf("Enter Data: ");
        scanf("%d",&newnode->data);

        newnode->pre=NULL;
        newnode->next=NULL;

        if(head == NULL){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            newnode->pre=temp;
            temp=newnode;
        }
        printf("Do you want to continue (0 or 1)?");
        scanf("%d",&choice);


    }   
    display();
}

