#include <stdio.h>

/*
 * Exercise 1-8. Write a program to count blanks, tabs, and newlines.
 */

main()
{
	char c;
	int blanks, tabs, newlines;

	blanks = tabs = newlines = 0;

	while ((c = getchar()) != EOF) {

		switch (c) {

			case ' ':
				blanks++;
				break;

			case '\t':
				tabs++;
				break;

			case '\n':
				newlines++;
				break;
		}
	}

	printf("Blanks:   %d\n", blanks);
	printf("Tabs:     %d\n", tabs);
	printf("Newlines: %d\n", newlines);
}
