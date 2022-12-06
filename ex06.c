#include <stdio.h>
int main(){
    int A[7];
    int d;
    int count = 0;
    for (int i = 0; i < 7;i++){
        scanf("%d", &A[i]);
    }
    
    for (int j = 0; j < 7; j++){
        for (int k = j+1; k < 7; k++){
            if(A[j] > A[k]){
                d = A[j];
                A[j] = A[k];
                A[k] = d;
                count++;
            }
        }
    }
    for (int i = 0; i < 7; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
    printf("%d\n", count);
}