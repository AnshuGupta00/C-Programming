#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *head=NULL, *temp;
        

void reverse(){
        struct node *prenode, *currentnode, *nextnode;

        prenode=NULL;
            currentnode=nextnode=head;

            while (nextnode !=NULL)
            {
                nextnode = nextnode->next;
                currentnode->next=prenode;
                prenode=currentnode;
                currentnode=nextnode;
            }
            head=prenode;
        }
        
        void display(){
    struct node *temp = head;

    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main(){
      
        struct node*n1 =malloc(sizeof(struct node));
        struct node*n2 =malloc(sizeof(struct node));
        struct node*n3 =malloc(sizeof(struct node));


        n1->data=10; n1->next=n2;
        n2->data=20; n2->next=n3;
        n3->data=30; n3->next=NULL;
        
         head = n1;   
         
    printf("Original List:\n");
    display();

    reverse();

    printf("Reversed List:\n");
    display();

    return 0;
}