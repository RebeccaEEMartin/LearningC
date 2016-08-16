/*pg49ex2-6: Write a function setbits(x,p,n,y) that returns 
  x with the n bits that begin at position p set to the 
  rightmost n bits of y, leaving the other bits unchanged.
*/
#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

main()
{
    printf("%u\n",setbits(54,4,3,32));
    return 0;
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    //set n bits at pos p in x to 0
    //xxxxxxxx -> xxx000xx
    unsigned a = x&~(~(~0U<<n)<<(p+1-n));
    
    //set all bits except rightmost n in y to 0 and shift
    //left by p
    //yyyyyyyy -> 000yyy00
    unsigned b = y&(~(~0U<<n)<<(p+1-n));
    
    //set on all bits in a that are on in b
    //a|b = xxxyyyxx
    
    return a|b;
}