#include <stdio.h>

int main(void)
{
	char c = getchar();
	char rl = getchar();
	char ud = getchar();
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
				putchar(ud);
				if (col != 11)
					putchar(' ');
				col++;
			}
			if (row == 0)
				putchar('\n');
		}
		col = 0;
		if (row < 10)
		{
			putchar(rl);
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
			putchar(rl);
		}
		putchar('\n');
		row++;
	}
	return (0);
}
