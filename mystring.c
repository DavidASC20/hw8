#include <stdio.h>
#include <stdlib.h>
#include "mystring.h"

int mystrlen(char *s){
  int count = 0;                        //create counter
  while(*s){                            //while s has a new char
    count ++;                           //increase count by 1
    s++;                                //go to next value of s
  }
  return count;                         //return count
}

char * mystrncpy(char *dest, char *source, int n){
  char * val = dest;                     //make value point to dest
  int x;                                //initialize x value
  for(x = 0; x < n; x++){               // for loop, forr every value of n
    dest[x] = source[x];                // make dest[x] = source[x]
  }
  return val;                           //return value
}

char *mystrcat(char *dest, char *source){
    char *val = dest;                   // make value point to dest

    while(*dest){                       
        dest++;
    }

    while(*source){
        *dest = *source;
        source++;
        dest++;
    }
    *dest = '\0';
}


int mystrcmp(char *s1, char *s2){
    while (*s1){
        if(*s2 == '\0'){
            return 1;
        }

        if(*s1 < *s2){
            return -1;
        }
        if(*s1 > *s2){
            return 1;
        }

        s1++;
        s2++;
    }

    if(*s1 == *s2){
        return 0;
    }return -99;
}

char * mystrchr(char *s, char c){
    while(*s){
        if(*s == c){
            return s;
        }s++;
    }

    if(*(s+1) == c && c == '\0'){
        return s;
    }return NULL;
}