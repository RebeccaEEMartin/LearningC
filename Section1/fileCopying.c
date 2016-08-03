#include <stdio.h>

/* pg 16-17 example */
/* copy input to output; 2nd version */

main()
{
    int c;

    /* NOTE: parenthesis necessary since != has higher precedence
       than =
    */
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}

/* 1st version had c != EOF as while condition and c = getchar()
   in and before loop
*/
