#include <stdio.h>

/* pg.20 ex1-8 - write a program to count blanks, tabs and newlines
   I think blanks means space
*/

main()
{
    int c, blankCount, tabCount, nlCount;

    blankCount = 0;
    tabCount = 0;
    nlCount = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++blankCount;
        if (c == '\t')
            ++tabCount;
        if (c == '\n')
            ++nlCount;
    }
    printf("\n");
    printf("Number of blanks: \t%d\n", blankCount);
    printf("Number of tabs: \t%d\n", tabCount);
    printf("Number of new lines: \t%d\n", nlCount);
}
