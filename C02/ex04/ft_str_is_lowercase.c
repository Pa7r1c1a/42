int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return(0);
	}
	return(1);
}
/*
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	if(argc == 2)
	{
		char	result;

		result = '0' + ft_str_is_lowercase(argv[1]);
		write(1, &result, 1);
	}
	return(0);
}
*/
