/* pg15 example for symbolic constants
   prints values in Farenheit with their corresponding
   Celsius value in order 0,20,40,...,300
   now with #define used for constants (called symbolic constants)
*/

#include <stdio.h>

#define LOWER 0		/* lower limit of the table */
#define UPPER 300	/* upper limit */
#define STEP 20		/* step size */

/* print Fahrenheit-Celsius table */

main()
{
    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f \n", fahr, (5.0/9.0)*(fahr-32));
}
