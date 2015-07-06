#include <stdio.h>

// a whole bunch of global variables

static int i = 1;

void lexer1() {
  printf("I'm the lexer1\n");
  printf("i = %d\n", i);
  i++;
}

void lexer2() {
  printf("I'm the lexer2\n");
  printf("i = %d\n", i);
  i+=2;
}

/*
int main() {
  lexer1();
  lexer2();
  lexer1();
  return 0;
}
*/
