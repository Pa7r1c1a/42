int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return(i);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str;
	int	len;

	str = "Coucou";

	len = ft_strlen(str);

	printf("lenght = %d\n", len);

	return(0);
}
*/
