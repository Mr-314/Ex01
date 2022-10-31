#include<stdio.h>
int main(){
    int A[100], n, d;
    int i, j, k, count = 0;
    
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        scanf("%d", &A[i]);
    }
    
    for (i = 1; i <= n; i++){
        for (j = n; j > i; j--){
            if (A[j] < A[j-1]){
                d = A[j];
                A[j] = A[j-1];
                A[j-1] = d;
                count++;
            }
        }
    }
    
    for (k = 1; k <= n; k++){
        if (k>1) printf(" ");
        printf("%d", A[k]);
    }
    printf("\n");
    printf("%d\n",count);
    
    return 0;
}
