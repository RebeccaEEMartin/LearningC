#include <stdio.h>

/* count characters in input; 1st version */

/*
main()
{
    long nc;

    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
}

*/

/* note to self: return is also a character you idiot */

/* ******************************************************* */

/* count characters in input; 2nd version */
main()
{
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ; /*null statement*/
    printf("%.0f\n", nc);
}

/* NOTE: printf uses %f for float AND double, and %.0f
   suppresses printing of decimal pt and fraction part
*/
