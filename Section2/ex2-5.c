/*pg48ex2-5: Write the function any(s1,s2), which returns 
  the first location in the string s1 where any character 
  from the string s2 occurs, or -1 if s1 contains no 
  characters from s2. (The standard library function strpbrk 
  does the same job but returns a pointer to the location
*/

#include <stdio.h>
#define MAXLINE 100

int getline(char line[], int maxline);
int any(char s1[], char s2[]);

main()
{
    char line1[MAXLINE],line2[MAXLINE];

    printf("enter string 1: ");
    while(getline(line1,MAXLINE)>0){
        printf("enter string 2: ");
        getline(line2,MAXLINE);
        printf("The first location in string 1 that a character from string 2 appears is %d\n",any(line1,line2));
        printf("enter string 1: ");
    }
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

int any(char s1[], char s2[])
{
    int i,j,k;
    k=MAXLINE+1;
    for (i=0;s2[i]!='\0';i++){
        for (j=0;s1[j]!='\0';j++){
            if (s1[j]==s2[i] && j<k){
                k=j;
            }
        }
    }
    if (k>MAXLINE)
        k=-1;
    return k;
}