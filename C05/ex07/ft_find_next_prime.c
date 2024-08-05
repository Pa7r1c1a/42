int	ft_is_prime(int nb)
{
	int	i;
	
	i = 2;
	if(nb <= 1)
		return(0);
	while(i < nb)
	{
		if(nb % i == 0)
			return(0);
		i++;
	}
	return(1);
}

int	ft_find_next_prime(int nb)
{
	int i;
	
	i = nb;
	if(i <= 1)
		return(2);
	while(!ft_is_prime(i))
		i++;
	return(i);		
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n", "9 return 11");
  	printf("%d\n", ft_find_next_prime(9));
  	printf("%s\n", "7 return 7");
  	printf("%d\n", ft_find_next_prime(7));
  	printf("%s\n", "-42 return 2");
  	printf("%d\n", ft_find_next_prime(-42));

  	return (0);
}
*/



