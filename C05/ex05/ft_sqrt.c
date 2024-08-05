int	ft_sqrt(int nb)
{
	int n;

	n = 1;
	
	if(n > 0)
	{
		while(n * n <= nb && n <= 46340)
		{
			if(n * n == nb)
				return(n);
			else
				n++;	
		}
	}
	return(0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_sqrt(16));
	return(0);
}
*/
