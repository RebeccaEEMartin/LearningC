/*pg34 ex1-21: Write a program entab that replaces strings of
blanks by the minimum number of tabs and blanks to achieve the
same spacing. Use the same tab stops as for detab. When either
a tab or a single blank space would suffice to reach a tab stop,
which should be given preference?*/

#include <stdio.h>
#define MAXLINE 1000
#define N 8

int getline(char line[]);  /*get current line*/
void replaceBlanks(char withBs[], char withoutBs[]);

main()
{
    char line[MAXLINE];
    char newLine[MAXLINE];
    while (getline(line) > 0){
        replaceBlanks(line, newLine);
        printf("%s", newLine);
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

void replaceBlanks(char line1[], char line2[])
{
    int i,j,k,c,spaceCount,tabBool;
    i = 0;  //line1 pointer
    j = 0;  //line2 pointer
    //k = loop variable
    spaceCount = 0; //how many spaces in a row
    tabBool = 0; //=1 when tab has happened
    while ((c = line1[i])!=EOF && c!='\n'){
        while (c=' ' && c!=EOF && c!='\n'){
            if (i%N == 0){  //tab is required
                ++spaceCount;
                tabBool = 1;
                line2[j] = '\t';
                ++j;
            }
            ++i;
            c = line1[i];
        }
        if (spaceCount>0 && tabBool==0){ //not enough spaces for tab
            for (k=0;k<spaceCount;++k){
                line2[j]=' ';
                ++j;
            }
        }
        spaceCount = 0;
        tabBool = 0;
        if (c!=' ' && c!=EOF && c!='\n'){
            line2[j]=c;
            ++j;
        }
        ++i;
    }
}