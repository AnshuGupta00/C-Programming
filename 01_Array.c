#include <stdio.h>
int main(){
    int n;
    
    printf("Enter the size:");
    scanf("%d",&n);
    
    int arr[n];
    
    printf("Enter the elements:");
    for(int i =0; i< n; i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Printing all the Array Element. \n ");
    for(int i =0; i<n; i++){
        printf("%d \t",arr[i]);
    }
    
    return 0;
}   