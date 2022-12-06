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
  int v[] = {1, 2, 3, 4, 5, 6, 7};
  int count = 0;
  size_t i;
  size_t n = sizeof(v) / sizeof(v[0]);
  
  do {
    for (i = 0; i < n; i++) {
      printf("%d ", v[i]);
    }
    
    printf("\n");
    count++;
  } while (next_permutation(0, n, v));
  printf("%d\n", count);
  return 0;
}