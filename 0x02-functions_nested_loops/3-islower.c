#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: the int we will use for the argument of the function
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
