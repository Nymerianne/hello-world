#include <stdio.h>

#define MINLINE 80 /* minimum line size for it to be printed */
#define MAXLINE 1000 /* max size input line */

int isItThatLong(char line[], int minline);

int main()
{
    int len;
    char line[MAXLINE];

    while ((len = isItThatLong(line, MAXLINE)) > 0) {
        if (len > MINLINE) {
            printf("\n %s", line);
        }
    }

    return 0;
}

int isItThatLong(char s[], int lim)
{
    int c, i;

    for (i = 0; ((c = getchar()) != EOF) && c != '\n'; ++i) {
        s[i] = c;
    }

    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';

    return i;
}
