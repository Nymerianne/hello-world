#include <stdio.h>
#define MAXLINE 1000

/*  write a function reverse(s) that reverses the character string s. Use it to write a program that reverses its input a line at a time */

void reverse (char s[], int *inInput);

int main() {

  char line[MAXLINE];
  int inInput;

  inInput = 1;

  while (inInput) {

    reverse (line, &inInput);

  }

  return 0;

}

void reverse (char s[], int *inInput) {

  int c, i, j;

  for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {

    s[i] = c;

  }

  if (c == '\n') {

    s[i] = c;
    ++i;

  }

  s[i] = '\0';

  if (i > 0) {

    for (j = i; j >= 0; --j) {

      printf ("%c", s[j]);

    }

    printf("\n");

  }

  else {

    *inInput = 1;

  }

}
