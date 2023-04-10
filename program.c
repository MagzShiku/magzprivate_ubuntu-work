#include <stdio.h>
#include <stdlib.h>

/* print Fahrenheit-Celsius table for far = 0, 20, ..., 300 */

int main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;	/*lower limit of temperature scale */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%10d %15d\n", fahr, celsius);
		fahr = fahr + step;
	}
}


int main1()
{ 
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 30;

	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%10.0f %15.2f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
		

char* main2()
{
	printf("hello world\n");
}



