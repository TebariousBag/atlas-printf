#include "main.h"

int _printf(const char *format, ...)	/* printf function*/
{
	int count;

	va_list arglist;	/*list holding the arguments*/

	va_start(arglist, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{	/*if it finds a % symbol, it will move to the print_any function and check what comes next*/
			count += print_any(*(++format), arglist);
		}
		else
			count += write(1, format, 1);	/*it will write 1-standard output, store in format, 1-byte*/
		++format;
		/*then move to the next*/
	}
	return (count);
}
