 #include <stdio.h>

 /* count blanks, tabs and newlines in input */

 int main()
 {
     int c, b, t, nl;

     b = 0;
     t = 0;     /* initialization of number of tabs, blanks and newlines to 0 */
     nl = 0;

     while ((c = getchar()) != EOF) {
         if (c == ' ') {
             ++b;
         }
         if (c == '\t') {
             ++t;
         }
         if (c == '\n') {
             ++nl;
         }
    }

    printf("The input has %d blanks, %d tabs and %d newlines\n", b, t, nl);

    return 0;
 }
