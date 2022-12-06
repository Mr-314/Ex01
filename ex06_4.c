#include <stdio.h>
int main(){
  
  int A[4];
  int d;
  int count2 = 0;
  for (int l = 0; l < 25; l ++){
    int count = 0;
    for (int i = 0; i < 4;i++){
      scanf("%d", &A[i]);
      if(A[i] == 0){
        break;
      }
    }
    
    for (int j = 0; j < 4; j++){
      for (int k = j+1; k < 4; k++){
        if(A[j] > A[k]){
          d = A[j];
          A[j] = A[k];
          A[k] = d;
          count++;
        }
      }
    }
    if(count == 2){
      count2++;
    }
    //printf("%d\n", count);
    /*for (int i = 0; i < 4; i++){
    //printf("%d ", A[i]);
    printf("\n");
    
  }*/
  }
  printf("%d\n", count2);
}