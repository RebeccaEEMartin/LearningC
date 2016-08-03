/*pg32 example for external variables*/

#include <stdio.h>

#define MAXLINE 1000    /*maximum input line size*/

int max;                /*current maximum length*/
char line[MAXLINE];     /*current input line*/
char longest[MAXLINE];  /*current longest line*/

int getline(void);
void copy(void);

/*print longest input line; specialised version*/
main()
{
    int len;
    extern int max;
    extern char longest[];
    
    max = 0
    while((len = getline()) > 0)
        if (len > max) {
            max = len;
            copy();
        }
    if (max > 0)        /*there was a line*/
        printf("%s", longest);
    return 0;
}


/*getline: specialised version*/
int getline(void)
{
    int c, i;
    extern char line[];
    
    for (i = 0; i < MAXLINE-1
        && (c=getchar())!=EOF && c!='\n'; ++i)
        line[i] = c;
    if (c=='\n'){
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}


/*copy: specialised version*/
void copy(void)
{
    int i;
    extern char line[], longest[];
    
    i = 0;
    while ((longest[i] = line[i]) != '\0')
        ++i;
}