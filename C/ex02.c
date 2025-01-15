#include <stdio.h>
void main(){
  char a[4][10] = {"ABCD","EFGH", "IJKL", "MNOP"};
  char *p = *a;

  int s = sizeof(p)/sizeof(p[0]);

  for(int i=0; i<s; i++){
  printf("%c", p[i]);
  }
}

