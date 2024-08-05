int	ft_str_is_printable(char *str)
{
	int 	i;

	i = 0;
	while(str[i])
	{
		if(str[i] >= 32 && str[i] <= 126)
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
		char result;

		result = '0' + ft_str_is_printable(argv[1]);
		write(1, &result, 1);
	}	
	return(0);
}
*/
