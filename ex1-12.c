/*pg21 ex1-12: Write a program that prints its input one
  word per line */
/*insert a putchar(c) somewhere and if state=OUT print
  new line, unless state was previously out as well */
  
#include <stdio.h>

#define IN 1        /* inside a word */
#define OUT 0       /* outside a word */

main()
{
    int c, nl, nw, nc, state, prevState;
    
    state = OUT;
    prevState = IN;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t'){
            prevState = state;
            state = OUT;
        } else if (state == OUT) {
            state = IN;
        }
        if (state == OUT && prevState == IN){
            putchar('\n');
        } else if (state == IN){
            putchar(c);
        }
    }
}