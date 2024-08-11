#include <stdio.h>

int main(void)
{
	char c ='o';
	int row;
	int col;

	row = 0;
	while (row <= 10)
	{
		col = 0;
		if (row == 0 || row == 10)
		{
			while(col <= 11)
			{
				putchar('-');
				if (col != 11)
					putchar(' ');
				col++;
			}
			putchar('\n');
		}
		col = 0;
		if (row < 10)
		{
			putchar('|');
			putchar(' ');
		}
		while (col < 10 && row != 10)
		{
			putchar(c);
			if (col != 9)
				putchar(' ');
			col++;
		}
		if (row < 10)
		{
			putchar(' ');
			putchar('|');
		}
		putchar('\n');
		row++;
	}
	return (0);
}
