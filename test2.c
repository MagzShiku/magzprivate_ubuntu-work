/* while loop */

/* formular oC=(5/9)(oF-32) to ptint 0 to 300 table of fahrenheir-Celsius */


#include <stdio.h>

int main()
{
	int fahr, celsius;
	int lower, upper, step;	/* name & list of Variables */

	lower = 0;	/* ASSIGNMENT STATEMENTS */
	upper = 500;
	step = 25;

	fahr = lower;

	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%10d\t%15d\n", fahr, celsius);
		fahr = fahr + step;
	}
}



