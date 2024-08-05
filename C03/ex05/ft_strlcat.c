unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	k;
	
	i = 0;
	k = 0;
	while(dest[i] && i < size)
		i++;
	while(src[k] && (i + k + 1) < size)
	{
		dest[i + k] = src[k];
		k++;
	}
	dest[i + k] = '\0';
	return(i + k);
}

/*
#include <stdio.h>

int main(void)
{
 	char dest[20] = "Hello oooo ";
	char src[] = "World!";

	unsigned int result = ft_strlcat(dest, src, 13);


	printf("Result: %s\n", dest);
	printf("Total length: %u\n", result);
	return (0);
}
*/
