#include "main.h"

int print_string(char *str)	/*prints a string*/
{
	int index = 0;

	while (str[index] != '\0')
	{
		print_char(str[index]);
		index++;
	}
	return (0);
}
