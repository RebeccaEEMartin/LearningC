/*pg65 in viewer
  pg51 ex2-9 In two's compliment number system, x&=(x-1) 
  deletes the rightmost 1-bit in x. Explain why. Use this
  observation to write a faster version of bitcount.
  
  it deletes the rightmost one because x-1 means the
  rightmost 1-bit will be deleted and if it is in position
  0, nothing else happens, so x & (x-1) will give x without
  the rightmost 1-bit, and if the bit is in position 1+, the
  bits to the right of it will all be set to 1, however since
  they are &ed with 0 bits from the original (because they 
  must have been 0 in the original for the original
  rightmost 1-bit to be the rightmost 1-bit)) they cancel,
  thus removing the rightmost 1-bit from x leaving all bits
  left of this bit unchanged.
  
  bitcount: count 1 bits in x
  int bitcount(unsigned x)
  {
      int b;
      for(b=0;x!=0;x>>=1)
          if(x&01)
              b++;
          return b;
  }
  note: x>>=1 is performing a single binary right shift
*/

#include <stdio.h>

int bitcount(unsigned x);

main()
{
    printf("%d\n",bitcount(27));
    return 0;
}

/*loop through x removing rightmost 1-bit each time
until x is 0. note this is only really faster if there
is at least one 0-bit in x, as then it requires less loops
than the original bitcount*/
int bitcount(unsigned x)
{
    int b=0;
    while(x>0){
        x&=(x-1);
        b++;
    }
    return b;
}