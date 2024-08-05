void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tempa;
	int	tempb;

	tempa = *a;
	tempb = *b;

	*a = tempa / tempb;
	*b = tempa % tempb;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 2;

	ft_ultimate_div_mod(&a, &b);

	printf("a = %d\nb = %d\n", a, b);
	
	return(0);
}
*/
