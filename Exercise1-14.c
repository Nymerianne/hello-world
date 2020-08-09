#include <stdio.h>

/* histogram of the frequencies of different characters in input */

int main()
{
    int c, i, j;
    int chars[256];

    i = 0;
    j = 0;

    for (i = 0; i <= 255; i++) {
        chars[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        chars[c]++;
    }

    for(i = 0; i <= 255; i++) {
        if (chars[i] != 0) {
            if (i == '\n') {
                printf ("\nnl");
            }
            else if (i == ' ') {
                printf ("\nspace");
            }
            else if (i == '\t') {
                printf ("\ntab");
            }
            else {
                printf ("\n%6c", i);
            }
            for(j = 0; j < chars[i]; j++) {
                printf ("#");
            }
        }
    }

    return 0;
}
