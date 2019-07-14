
#include<stdio.h>

void insertion_sort(int A[], int n){
    int i, j , item;

    for(i =  1; i<n; i++){
        item = A[i];
        j = i -1;


        while(j>=0 && A[j]> item){
            A[j+1] = A[j];
            j = j-1;
        }

        A[j+1] = item;
    }
}

void print_Arr(int A[], int n){
    int i;
    printf("Sorted: ");
    for(i = 0; i<n; i++){
        printf("%d ", A[i]);
    }
}


int main(){
    int Arr[] = {4,1,67,2,4,9};
    int n = sizeof(Arr)/sizeof(Arr[0]);
    insertion_sort(Arr, n);
    print_Arr(Arr,n);

    return 0;
}
