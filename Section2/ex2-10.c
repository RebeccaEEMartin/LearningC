/*pg66 in viewer
  pg52 ex2-10 Rewrite the function lower, which converts
  upper case letters to lowercase, with a conditional
  expression instead of if-else.
  
  int lower(int c)
  {
      if (c>='A'&&c<='Z')
          return c + 'a' - 'A';
      else
          return c;
  }
*/

#include <stdio.h>

int lower(int c);

main()
{
    printf("%c\n",lower('R'));
    return 0;
}

int lower(int c)
{
    return (c>='A'&&c<='Z')?(c+'a'-'A'):c;
}