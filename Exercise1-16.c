#include <stdio.h>

/* print the length of arbitrarily long input lines, and as much as possible of the text */

int main()
{
    int len, c, nr, totalchars;

    len = 1; // initialize length and number of chars for first row
    nr = 1;
    totalchars = 1; // initialize total number of chars of input text

    c = getchar();

    while ((c = getchar()) != EOF) {
        len++;
        totalchars++;
        if(c == '\n') {
            printf ("line no %d is %d characters long\n", nr, len);
            len = 0;
            nr++;
        }
    }
    printf ("The input text has %d characters in total", totalchars);
    return 0;
}
