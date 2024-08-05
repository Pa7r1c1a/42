#include <stdlib.h>

int	*ft_range(int min, int max)
{
	unsigned int i;
	int	*range;

	i = 0;
	if(min >= max)
		return(0);
	range = (int *)malloc(sizeof(int) * (max - min));
	while(min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return(range);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;
	int	min;
	int	max;
	int	*int_array;
	int	size;

	i = 0;
	min = 2;
	max = 14;
	size = max - min;
	int_array = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ", int_array[i]);
		i++;
	}
	return(0);
}
*/
