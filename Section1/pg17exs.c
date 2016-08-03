#include <stdio.h>

/* pg17 ex1-6 - verify getchar() != EOF is 0 or 1 
   not too sure how to supply the program with the EOF
   value but I'll assume it would give 0 as output 

   pg17 ex1-7 - print value of EOF */

main()
{
    int c;
    c = getchar() != EOF;
    printf("%d \n", c);
    printf("EOF: %d \n", EOF);
}
