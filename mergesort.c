#include <stdio.h>

void merge(int arr[], int start, int mid, int end)
{

    int leftside = mid - start + 1;
    int rightside = end - mid;

    int left[leftside], right[rightside];

    // for copy into temp arrays
    for (int i = 0; i < leftside; i++)
    {
        left[i] = arr[start + i];
    }
    for (int j = 0; j < rightside; j++)
    {
        right[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = start;

    // now mergin two halves //

    while (i < leftside && j < rightside)
    {
        if (left[i] <= right[j])
        {
            arr[k++] = left[i++];
        }
        else
            arr[k++] = right[j++];
    }

    // Copy Remaining Element
    while (i < leftside)
        arr[k++] = left[i++];
    while (j < rightside)
        arr[k++] = right[j++];
}

void mergeSort(int arr[], int start, int end)
{

    if (start >= end)
        return; // ✅ base case: single element

    int mid = start + (end - start) / 2;

    mergeSort(arr, start, mid);   // ✅ sort left half
    mergeSort(arr, mid + 1, end); // ✅ sort right half
    merge(arr, start, mid, end);  // ✅ correct order
}

int main()
{
    int arr[] = {2, 3, 6, 5, 9, 7, 8};
    int length = sizeof(arr) / sizeof(arr[0]);
    int start = 0, end = length - 1;

    printf("Before Sorting");
    for (int i = 0; i < length; i++)
    {
        printf("The elements %d \n", arr[i]);
    }

    mergeSort(arr, start, end);

    printf("\n After sorthig :");

    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}