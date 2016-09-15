#include <stdio.h>

/*
 * Exercise 1-12. Write a program that prints its input one word per line.
 */

#define IN  1    /* inside a word */
#define OUT 0    /* outside a word */

main()
{
	char c;
	int state;

	state = OUT;
	
	while ((c = getchar()) != EOF) {

		if (c == ' ' || c == '\n' || c == '\t') {

			if (state != OUT)
				putchar('\n');

			state = OUT;
		}
		else {
			putchar(c);
			state = IN;
		}
	}
}
