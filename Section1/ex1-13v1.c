/*pg24 ex1-13: Write a program to print a histogram of the
  lengths of words in its input. It is easy to draw the
  histogram with the bars horizontal; a vertical orientation
  is more challenging.
*/

/*assume input = 1 line & enter
  assume word lengths <=15
  assume words per line <=10
*/
  
#include <stdio.h>

#define IN 1        /* inside a word */
#define OUT 0       /* outside a word */

main()
{
	printf("please enter max 20 words and finish with enter, CTRL-Z, enter\n");
	printf("note: only letters A-Z (upper & lower case) count as word characters\n");

    int state, word, length, c, i, j;
    int wordData[20];
    word = length = 0;
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
			length = 0;
		}
		else if (state == IN && ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))) {
			++length;
		}
	}
    //print histogram
    for (i = 0; i < word; ++i){
        for (j = 0; j < wordData[i]; ++j){
            putchar('*');
        }
        putchar('\n');
    }
}