/*viewer page 72
  pg58 ex3-01 Our binary search makes two tests inside the 
  loop, when one would suffice (at the price of more tests
  outside). Write a version with only one test inside the
  loop and measure the difference in run-time.
*/

#include <stdio.h>

int binsearch(int x, int v[], int n);

main()
{
    int x=3,n=8;
    int v[8]={0,1,2,3,4,5,6,7};
    printf("%d\n",binsearch(x,v,n));
    return 0;
}

int binsearch(int x, int v[], int n)
{
    int low,high,mid;
    low = 0;
    high = n-1;
    while(low<high){
        mid = (low+high)/2;
        if (x<=v[mid])
            high = mid;
        else
            low=mid+1;
    }
    if (x==v[low])
        return low;
    else
        return -1;
}