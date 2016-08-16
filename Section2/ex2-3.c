/*pg46 ex2-3: Write the function htoi(s), which converts
  a string of hexadecimal digits (including an optional 0x
  or 0X) into its equivelant integer value. The allowable
  digits are 0 through 9, a through f, and A through F.
*/

#include <stdio.h>
#define MAXLINE 20

int getline(char line[], int maxline);
int htoi(char s[]);

main()
{
    char line[MAXLINE];
    while (getline(line,MAXLINE)>0)
        printf("%d\n",htoi(line));
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

int htoi(char h[])
{
    /*note: you cant set int c = h[i] because then
    it gets the integer within the char instead of 
    the integer the char corresponds to, i.e.
    '1'=1 NOT '1' = 49 */
    int i,n;
    
    n=0;
    i=0;
    if (h[0]=='0' && (h[1]=='X' || h[1]=='x'))
        i = 2;
    
    while (h[i]!=EOF && h[i]!='\0' && h[i]!='\n'){
        if (h[i]>='0'&&h[i]<='9'){
            n=n*16+(h[i]-'0');
        }
        else if (h[i]>='a'&&h[i]<='f') {
            n=n*16+(h[i]-'a'+10);
        }
        else if (h[i]>='A'&&h[i]<='F') {
            n=n*16+(h[i]-'A'+10);
        }
        else {
            break;
        }
        ++i;
    }
    return n;
}