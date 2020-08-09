#include <stdio.h>

/* replace each string of one or more blanks by a single blank */

int main()
{
    int c;

    c = getchar();
    printf("\n");
    
    while(c != EOF) {
        if(c == ' ') {
            while((c = getchar()) == ' ') {
                ;
            }
            printf(" ");
        }
        if(c != ' ') {
            printf("%c", c);
        }
        c = getchar();
    }

    return 0;
}
