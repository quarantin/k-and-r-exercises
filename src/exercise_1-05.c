#include <stdio.h>

/*
 * Exercise 1-5. Modify the temperature program to print the table in
 * reverse order, that is, from 300 degrees to 0.
 */

/* print Celsius-Fahrenheit table
    for celsius = 0, 20, ..., 300; floating-point version */
main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;      /* lower limit of temperature table */
	upper = 300;    /* upper limit */
	step = 20;	/* step size */

	printf("Cels.|Fahr.\n");

	celsius = upper;
	while (celsius >= lower) {
		fahr = (9.0/5.0) * celsius + 32;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius - step;
	}
}
