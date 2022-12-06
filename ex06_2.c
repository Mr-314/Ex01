#include <stdio.h>
#include <stdbool.h>

void swap(int *pa, int *pb)
{
  int tmp;
  
  tmp = *pa;
  *pa = *pb;
  *pb = tmp;
}

void reverse(size_t first, size_t last, int v[])
{
  while (first != last && first != --last) {
    swap(&v[first], &v[last]);
    first++;
  }
}

bool next_permutation(size_t first, size_t last, int v[])
{
  size_t i, j, k;
  
  if (first == last) {
    return false;
  }
  
  if (first + 1 == last) {
    return false;
  }
  
  i = last - 1;
  
  while (true) {
    j = i--;
    
    if (v[i] < v[j]) {
      k = last;
      
      while (!(v[i] < v[--k])) {
      }
      
      swap(&v[i], &v[k]);
      reverse(j, last, v);
      return true;
    }
    
    if (i == first) {
      reverse(first, last, v);
      return false;
    }
  }
}

int main(void)
{
  int v[] = {1, 2, 3, 4};
  int count = 0;
  size_t i;
  size_t n = sizeof(v) / sizeof(v[0]);
  
  do {
    for (i = 0; i < n; i++) {
      printf("%d ", v[i]);
    }
    
    printf("\n");
    count++;
    
    
    ////////
    /*int d;
    int count2 = 0;
    for (int j = 0; j < 4; j++){
      for (int k = j+1; k < 4; k++){
        if(v[j] > v[k]){
          d = v[j];
          v[j] = v[k];
          v[k] = d;
          count2++;
        }
      }
    }
    for (int l = 0; l < 4; l++){
      printf("%d ", v[l]);
    }
    printf("\n");
    printf("%d\n", count2);*/
    ////////
    
    
  } while (next_permutation(0, n, v));
  printf("0 0 0 0\n");
  //printf("%d\n", count);
  return 0;


////////////////////////////////////

  int A[4];
  int d;
  int count2 = 0;
  for (int i = 0; i < 4;i++){
    scanf("%d", &A[i]);
  }
  
  for (int j = 0; j < 4; j++){
    for (int k = j+1; k < 4; k++){
      if(A[j] > A[k]){
        d = A[j];
        A[j] = A[k];
        A[k] = d;
        count2++;
      }
    }
  }
  for (int i = 0; i < 4; i++){
    printf("%d ", A[i]);
  }
  printf("\n");
  printf("%d\n", count2);
}