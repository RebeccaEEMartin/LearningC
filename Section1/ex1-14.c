/*pg24ex1-14: Write a program to print a histogram of the
  frequencies of differet characters in its input.
*/

#include <stdio.h>

main()
{
    printf("please enter words and finish with enter, CTRL-Z, enter\n");
	printf("note: only letters A-Z (upper & lower case) count as word characters\n");
    
    int letterData[26];
    int c, i, j, maxOccur, maxOccurCopy;
    maxOccur = 0;
    
    for (i = 0; i < 26; ++i){
        letterData[i] = 0;
    }
    
    while ((c = getchar()) != EOF) {
        if (c >= 'A' && c <= 'Z'){
            ++letterData[c-65];
        }
        else if (c >= 'a' && c <= 'z'){
            ++letterData[c-97];
        }
    }
    for(i=0;i<26;++i){
        if(letterData[i]>maxOccur)
            maxOccur=letterData[i];
    }
    
    maxOccurCopy = maxOccur;
    for (i = 0; i < maxOccurCopy; ++i){
        printf("%d\t",maxOccur);
        for (j = 0; j < 26; ++j){
            if (letterData[j]>=maxOccur)
                putchar('#');
            else
                putchar(' ');
            putchar(' ');
        }
        putchar('\n');
        --maxOccur;
    }
    putchar('\t');
    for (i=0;i<26;++i){
        putchar(i+97);
        putchar(' ');
    }
}