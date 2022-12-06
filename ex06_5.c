#include <stdio.h>

int main(){
  int n;
  int count = 0;
  for (int i = 0;i < 5040; i++){
    scanf("%d", &n);
    if(n == 6){
      count++;
    }
  }
  printf("%d/n", count);
}