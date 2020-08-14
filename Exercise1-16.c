#include <stdio.h>

/* print the length of arbitrarily long input lines, and as much as possible of the text */

int main()
{
    int len, c, nr;

    len = 1; // initialize length and number of chars for first row
    nr = 1;
    c = getchar();

    while ((c = getchar()) != EOF) {
        len++;
        if(c == '\n') {
            printf("line no %d is %d characters long\n", nr, len);
            len = 0;
            nr++;
        }
    }

    return 0;
}
