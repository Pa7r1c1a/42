#include <stdlib.h>

int	*ft_range(int min, int max)
{
	unsigned int	i;
	int	*int_array;

	i = 0;
	if(min >= max)
		return(0);
	int_array = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		int_array[i] = min;
		min++;
		i++;
	}
	return(int_array);
}
/*
#include <stdio.h>

int main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
*/
