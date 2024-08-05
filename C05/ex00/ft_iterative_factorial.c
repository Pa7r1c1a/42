int	ft_iterative_factorial(int nb)
{
	int	i;
	int 	fact;

	i = 1;
	fact = 1;
	if (nb < 0)
		return(0);
	while(i <= nb)
	{
		fact *= i;
		i++;
	}
	return(fact);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(7));
	// 1 * 2 * 3 * 4 * 5 * 6 * 7 = 5040

	return(0);
}
*/
