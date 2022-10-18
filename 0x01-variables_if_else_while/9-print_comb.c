#include <stdio.h>
/**
 * main-progran entry point.
 * Return:0 no errors, non zero if errors
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++);
	{
		putchar(num);
		if (num == '9')
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
