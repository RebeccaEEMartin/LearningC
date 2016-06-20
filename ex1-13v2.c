/*pg24 ex1-13: Write a program to print a histogram of the
  lengths of words in its input. It is easy to draw the
  histogram with the bars horizontal; a vertical orientation
  is more challenging.
*/

#include <stdio.h>

#define IN 1        /* inside a word */
#define OUT 0       /* outside a word */

main()
{
	printf("please enter max 20 words and finish with enter, CTRL-Z, enter\n");
	printf("note: only letters A-Z (upper & lower case) count as word characters\n");

    int state, word, length, c, i, j, maxLen, maxLenCopy;
    int wordData[20];
    word = length = maxLen = 0;
	state = OUT;

	while ((c = getchar()) != EOF && word <20) {
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
		}
		else if (state == OUT) {
			state = IN;
		}
		if (state == OUT) {
			wordData[word] = length;
			++word;
            if (length > maxLen)
                maxLen = length;
			length = 0;
		}
		else if (state == IN && ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))) {
			++length;
		}
	}
    
    maxLenCopy = maxLen;
    for (i = 0; i < maxLenCopy; ++i){
        for (j = 0; j < word; ++j){
            if (wordData[j] >= maxLen)
                putchar('*');
            else
                putchar(' ');
            putchar(' ');
        }
        putchar('\n');
        --maxLen;
    }
    
}