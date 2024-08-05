char	*ft_strlowcase(char *str)
{
	int	i;
	
	i = 0;
	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		else
			str[i] = str[i];
		i++;
	}
	return(str);
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

int	main(int argc, char *argv[])
{
	if(argc == 2)
	{
		ft_putstr(ft_strlowcase(argv[1]));
	}
	return(0);
}
*/
