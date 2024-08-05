#include <stdlib.h>


char	*ft_strdup(char *src)
{
	int	i;
	int length;
	char *strcpy;

	i = 0;
	length = 0;

	while(src[length])
		length++;
	strcpy = malloc(sizeof(*strcpy) *(length + 1));
	if(strcpy != NULL)
	{
		while(src[i])
		{
			strcpy[i] = src[i];
			i++;
		}
		strcpy[i] = '\0';
	}
	return(strcpy);
}
/*
#include <string.h>
#include <stdio.h>
int	main(int argc, char *argv[])
{
	char 	*own;
	char 	*original;
	if (argc == 2)
	{
		own = ft_strdup(argv[1]);
		original = strdup(argv[1]);
		printf(":%s:\n:%s:\n", own, original);
	}
	return (0);
}
*/
