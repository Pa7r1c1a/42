#include <stdlib.h>

char 	*ft_strdup(char *src)
{
	int	i;
	int	len;
	char 	*strdup;

	i = 0;
	len = 0;
	while(src[len])
	{
		len++;
	}
	strdup = malloc(sizeof(*strdup) * (len + 1));
	if (strdup != NULL)
	{
		while(src[i])
		{
			strdup[i] = src[i];
			i++;
		}
		strdup[i] = '\0';
	}
	return(strdup);
}
/*
#include <string.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	*own;
	char	*original;
	if(argc == 2)
	{
		own = ft_strdup(argv[1]);
		original = strdup(argv[1]);
		printf("own: %s\noriginal: %s\n", own, original);
	}
	return(0);
}
*/
