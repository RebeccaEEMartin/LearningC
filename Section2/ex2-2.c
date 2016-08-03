/*pg42 ex2-2: Write a loop equivalent to the for loop
above without using && or ||.
for(i=0; i<lim-1 && (c=getchar())!='\n' && c!=EOF; ++i)
    s[i]=c
*/

#include <stdio.h>
#define MAXLINE 1000

main()
{
    char c, line[MAXLINE];
    int i=0;
    
    while(i<MAXLINE-1){
        c=getchar();
        if (c=='\n')
            break;
        else if (c==EOF)
            break;
        else
            line[i]=c;
        ++i;
    }
    line[i]='\0';
    printf("%s",line);
    return 0;
}