#include <stdio.h>
#include <stdlib.h>

#define MAX 5
int stack[MAX];
int top=-1;


void push(){
        int data;
        printf("Enter the data");
        scanf("%d" ,&data);
        
        if (top == MAX-1)
        {
            printf("Stack Overflow");
        }
        else{
            top++;
            stack[top]=data;
        }

}
void display(){
    int i;
    for(i=top; i>=0; i--){          
        printf(" The element of stack %d \n", stack[i]);
    }
}

void pop(){
  int item;
  
  if (top == -1){
      printf("underflow \n");
  }
  else{
      item=stack[top];
      top--;
      printf("The pop element is : %d \n", item);
  }
}

void peak(){
    if (top==-1){
        printf("Stack is empty");
    }
    else{
        printf("The top element of stack is :%d \n",stack[top]);
    }
}


int main (){
    int choice, value;

    do{
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peak (Only top element)\n");
        printf("4. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    
        switch(choice){
        case 1: push();
        break;
        case 2: pop();
        break;
        case 3: peak();
        break;
        case 4: display();
        break;
        case 5:exit(0);
        break;
        
    default:
    printf("Invalid Choice");
        break;
    
        }
    }
    while (choice !=5);
   return 0; 
}