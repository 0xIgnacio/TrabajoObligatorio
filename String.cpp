#include <stdio.h>
#include "string.h"

int strlar(string str) {
  int i=0, cant=0;
    do {
      cant++;
      i++;
    } while(str[i]!='\0');

  return cant;
}

void print(string str) {
  int i=0;
    while(str[i]!='\0') {
        printf("%c", str[i]);
      i++;
    }
}

void scan(string &str) {
  int i=0;
  char ch;
    fflush(stdin);
    scanf("%c", &ch);
    while(ch!='\n' && i<MAX-1) {
      str[i]=ch;
      scanf("%c", &ch);
      i++;
    }
  str[i]='\0';
}

boolean strmen(string str, string str1) {
  boolean menor=FALSE;
  int i=0;
    while(str[i]==str1[i])
      i++;
    if(str[i]<str[i])
      menor=TRUE;

  return menor;
}

boolean streq(string str, string str1) {
  boolean iguales=TRUE;
  int i=0;
    do {
        if(str[i]!=str1[i]) {
            iguales=FALSE;
        }
      i++;
    } while(iguales==TRUE && str[i]!='\0');
    do {
        if(str[i]!=str1[i]) {
            iguales=FALSE;
        }
      i++;
    } while(iguales==TRUE && str1[i]!='\0');

  return iguales;
}

void strcop(string &str, string str1) {
  int i=0;
    while(str1[i]!='\0') {
      str[i]=str1[i];
      i++;
    }
  str[i]='\0';
}

void strcon(string &str, string str1) {
  int i=0, j=0;
    while(str[i]!='\0') {
      i++;
    }
    while(str1[j]!='\0' && i<MAX-1) {
      str[i]=str1[j];
      i++;
      j++;
    }
  str[i]='\0';
}
