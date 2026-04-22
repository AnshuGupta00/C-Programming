#include <stdio.h>
struct node{
    int data;
    struct node *next;
};

void length (struct node *head){
    int count=0;
    temp=head;
    
    while(temp!= Null){
        count ++;
        temp=temp->next;
    }
    printf("the length of the linked list is : %d",count);
}