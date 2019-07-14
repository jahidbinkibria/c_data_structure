#include <stdio.h>
int binary_search(int A[], int n, int x){
    int left, right, mid;
    left = 0;
    right = n-1;

        while(left <= right){
            mid = left + (right-left)/2;

            if(A[mid] == x){
                return mid;
            }
            if(A[mid] < x ){
                left = mid+1;
            }else{
                right = mid-1;
            }
    }
    return -1;
}
int main(){

    int k[100],m,q;
    for( m = 0; m <=100 ; m++){
        k[m] += k[m];
    }
    for(q = 0; q<=100; q++){
        printf(k[q]);
    }
    int j = sizeof(k)/ sizeof(k[0]);
    int a = binary_search(k, j, 8);
    printf("%d\n",j);
    printf("%d\n", a);
    if(a == -1){
        printf( "Not");
    }else{
        printf("Found");
    }

    return 0;
}
