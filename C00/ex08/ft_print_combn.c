#include <unistd.h>

void	ft_putstr_n(char *str, int nb_digits)
{
		write(1, str, nb_digits);
		if (str[0] != '9' - nb_digits + 1)
			write(1, ", ", 2);
}

void	i_love_recursive_too(char *str, int nb_digits, int current_pos)
{
	if (current_pos == nb_digits)
	{
		ft_putstr_n(str, nb_digits);
		return;
	}
	
	if (current_pos == 0)
		str[current_pos] = '0';
	else
		str[current_pos] = str[current_pos - 1] + 1;
		
	while (str[current_pos] <= '9')
	{
		i_love_recursive_too(str, nb_digits, current_pos + 1);
		str[current_pos]++;
	}	
}

void	ft_print_combn(int n)
{
	char str[10];
	
	if(n > 0 && n < 10)
		i_love_recursive_too(str, n, 0);
}
/*
int main(void)
{
	ft_print_combn(2);
	return(0);
}
*/
