int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while((s1[i] || s2[i]) && (i < n))
	{
		if(s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
int	main(int argc, char *argv[])
{
	int	res;
	if(argc == 4)
	{
		res = ft_strncmp(argv[1], argv[2], 6);
	}
	printf("result: %d\n", res);
	write(1, "\n", 1);
	return(0);
}
*/
