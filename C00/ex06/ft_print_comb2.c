#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	int_to_char(int i)
{
	int	tens;
	int	ones;

	if(i <= 9)
	{
		ft_putchar('0');
		ft_putchar(i + '0');
	}
	else
	{
		tens = i / 10;
		ones = i % 10;
		ft_putchar(tens + '0');
		ft_putchar(ones + '0');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			int_to_char(a);
			ft_putchar(' ');
			int_to_char(b);
			if (a < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return(0);
}
*/
