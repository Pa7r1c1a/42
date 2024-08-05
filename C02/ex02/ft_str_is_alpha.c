int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if((str[i] >= 'a' && str[i] <= 'z')||(str[i] >= 'A' && str[i] <= 'Z'))
		{	
			i++;
		}
		else
			return(0);
	}
	return(1);
}
/*
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}	

int	main(int argc, char *argv[])
{
 	ft_putchar('0' + ft_str_is_alpha(argv[1]));

	return(0);
}
*/
