/* pg31 ex1-19: Write a function reverse (s) that reverses the character string s. Use it to write a program 
that reverses its input a line at a time */

#include <stdio.h>
#define MAXLINE 1000        /* maximum input line size */

int getline(char line[], int maxline);
void reverse(char line[]);

main()
{
    int len;                /*current line length*/
    char line[MAXLINE];     /*current input line*/
    while ((len = getline(line,MAXLINE)) > 0){
        reverse(line);
        printf("%s",line);
    }
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
    }
    s[i] = '\0';
    return i;
}

void reverse(char s[]){
    int i,j,k;      /*i=loop var 1 and length, j=reverse loop var, k=loop var 2*/
    char temp[MAXLINE];
    for (i=0;s[i]!=EOF && s[i]!='\n';++i)
        temp[i] = s[i];
    j=0;
    for (k=i-1;k>=0;--k){       //k=i-1 because we were getting a freaky extra char
        if (temp[k]==EOF || temp[k]=='\n' || temp[k]=='\0')
            continue;
        s[j] = temp[k];
        ++j;
    }       
    s[j] = '\n';
    ++j;
    s[j] = '\0';
}