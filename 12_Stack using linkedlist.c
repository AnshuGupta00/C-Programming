#include <stdio.h>
#include <stdlib.h>

struct node
{
 int data;
 struct node* link;
};

struct node* top=NULL;

void push(int x){
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node)); 

   newnode->data=x;
   newnode->link = top;
   top=newnode;
}

void display(){
        struct node *temp;
        temp=top;

        if(top == NULL){
            printf("The list is Empty");
        }
        else{
            while(temp != NULL){
                printf(" %d", temp->data);
                temp=temp->link;
            }
        }
}

void peak(){
    if (top==NULL){
        printf("List is Empty");
    }
    else{
        printf("%d", top->data);
    } 

}


void pop(){
    struct node *temp;
    temp=top;
    
    if (top == NULL){
        printf("List is Empty ");
    }
    else{
  printf("The pop element is %d", top->data);
  top=temp->link;
  free(temp);
}    
}

int main(){
    int choice, value;

    do{
        printf("\n1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                peak();
                break;

            case 4:
                display();
                break;

            case 5:
                exit(0);

            default:
                printf("Invalid Choice\n");
        }

    } while (choice != 5);

    return 0;
    }    
