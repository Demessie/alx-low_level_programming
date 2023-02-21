
#include <stdio.h>
/**
 * main -prints all possible combinations of single-digit numbers.
 * a - varible number.
 *
 * Return: zero
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar('0' + a);
		if (a == 9)
		{
			continue;
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
