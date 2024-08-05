char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else
			str[i] = str[i];
		i++;
	}
	return(str);
}
/*
#include <unistd.h>
#include <stdlib.h>

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

int	main(int argc, char *argv[])
{
	if(argc == 2)
	{
		ft_putstr(ft_strupcase(argv[1]));
	}

	write(1, "\n", 1);
	return(0);
}
*/
