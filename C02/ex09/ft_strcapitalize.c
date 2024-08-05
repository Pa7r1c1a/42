char *ft_strcapitalize(char *str)
{
    int i = 0;
    int new_word = 1;

    while (str[i])
    {
        if (new_word && (str[i] >= 'a' && str[i] <= 'z')) 
        {
            str[i] -= 32;
            new_word = 0;
        }
        else if (!new_word && (str[i] >= 'A' && str[i] <= 'Z'))
        {
            str[i] += 32;
        }

        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))) 
        {
            new_word = 1; 
        }
        else
        {
            new_word = 0; 
        }
        
        i++;
    }

    return str;
}
/*
#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if(argc == 2)
	{
		ft_putstr(ft_strcapitalize(argv[1]));
	}
	return(0);
}
*/
