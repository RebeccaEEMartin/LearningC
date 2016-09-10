/*page 74 in viewer
  pg60 ex3-02 Write a function escape(s,t) that converts 
  characters like newline and tab into visible escape
  sequences like \n and \t as it copies the string t to s.
  Use a switch. Write a function for the other direction
  as well, converting escape sequences into the real 
  characters.
*/

#include <stdio.h>
#define MAXLINE 1000

void escape(char s[], char t[]);
void unescape(char v[], char u[]);

main()
{
    char s[MAXLINE];
    char t[MAXLINE] = {'H','e','l','l','o','\t','y','o','u'};
    char u[MAXLINE] = "hello\tworld";
    char v[MAXLINE];
    
    escape(s,t);
    printf("%s\n",s);
    unescape(v,u);
    printf("%s\n",v);
    return 0;
}

void escape(char s[], char t[])
{
    int i=0,j=0;
    while (t[i]!='\0'){
        switch (t[i]){
        case '\n':
            s[j]='\\';
            s[++j]='n';
            break;
        case '\t':
            s[j]='\\';
            s[++j]='t';
            break;
        default:
            s[j]=t[i];
            break;
        }
        j++;
        i++;
    }
    s[j]='\0';
}

void unescape(char v[], char u[])
{
    int i=0,j=0;
    while(u[i]!='\0'){
        if (u[i]=='\\'){
            switch (u[++i]){
            case 'n':
                v[j]='\n';
                break;
            case 't':
                v[j]='\t';
                break;
            case '\\':
                v[j]='\\';
                break;
            default:
                v[j]='\\';
                break;
            }
        }
        else
            v[j]=u[i];
        ++i;
        ++j;
    }
    v[j]='\0';
}