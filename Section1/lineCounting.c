#include <stdio.h>

/* count lines in input */
main()
{
    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);
}

/* NOTE: a line that consists only of EOF does not count */
/* A character between single quotes represents and integer value
   equal to the numerical value of the character in the machine's
   character set. This is called a character constant.
   i.e. 'A' is equivelant to 65 - it's ASCII value
*/
