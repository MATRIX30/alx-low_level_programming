#include "main.h"
#include <stdlib.h>
/**
* jack_bauer - clock
*/

void jack_bauer(void)
{
	int i = 48;
	int j = 48;
	int k = 48;
	int l = 48;

	while (i <= 50)
	{
		while (j <= 57)
		{
			while (k <= 53)
			{
				while (l <= 57)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
					if ((i == 50) && (j == 51) && (k == 53) && (l == 57))
					{
						exit(0);
					}
					l++;
				}
				l = 48;
				k++;
			}
			k = 48;
			j++;
		}
		j = 48;
		i++;
	}
}
