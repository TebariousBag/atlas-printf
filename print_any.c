#include "main.h"

int print_any(char find, va_list arglist)	/* this function is where we will

put all the cases of what we need to print. */
{
	int count;

	count = 0;

	if (find == 'c')	/* so if find finds c, which is a char, it will print the character */
		count += print_char(va_arg(arglist, int));
	else if (find == 's')	/*finds s it prints a string */
		count += print_string(va_arg(arglist, char*));
	else if (find == 'i')
		count += print_int(va_arg(arglist, int));
	else if (find == 'd')
		count = print_len_lower((long)va_arg(arglist, int), 10);
	else if (find == 'u')
		count += print_len_lower((long)va_arg(arglist, unsigned int), 10);
	else if (find == 'x')
		count += print_len_lower((long)va_arg(arglist, unsigned int), 16);
	else if (find == 'X')
		count += print_len_upper((long)va_arg(arglist, unsigned int), 16);
	else if (find == 'o')
		count += print_len_lower((long)va_arg(arglist, unsigned int), 8);
	else if (find == '%')
		count++;
			if (find == '%')
			print_char('%');
			count++;
	return (count);
}
