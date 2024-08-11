#include <unistd.h>

void nada_putchar(char c)
{
	write(1,&c,1);
}

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
				nada_putchar('-');
				if (col != 11)
					nada_putchar(' ');
				col++;
			}
			nada_putchar('\n');
		}
		col = 0;
		if (row < 10)
		{
			nada_putchar('|');
			nada_putchar(' ');
		}
		while (col < 10 && row != 10)
		{
			nada_putchar(c);
			if (col != 9)
				nada_putchar(' ');
			col++;
		}
		if (row < 10)
		{
			nada_putchar(' ');
			nada_putchar('|');
		}
		nada_putchar('\n');
		row++;
	}
	return (0);
}
