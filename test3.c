/* while loop */

/* formular oC=(5/9)(oF-32) to ptint 0 to 300 table of fahrenheir-Celsius */

#include <stdio.h>

main()
{
        float fahr, celsius;
        float lower, upper, step; /* name & list of Variables */

        lower = 0;      /* ASSIGNMENT STATEMENTS */
        upper = 500;
        step = 25;

	fahr = lower;

        while (fahr <= upper) {
                celsius = (5.0/9.0) * (fahr-32.0);
                printf("%10.0f\t%15.1f\n", fahr, celsius);
                fahr = fahr + step;
        }
}
