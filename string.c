#include <stdio.h>
#include <stdlib.h>
#include "string.h"
int mystrlen(char *s){
  int x = 0;
  int count = 0;
  while(s[x] != 0){
    count ++;
    x++;
  }
  return count;
}

char *mystrcopy(char *dest, char *source){
  int x = 0;
  while(source[x] != 0){
    dest[x] = source[x];
    x++;
  }source[x] = 0;
  return dest;
}

int main(){
  char s[12] = "Hello World";
  char dest[12];
  printf("%i\n", mystrlen(s));
  printf("%s\n", mystrcopy(s, dest));
}



