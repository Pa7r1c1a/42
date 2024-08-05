void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp_swap;
	int	start;
	int	end;

	start = 0;
	end = size - 1;
	while(start < end)
	{
		tmp_swap = tab[start];
		tab[start] = tab[end];
		tab[end] = tmp_swap;
		start++;
		end--;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;
	int	tab[7];
	int	size;

	i = 0;
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 5;
	tab[5] = 6;
	tab[6] = 7;
	size = 7;

	ft_rev_int_tab(tab, size);
	
	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}	
	printf("\n");
	return(0);
}
*/
