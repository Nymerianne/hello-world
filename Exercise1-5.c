 #include <stdio.h>

 /* print Fahrenheit-Celsius table --> FOR VERSION
     for fahr = 300, 280, ..., 0; floating-point with heading reverse version */

main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;   /* lower limit of temperature table */
  upper = 300; /* upper limit */
  step = 20;   /* step size */

  printf("Fahrenheit-Celsius table --> floating-point version\n");

  for (fahr = upper; fahr >= lower; fahr -= step) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
  }
}
