#include <unistd.h>

void	ft_putstr(char *str)
{
	int	 i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while(s1[i] || s2[i])
	{
		if(s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_swap(char *a[], char *b[])
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(int argc, char *argv[])
{
	int	i;
	int	arg_index;

	arg_index = 1;
	while(arg_index < argc - 1)
	{
		i = 1;
		while(i < argc - 1)
		{
			if(ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				ft_swap(&argv[i], &argv[i + 1]);
			}
			i++;
		}
		arg_index++;
	}
	i = 1;
	while(i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return(0);
}
