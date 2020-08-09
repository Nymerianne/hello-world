#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/* temperature conversion Fahrenheit - Celsius using a function for conversion */

float conversion (float fahr);

int main()
{
    float i;

    for (i = LOWER; i <= UPPER; i += STEP) {
        printf ("%3.0f %6.1f\n", i, conversion(i));
    }

    return 0;
}

float conversion (float fahr) {
    float celsius = (5.0 / 9.0) * (fahr - 32.0);
    return celsius;
}
