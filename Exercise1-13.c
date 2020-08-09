#include <stdio.h>

#define IN 1
#define OUT 0

/* print a histogram of the lengths of words in input --> horizontal */

int main()
{
    int c, i, j, state, nc, maxlen;
    int lengths[21];

    for(i = 0; i <= 20; i++) {
        lengths[i] = 0;
    }

    i = 1;
    j = 0;
    nc = 0;
    state = OUT;
    maxlen = 0;     /* maximum length of a word in input */

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                lengths[nc]++;
                if (nc > maxlen) {
                    maxlen = nc;
                }
            }
            state = OUT;
            nc = 0;
        }
        else {
            state = IN;
            nc++;
        }
    }

    for (i = 1; i <= maxlen; i++) {
        printf ("%3d", i);
        for (j = 0; j < lengths[i]; j++) {
            printf ("#");
        }
        printf ("\n");
    }

    return 0;
}
