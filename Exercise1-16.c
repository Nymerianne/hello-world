#include <stdio.h>

#define MAXLINE 20  /* maximum input line size */

/* print the length of arbitrarily long input lines and the text */

int getlines(char line[], int maxline);
void copy(char to[], char from[]);

int main() {

    int len; // current line length
    int max; // max length seen so far
    char line[MAXLINE]; // current input line
    char longest[MAXLINE]; // longest line max part saved here

    max = 0;

    while ((len = getlines(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy (longest, line);
        }
    }

    if (max > 0) {
        printf ("The longest line has the initial part: %s\n", longest);
        printf ("The longest line has %d characters\n", max);
    }
    return 0;
}

/* getline: read a line into s, return length */
int getlines(char s[], int lim) {

    int c;
    int i;

    for (i = 0; i < lim - 1 && ((c = getchar()) != EOF) && c != '\n'; ++i) {
        s[i] = c;
    }

    if (i == lim - 1) {
        while (((c = getchar()) != EOF) && c != '\n') {
            ++i;
        }
        s[lim - 1] = '\0';
    } else if (c == '\n') {
        s[i] = c;
        ++i;
        s[i] = 0;
    }
    return i;
}

/* copy: copy 'from' into 'to' */
void copy (char to[], char from[]) {

    int i;

    i = 0;

    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}
