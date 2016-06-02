#include <stdio.h>

/* print Celsius-Farenheit table
    for celsius = -40, -20, 0, ..., 100 */

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = -40;      /* lower limit of temperature table */
    upper = 100;    /* upper limit */
    step = 20;      /* step size */

    printf("\tCelsius\t\tFarenheit\n");
    celsius = lower;
    while (celsius <= upper) {
        fahr = (9.0/5.0)*celsius + 32.0;
        printf("\t%5.0f \t\t %3.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
