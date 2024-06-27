#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int print_char(int c)	/* this is used to print characters */
						/* it's just the same as putchar */
{
	return write(1, &c, 1);
}

int print_any(char find, va_list arglist)	/* this function is where we will
put all the case of what we need to print. Right now it just prints characters */
{
	int count;

	count = 0;

	if (find == 'c')	/* so if find finds c, which is a char, it will print the character */
		count += print_char(va_arg(arglist, int));
	return (count);
}

int printfu(const char *format, ...)	/* printfu is our printf */
{
	int count;

	va_list arglist;

	va_start(arglist, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')	/*if it finds a % symbol, it will move to the print_any function and check what comes next*/
			count += print_any(*(++format), arglist);
		else
			count += write(1, format, 1);
		++format;
	}
	return (count);
}

int main()
{
	printfu("I have to %c\n", 'P');	/* printfu "I have to P" */
}
