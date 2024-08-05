int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}
/*
#include <stdio.h>
int	main(void)
{
	char 	*str;
	str = "Coucou";
	printf("string: '%s'\nlenght: %d\n", str, ft_strlen(str));
	return(0);
}
*/
