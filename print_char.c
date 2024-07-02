#include "main.h"

int print_char(int c)	/* this is used to print characters */

						/* it's just the same as putchar */
{
	return write(1, &c, 1);
}
