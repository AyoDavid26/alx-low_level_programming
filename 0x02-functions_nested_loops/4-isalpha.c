#include "main.h"
/**
 * _isalpha - Code entry.
 *
 * Description: A function that checks for alphabetic character.
 *
 * @c: The integer value it receives
 *
 * Return: 0
 */
int _isalpha(int c)
{
	char i, I;

	for (i = 'a'; i <= 'z'; i++)

	{
		for (I = 'A'; I <= 'Z'; I++)
		{
			if ((i == c) || (I == C))
			{
				return (1);
			}
		}
	}
	return (0);
}
