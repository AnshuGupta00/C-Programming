#include <stdio.h>

int insertAtpos(int arr[], int n);

int main() {

    int n; // n is the size of array //

    printf("Enter the Size of Array: ");
    scanf("%d", &n);

    int arr[100];  // keep extra space

    printf("Insert the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    n = insertAtpos(arr, n);

    printf("Printing all the elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


// Insert at certain Point //
int insertAtpos(int arr[], int n) {

    int position, num;

    printf("Enter the Position (1-based index): ");
    scanf("%d", &position);

    printf("Enter the Number (Value): ");
    scanf("%d", &num);

    // Shift elements to right
    for (int i = n - 1; i >= position - 1; i--) {
        arr[i + 1] = arr[i];
    }

    arr[position - 1] = num;

    return n + 1;   // size increases
}


// Insert at any Position just loop //
/*
for(int i =n-1; i<=0; i--){
    arr[i + 1]=arr[i];
}
arr[position-1]=num;
n++;
*/


// Delation Opreation //

int deleteAtpos(int arr[], int n) {
    int position;

    printf("Enter the Position to delete: ");
    scanf("%d", &position);

    // Validation
    if (position <= 0 || position > n) {
        printf("Invalid Position\n");
        return n;
    }

    // Shift left
    for (int i = position - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    return n - 1;
}