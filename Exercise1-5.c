#include <stdio.h>

#define LOWER 0    /* lower limit of temperature table */
#define UPPER 300  /* upper limit */
#define STEP 20    /* step size */

/* print Fahrenheit-Celsius table --> FOR VERSION
     for fahr = 300, 280, ..., 0; floating-point with heading reverse version */

int main()
{
    float fahr, celsius;

    printf("Fahrenheit-Celsius table --> floating-point version\n");

    for (fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
    }

    return 0;
}
