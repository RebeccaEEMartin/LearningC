/*pg36 ex2-1: Write a program to determine the ranges of
char, short, int and long variables, both signed and 
unsigned, by printing appropriate values from standard
headers and by direct computation. Harder if you compute 
them: determine the ranges of the various floating point
types.*/

#include <stdio.h>
#include <limits.h>
#include <float.h>

main()
{
    printf("\t\tmin\t\t\tmax\n");
    printf("signed char\t%d\t\t\t%d\n",SCHAR_MIN,SCHAR_MAX);
    printf("unsigned char\t0\t\t\t%d\n",UCHAR_MAX);
    printf("signed short\t%d\t\t\t%d\n",SHRT_MIN,SHRT_MAX);
    printf("unsigned short\t0\t\t\t%d\n",USHRT_MAX);
    printf("signed int\t%d\t\t%d\n",INT_MIN,INT_MAX);
    printf("unsigned int\t0\t\t\t%u\n",UINT_MAX);
    printf("signed long\t%ld\t\t%ld\n",LONG_MIN,LONG_MAX);
    printf("unsigned long\t0\t\t\t%lu\n",ULONG_MAX);
    printf("float\t\t%.10e\t%.10e\n",FLT_MIN,FLT_MAX);
}

/*NOTE: %ld for a signed long, %lu for an unsigned long,
        %u for an unsigned int
*/