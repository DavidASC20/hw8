#include <stdio.h>
#include <stdlib.h>
#include "string.h"
int mystrlen(char *s){
  int count = 0;
  while(*s){
    count ++;
    s++;
  }
  return count;
}

char *mystrncopy(char *dest, char *source, int n){
  char *val = dest;
  int x;
  for(x = 0; x < n; x++){
    dest[x] = source[x];
  }
  return val;
}

int main(){
  char s[12] = "Hello World";
  char dest[12];
  printf("%i\n", mystrlen(s));
  printf("%s\n", mystrncopy(s, dest, 12));
}



