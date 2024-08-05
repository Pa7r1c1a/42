char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	k;

	i = 0;
	k = 0;
	while(dest[i])
		i++;
	while(src[k] && k < nb)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return(dest);
}
/*
#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
int	main(void)
{
	char dest[100] = "Hello";
       	char src[] = " You how are you?";
	ft_putstr(ft_strncat(dest, src, 10));
	write(1, "\n", 1);
	return(0);
}
*/
