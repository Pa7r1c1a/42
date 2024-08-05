#include <unistd.h>

int	check_base(char *base)
{
	int	i;

	i = 0;
	while(base[i])
	{
		if(base[i] == '+' || base[i] == '-' || base[i] == base[i + 1])
			return(0);
		i++;
	}
	if(i <= 1)
		return(0);
	return (1);
}

void	print_base_nb(int nbr, char *base, int size)
{
	char	c;
	unsigned int	number;

	if (nbr < 0)
	{
		write(1, "-", 1);
		number = nbr * (-1);
	}
	else
		number = nbr;
	if(number >= (unsigned int)size)
		print_base_nb(number / size, base, size);
	c = base[number % size];
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = 0;
	if (check_base(base) == 1)
	{
		while (base[i])
			i++;
		print_base_nb(nbr, base, i);
	}
}
/*
int     main(void)
{
    ft_putnbr_base(42, "0123456789");
    write(1, "\n", 1);
    ft_putnbr_base(-42, "01");
    write(1, "\n", 1);
    ft_putnbr_base(42, "0123456789ABCDEF");
    write(1, "\n", 1);
    ft_putnbr_base(42, "poneyvif");
    write(1, "\n", 1);
    return (0);
}
*/
