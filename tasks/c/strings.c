#include <stdio.h>
#include <stdlib.h>

/**
 * @brief In this file, We are gonna create our own string methods and string
 * creations We won't use getc and putc due to being unsafe
 */

typedef char *string;

string str_declare(int);
int strlen(string str) { return sizeof(str) / sizeof(char); }
void append(string *str, char letter) {
  str = realloc(str, sizeof(*str) + sizeof(char));
  (*str)[strlen(*str) - 1] = letter;
}
string operator+(string *str, char letter) {
  string str2 = malloc(sizeof(*str) + sizeof(char));
  for (int i = 0; i < strlen(str2) - 2; i++) {
    str2[i] = (*str)[i];
  }
  str2[strlen(str2) - 1] = letter;
  return str2;
}

int main() {
  //
  return 0;
}

string declare(int len) {
  string str = malloc(sizeof(char) * len);
  char str2[len];
  scanf("%s", str2);
  for (int i = 0; i < len; i++) {
    str[i] = str2[i];
  }
  return str;
}
