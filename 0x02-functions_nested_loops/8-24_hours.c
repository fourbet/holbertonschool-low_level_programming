#include "holberton.h"

/**
 * jack_bauer - prints every minute of a day
 *
 * Description: 00h00 to 23h59
 *
 * Return: void
 */

void jack_bauer(void)
{
	int h1 = 48;
	int h2 = 48;
	int m1 = 48;
	int m2 = 48;

	while (h1 <= 50) /* 2 */
	{
		while (h2 <= 57) /* 9*/
		{
			while (m1 <= 53) /*5*/
			{
				while (m2 <= 57) /*9*/
				{
					_putchar(h1);
					_putchar(h2);
					_putchar(':');
					_putchar(m1);
					_putchar(m2);
					_putchar('\n');
					m2++;
				}
				m2 = 48;
				m1++;
			}
			m1 = 48;
			h2++;
			if (h1 == 50 && h2 == 52) /* stopping condition*/
				break;
		}
		h2 = 48;
		h1++;
	}
}
