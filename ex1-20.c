/*pg34 ex1-20: Write a program detab that replaces tabs
in the input with the proper number of blanks to space to
the next tab stop. Assume a fixed set of tab stops, say 
every n columns. Should n be a variable or a symbolic
parameter?
I think n should be a symbolic parameter if it is a
constant.*/

#include <stdio.h>
#define MAXLINE 1000 /*maximum chars in a line*/
#define N 8         /*N=4=number of blanks in a tab*/

int getline(char line[]);  /*get current line*/
int replaceTabs(char orig[], char result[]);  /*replace tabs in line*/

main()
{
    char line[MAXLINE];
    char newLine[MAXLINE];
    int numTs;
    while (getline(line) > 0){
        numTs = replaceTabs(line, newLine);
        printf("%s", newLine);
        printf("Number of tabs: %d\n",numTs);
    }
    return 0;
}

int getline(char line[])
{
    int c,i;
    
    for (i=0; i<MAXLINE-1 && (c=getchar())!=EOF && c!='\n';
    ++i)
        line[i] = c;
    if (c=='\n'){
        line[i]=c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

int replaceTabs(char line1[], char line2[])
{
    int i,j,k,c,spaces,numTabs;
    i = 0;  //pointer for line1[]
    j = 0;  //pointer for line2[]
    k = 0;  //loop variable
    //c = current char
    //spaces = number of spaces to output
    numTabs = 0; //number of tabs in line
    
    while ((c=line1[i])!=EOF && c!='\n'){
        if (c=='\t'){
            ++numTabs;
            spaces = N-(j%N);
            for (k=0;k<spaces;++k) {
                line2[j] = ' ';
                ++j;
            }
        }
        else {
            line2[j] = c;
            ++j;
        }
        ++i;
    }
    line2[j] = '\n';
    ++j;
    line2[j] = '\0';
    return numTabs;
}