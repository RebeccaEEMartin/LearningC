#include <stdio.h>

/* pg14 ex 1-5
   prints values in Farenheit with their corresponding
   Celsius value in order 300, 280, 260, ..., 0 */

main()
{
    int fahr;
    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%3d %6.1f \n", fahr, (5.0/9.0)*(fahr-32));
}
