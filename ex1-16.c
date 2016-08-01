/*pg30 ex1-16 - make it print the length of the max line even if the length > MAXLINE and it can't
properly print the array */

#include <stdio.h>
#define MAXLINE 10        /* maximum input line size */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
main()
{
    int len;                /*current line length*/
    int max;                /*max line length*/
    char line[MAXLINE];     /*current input line*/
    char longest[MAXLINE];  /*longest line saved here*/
    
    max = 0;
    while ((len = getline(line,MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max>0)      /*there was a line*/
        printf("%d - %s", max-1, longest);     /*print length-1 for the '\n' char*/
    return 0;
}

/*getline: read a line into s, return length*/
int getline(char s[], int lim)
{
    int c,i;
    
    for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c=='\n'){
        s[i]=c;
        ++i;
        s[i] = '\0';
    }
    else if (c!=EOF){   /*if the last char wasn't \n or EOF*/
        s[i] = '\0';    /*have to do this because if we do it after the else if then i will be too high*/
        for(i; (c=getchar())!=EOF && c!='\n'; ++i) {} /*increment i until \n or EOF*/
        i++;    /*because the i wont include the '\n' so increment here so when printing
                length-1 in main the printed value s still accurate for visible chars input*/
    }

    return i;
}

/*copy: copy 'from' into 'to'; assume to is big enough*/
void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}