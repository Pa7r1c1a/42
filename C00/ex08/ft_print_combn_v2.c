#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_combn_recursive(int *range, int n, int current_index)
{
	int i;

	i = (current_index == 0 ? 0 : range[current_index -1] + 1);
	while(i <= 9)
	{
		range[current_index] = i;
		if (current_index == n -1)
		{
			int digit_index = 0;
			while (digit_index < n)
			{
				ft_putchar(range[digit_index] + 48);
				digit_index++;
			}
			if (range[0] < 10 -n)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}

		}
		else
		{
			print_combn_recursive(range, n, current_index + 1);
		}
		i++;
	}
}

void	ft_print_combn(int n)
{	
	if(n <= 0 || n >= 10)
		return;
	int range[10];
	print_combn_recursive(range, n, 0);
}
/*
int	main(void)
{
	ft_print_combn(2);
	return(0);
}
*/
