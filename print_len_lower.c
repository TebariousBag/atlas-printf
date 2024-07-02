#include "main.h"

int print_len_lower(long n, int base)
{
	const char *digits;
	digits = "0123456789abcdef";
	int count;


	if (n < 0)
	{
		print_char('-');
		return print_len_lower(-n, base) + 1;
	}
	else if (n < base)
	{
		return print_char(digits[n]);
	}
	else
	{
		count = print_len_lower(n / base, base);
		return count + print_len_lower(n % base, base);
	}
}
