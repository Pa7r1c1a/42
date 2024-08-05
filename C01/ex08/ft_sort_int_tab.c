void	ft_swap(int *a, int *b)
{
	int	tmp_swap;

	tmp_swap = *a;
	*a = *b;
	*b = tmp_swap;
}
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	size = size -1;
	while(i < size)
	{
		if(tab[i] > tab[i + 1])
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
		i++;	
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;
	int	tab[5];
	int	size;

	i = 0;
	tab[0] = 9;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 6;
	tab[4] = 1;
	size = 5;

	ft_sort_int_tab(tab, size);

	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
	return(0);
}
*/
