#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED

#include "Boolean.h"

const int MAX=80;
typedef char string[MAX];

int strlar(string str);
void print(string str);
void scan(string &str);
boolean strmen(string str, string str1);
boolean streq(string str, string str1);
void strcop(string &str, string str1);
void strcon(string &str, string str1);

#endif // STRING_H_INCLUDED
