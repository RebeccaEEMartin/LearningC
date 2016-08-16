/*pg48ex2-4: Write an alternate version of squeeze(s1,s2)
  that deletes each character in s1 that matches any 
  character in the string s2.
  squeeze(s,c) removes all occurrences of the character c
  from the string s.
  
void squeeze(char s[], int c)
{
    int i,j;
    for (i=j=0;s[i]!='\0';i++)
        if (s[i]!=c)
            s[j++]=s[i];
    s[j]='\0';
}

  NOTE: x=i++; means x=i, then increment i, so i=x+1
        x=++i; means i=i+1, then x=i, so x=i=i+1
*/

#include <stdio.h>
#define MAXLINE 20

int getline(char line[], int maxline);
void squeeze(char s1[], char s2[]);

main()
{
    char line1[MAXLINE],line2[MAXLINE];
    printf("enter string 1: ");
    while(getline(line1,MAXLINE)>0){
        printf("enter string 2: ");
        getline(line2,MAXLINE);
        squeeze(line1,line2);
        printf("here is string 1 with all characters shared with string 2 removed\n");
        printf("%s\n",line1);
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

void squeeze(char s1[], char s2[])
{
    int i,j,k;
    for (i=0;s2[i]!='\0';i++){
        for (j=k=0;s1[j]!='\0';j++){
            if (s1[j]!=s2[i]){
                s1[k++]=s1[j];
            }
        }
    }
    s1[k]='\0';
}