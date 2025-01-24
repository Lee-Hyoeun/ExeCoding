// 산 17년 1회, 19년 3회

#include <stdio.h>

int fn(int n){
  int a;
  if(n<1){
    return 2;
  }
  else{
    a = fn(n-1) + 1;
    print("%d", a);
    return a;
  }
}

void main(){
  fn(3);
}

// x
