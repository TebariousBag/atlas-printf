#include "main.h"

unsigned int print_hex(unsigned int num)
{
	const char digits[] = "0123456789abcdefABCDEF";

	unsigned int temp;

	temp = num;
	unsigned int remainder;

	while (num != 0)
	while (temp > 0)
	{
		remainder = (num & 0x0000FFFF) >> 16;
		remainder = temp % 16;
		print_char(digits[remainder]);
		num >>= 8;
		temp /= 16;
	}
	return (0);
}
