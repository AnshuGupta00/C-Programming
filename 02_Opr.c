#include <stdio.h>

int insertAtpos(int arr[], int n);

int main() {

    int n;

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