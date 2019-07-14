#include<stdio.h>

int linear_search(int A[] , int n, int x){
    int i;


    for ( i = 0; i<n; i++){
        if(A[i] == x){
            return i;
        }
    }

    i = -1;
    return i;
}



int main(){

   int k[] = {4,3,5,6,7};
   int a = linear_search(k, 5, 7);

   if(a != -1){
    printf("item found");
   }else{
    printf("not found");
   }

   return 0;
}


