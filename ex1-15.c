/*pg27 ex1-15: Rewrite the temperature conversion program of
  Section 1.2 to use a function for conversion.
  Farenheit -> Celsius
*/

#include <stdio.h>

#define LOWER 0		/* lower limit of the table */
#define UPPER 300	/* upper limit */
#define STEP 20		/* step size */

double fahrToCels(int m);

main()
{
    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f \n", fahr, fahrToCels(fahr));
    return 0;
}

double fahrToCels(int fahr)
{
    return ((5.0/9.0)*(fahr-32));
}

//(5.0/9.0)*(fahr-32)