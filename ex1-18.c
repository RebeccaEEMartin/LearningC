/*pg31 ex1-18 Write a program to remove trailing blanks and tabs from each line of input, and to delete 
entirely blank lines - assume trailing blanks and tabs are any blanks or tabs at the beginning or end
of the line
for testing purposes when printing I have implemented a function to replace all blanks with Bs*/
/*minor faults: if there is just 1 space or tab at end of line then /n happens twice.*/

#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);
void showBlanks(char line[]);

main()
{
    int len;                /*current line length*/
    char line[MAXLINE];     /*current input line*/
    while ((len = getline(line,MAXLINE)) > 0)
        if (line[0] != '\0' && line[0] != '\n') { /*if a string begins with \n or null, it is a blank line so ignore*/
            showBlanks(line);
            printf("%s", line);
        }
    return 0;
}

int getline(char s[], int lim)
{
    int c,i,j;
    
    for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    s[i] = '\n';
    ++i;
    s[i] = '\0';
    for(j=i-2;j>=0;--j)     /*j-2 to account for \n and null*/
        if (s[j] == '\t' || s[j] == ' ')
            s[j] = '\0';
        else {
            s[j+1] = '\n';
            //s[j+2] = '\0'
            break;
        }

    return i;
}

void showBlanks(char line[]){
    int j;
    for (j=0; line[j] != '\n' && line[j] != EOF; ++j)
        if (line[j]==' ' || line[j]=='\t')
            line[j]='B';
}