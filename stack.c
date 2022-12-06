#include<stdio.h>
#include<stdlib.h>  //atoi関数
int main(){
  int i=0;
  char s[100];
  int x[100];

  while(scanf("%s", s)!= EOF){
    if(s[0]=='+'){
      x[i-2] = x[i-2] + x[i-1];
      i--;
    }else if(s[0]=='-'){
      x[i-2] = x[i-2] - x[i-1];
      i--;
    }else if(s[0]=='*'){
      x[i-2] = x[i-2] * x[i-1];
      i--;
    }else{
      x[i] = atoi(s);   //文字列をint型に変換
      i++;
    }
  }

  printf("%d\n",x[0]);
  return 0;
}