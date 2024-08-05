#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return(0);
	}
	tab = malloc(sizeof(int) * (max - min));
	if (range == NULL)
		return(-1);
	while(min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return(i);
}
/*
#include <stdio.h>

int	main(int argc,char *argv[])
{
	int	i;
	int	min;
	int	max;
	int	*tab;
	int	range_len;
	
	i = 0;
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	
	range_len = ft_ultimate_range(&tab, min, max);
	if(argc == 3)
	{
		printf("Range size: %d\n", range_len);
   		printf("Range: ");
    		while (i < range_len) 
    		{
        		printf("%d ", tab[i]);
        		i++;
    		}
    	}
	printf("\n");
    	free(tab);
    	
	return(0);
}
*/
