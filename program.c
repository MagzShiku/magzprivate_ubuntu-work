#include <stdio.h>

int main()

{
	
	printf("Hello, world\n");

}


#include <stdio.h>

/* print Fahrenheit-Celsius table for far = 0, 20, ..., 300 */

int main()
{
	int far, celsius;
	int lower, upper, step;

	lower =0;	/*lower limit of temperature scale */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */

	far = lower;
	while (far <= upper) {
		celsius = 5 * (fahr-32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
}

