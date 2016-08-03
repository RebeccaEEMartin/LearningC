/* pg20 ex1-9 - Write a program to copy its input to its output,
                replacing each string of one or more blanks by a
                single blank.
  assume blank = space
  idea: every time a space occurs, start a nested loop to check
        for more spaces and just don't print them
*/

#include <stdio.h>

main()
{
    int c;
    while ((c = getchar()) != EOF){
        if (c == ' '){
            putchar(c);
            while ((c = getchar()) == ' ')
                ;
        }
        putchar(c);
    }
}
