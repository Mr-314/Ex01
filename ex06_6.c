#include <stdio.h>
int main(){
  
  int A[4];
  int d;
  int count2 = 0;
  for (int l = 0; l < 5041; l ++){
    int count = 0;
    for (int i = 0; i < 7;i++){
      scanf("%d", &A[i]);
      if(A[i] == 0){
        break;
      }
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
    if(count == 6){
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