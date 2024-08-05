char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int k;

	i = 0;
	if(to_find[0] == '\0')
		return(str);
	while(str[i])
	{
		k = 0;
		while(str[i + k] && str[i + k] == to_find[k])
		{
			if(to_find[k + 1] == '\0')
				return(&str[i]);
			k++;	
		}
		i++;
	}
	return(0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str;
	char 	*to_find;
	char	*result;

	str = "coding is cool init right?";
       	to_find = "cool";
	result = ft_strstr(str, to_find);
	
	if(result != NULL)
	{
	printf("the substring '%s' was found in position %ld\n", to_find, result - str);
	}
	else
	{
		printf("substring '%s' wasn't found \n", to_find);
	}
	return(0);
}
*/
