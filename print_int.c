#include "main.h"

int print_int(int num)
{
	const char digits[] = "0123456789";

	if (num < 0)
	{
		print_char('-');
		num = -num;
	}
	if (num > 0)
	{
		print_int(num / 10);
		print_char(digits[num % 10]);
	}
	return (0);
}
