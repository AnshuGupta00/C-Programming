#include <stdio.h>
#define max 5;


int queue=[max];
int front =-1;
int rear =-1;

void enqueu(int x){
    if (rear == max-1){
        printf("overflow");
    }
    else if( front ==-1 && rear== -1){
        front=rear=-1;
        queue [rear]=x;
    }
    else{
        rear++;
        queue [rear]=x;
    }

}


void display(){
    if (rear == -1 && front == -1){
            printf("Underflow");
    }
    else{
        for(int i = front; i< rear+1; i++){
            printf("%d", queue[i]);
        }
    }
}