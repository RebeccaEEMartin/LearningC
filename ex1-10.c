/* pg20 ex1-10 - write a program to copy its input to its output,
                 replacing each tab by \t, backspace by \b and
                 backslash by \\.
*/

#include <stdio.h>

main()
{
    int c;
    while ((c = getchar()) != EOF){
        if (c == '\t')
            printf("\\t");
        else if (c == '\b')
            printf("\\b");
        else if (c == '\\')
            printf("\\\\");
        else
            putchar(c);
    }
}

/* NOTE: backspace is consumed by the shell and the program
   will never see it. However CTRL-H works instead.
*/
