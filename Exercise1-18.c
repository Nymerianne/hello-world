#include <stdio.h>

#define MAXLINE 1000

/* remove trailing blanks and tabs from each line of input, and delete entirely blank lines */

int inputVerification (int c, int i, int *blanksHistory, int *newlineHistory);

int main() {

    int blanks;
    int nl;
    int c;
    int i;
    int j;
    char line[MAXLINE];

    blanks = 0;
    nl = 0;
    j = 0;

    for (i = 0; (c = getchar()) != EOF; ++i) {

        if (inputVerification(c, i, &blanks, &nl)) {

            line[j] = c;
            j++;
            
        }

    }

    line[j] = '\0';

    printf("\n%s", line);

    return 0;
}

int inputVerification (int c, int i, int *blanksHistory, int *newlineHistory) {

    if (c == '\t') {

        return 0;

    }

    if (c == ' ') {

        if (*blanksHistory == 0) {
            *blanksHistory = 1;
            return 1;
        }

        return 0;

    }

    if (c == '\n') {

        if (*newlineHistory == 0) {
            *newlineHistory = 1;
            return 1;
        }

        return 0;

    }

    *blanksHistory = 0;
    *newlineHistory = 0;

    return 1;
}
