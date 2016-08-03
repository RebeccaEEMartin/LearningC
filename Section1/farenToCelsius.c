#include <stdio.h>

/* print Farenheir-Celsius table
    for fahr = 0, 20, ..., 300 */

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    printf("\tFarenheit\tCelsius\n");
    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("\t%5.0f \t\t %3.1f\n", fahr, celsius);
        /* here the first float to be printed at least 5 chars
           wide and with no decimal pt or fraction digits, the
           second float is to be at least 3 chars wide with 1
           digit after the decimal pt.
           also % is the escape char for %, that's nice.
        */
        fahr = fahr + step;
    }
}

/* note: arithmetic involving floats and ints automatically
   converts the ints to floats and perfoms the operation as
   a float operation
   i.e. 6 / 5.0 is equivelant to 6.0 / 5.0 */
