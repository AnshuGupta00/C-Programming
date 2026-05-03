#include <stdio.h>
void partion(A,lb,ub){
    pivot=A[lb];
    start=lb;
    end=lb;
    while (start < end)
    {
        while(A[start] <=pivot){
            start++;
        }
        while(A[end]> pivot){
            end--;
        }
    }
    if (start <end)
    {
        swap(A[start],A[end]);
    }
}
 swap (a[lb],a[end]) return;

void QuickSort(A,lb,ub){
    if (lb<ub)
    {
        loc=partion(A,lb,ub);
        QuickSort(A,lb,loc-1);
        QuickSort(A,loc+1,ub); 
    }
}


int main(){
    int arr[]={7,6,10,5,9,2,1,15,7};

    int start,end, pivot;
    return0;
}