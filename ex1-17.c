/* pg 31 ex1-17: Write a program to print all input lines that are longer than 80 characters. */
/* I'm not best pleased that the program prints the line straight away if it's over 80 chars instead
of at the end but upon inspecting other solutions online it seems this is the correct way, and to have
it print at the end would involve 2-d arrays or something probably */

#include <stdio.h>
#define MAXLINE 1000        /* maximum input line size */

int getline(char line[], int maxline);

main()
{
    int len;                /*current line length*/
    char line[MAXLINE];     /*current input line*/
    while ((len = getline(line,MAXLINE)) > 0)
        if (len>80)
            printf("%s", line);
    return 0;
}

int getline(char s[], int lim)
{
    int c,i;
    
    for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c=='\n'){
        s[i]=c;
        ++i;
    }
    s[i] = '\0';
    return i;
}