#include<stdio.h>

void selection_sort(int A[], int n){
    int i, j, index_min, temp;

    for(i =0; i<n-1; i++){
        index_min = i;
        for(j = i+1; j<n; j++){
            if(A[j] < A[index_min]){
                index_min = j;
            }
        }
        if(index_min != i){
           temp = A[i];
           A[i] = A[index_min];
           A[index_min] = temp;
        }
    }
}

void printArray(int arr[], int size){
    int i;
    for(i = 0; i<size; i++){
        printf("%d ", arr[i]);
    }
}


int main(void){
    int Arr[] = {11,5,2,6,9,4};
    int n = sizeof(Arr)/sizeof(Arr[0]);
    selection_sort(Arr, n);
    printf("Sorted Array: ");
    printArray(Arr,n);


    return 0;
}
