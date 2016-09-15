#include <stdio.h>

/*
 * Exercise 1-9. Write a program to copy its input to its output, replacing each
 * string of one or more blanks by a single blank.
 */

/* Returns the next char from stdin that is not a blank, or EOF */
int get_next_char()
{
	char c;

	while ((c = getchar()) != EOF) {

		if (c != ' ')
			return c;
	}

	return EOF;
}

main()
{
	char c;

	while ((c = getchar()) != EOF) {

		if (c != ' ') {
			putchar(c);
			continue;
		}

		putchar(' ');

		c = get_next_char();
		if (c == EOF)
			break;

		putchar(c); 
	}
}
