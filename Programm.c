#include <stdio.h>
float mean(int *arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+*(arr+i);
    }
    float res= (float)sum/(float)n;
    return res;
}

int main(){
    int i;
    char *std[]={"s1","s2","s3","s4","s5"};
    char *sub[]={"Maths","Science","English","Hindi","Sanskrit"};
    int marks[]={80,82,92,52,76};

for(i=0;i<5;i++){
        printf("\n%s",std[i]);
        printf(" %s: %d",sub[i],marks[i]);
    }

    printf("\nMean : %f",mean(marks,5));
    return 0;
}

// 2D Conversion

#include <stdio.h>
float mean(int *arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+*(arr+i);
    }
    float res= (float)sum/(float)n;
    return res;
}
int main(){
    int i;
    int j;
    char *std[]={"s1","s2","s3","s4","s5"};
    char *sub[]={"Maths","Science","English","Hindi","Sanskrit"};
    int marks[]={80,82,92,52,76};

    for(i=0;i<5;i++){
        printf("\n%s",std[i]);
        printf(" %s: %d",sub[i],marks[i]);
    }

    printf("\nMean : %f",mean(marks,5));
    return 0;
}