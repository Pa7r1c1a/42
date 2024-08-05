int	ft_atoi(char *str)
{
	int	i;
	int 	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign *= -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return(sign * result);

}
/*
#include <stdio.h>

int	main(void)
{
	char *nb_str1 = "123";
	char *nb_str2 = "---+--+1234ab567";
	char *nb_str3 = "  	-+-+58398abi98";
	
	printf("String: %s, atoi value: %d\n", nb_str1, ft_atoi(nb_str1));
	printf("String: %s, atoi value: %d\n", nb_str2, ft_atoi(nb_str2));
	printf("String: %s, atoi value: %d\n", nb_str3, ft_atoi(nb_str3));

	return (0);
}
*/
