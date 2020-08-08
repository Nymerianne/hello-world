 #include <stdio.h>

 /* print Celsius - Fahrenheit table
      for celsius = 0, 20, ..., 300; floating-point version */

main()
{
  float celsius, fahr;
  int lower, upper, step;

  lower = 0;   /* lower limit of temperature table */
  upper = 300; /* upper limit */
  step = 20;   /* step size */

  printf("Celsius-Fahrenheit table --> floating-point version\n");

  celsius = lower;
  while (celsius <= upper) {
    fahr = celsius * (9.0 / 5.0) + 32.0;
    printf ("%3.0f %6.0f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
