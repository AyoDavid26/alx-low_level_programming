#include "main.h"
/**
 * _islower - code entry point
 *
 * Description: this program checks for lower case character.
 *
 * @c: the integer value it receives
 *
 * Return: 0
 */
int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		/* refer in c*/
		if (c == i)
		{
			return (1);
		}

	}
	return (0);
}
