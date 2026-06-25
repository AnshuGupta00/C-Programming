#include<stdio.h>
#include<string.h>

#define SIZE 5
struct student{
    int rollNo;
    char name[20];
    
};
struct student table[SIZE];
void initializer(){
    for(int i=0;i<SIZE;i++){
        table[i].rollNo=-1;
    }
}
//hash function
int hashfunction(int rollNo){
    return rollNo%SIZE;

}
//insert
void insert(int rollNo,char name[]){
    int index=hashfunction(rollNo);
    table[index].rollNo=rollNo;
    strcpy(table[index].name,name);
    printf("%s  inserted at index %d\n",name,index);
}
//searching
void searching(int rollNo){
    int index=hashfunction(rollNo);
    if(table[index].rollNo==rollNo){
        printf("student found");
        printf("roll No found :%d",rollNo);
        printf("Name found :%s",table[index].name);
        
    }else{
        printf("student not found");
    }
}

int main(){
    initializer();
    insert(101,"Anshu");
      insert(102,"khushi");
        insert(103,"KumKum");
          insert(104,"Priya");
}