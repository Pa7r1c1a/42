void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 5;
	b = 2;

	printf("a = %d\nb = %d\n", a, b);

	ft_div_mod(a, b, &div, &mod);

	printf("div result = %d\nmod result = %d\n", div, mod);

	return(0);
}
*/
