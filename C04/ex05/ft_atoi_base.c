int is_whitespace(char c) 
{
    return (c >= 9 && c <= 13) || c == 32;
}

int	is_duplicate(char c, char *base)
{
	int	i;
	
	i = 0;
	while(base[i])
	{
		if(c == base[i])
			return(1); // duplicate found
		i++;	
	}
	return(0);
}

int	is_valid_base(char *base)
{
	int 	i;
	
	i = 0;
	if(!base || base[0] == '\0' || base [1] == '\0')
		return(0);
	while(base[i])
	{
		if(is_whitespace(base[i]) || is_duplicate(base[i], base + i + 1) || base[i] == '+' || base[i] == '-')
			return(0); // invalid_character_found
		i++;	
	}
	return(i); // valid base lenght
}
int return_index_ornot(char c, char *base) {
    int	index;
        
    index = 0;
   
    while (base[index]) 
    {
        if (base[index] == c)
            return (index);
        index++;
    }
    return -1;
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	len;
	int	result;
	int 	temp;
	
	i = 0;
	result = 0;
	len = is_valid_base(base);
	
	if (len >= 2)
	{
        	sign = 1;
        	while (is_whitespace(str[i]))
            		i++;
		while (str[i] == '+' || str[i] == '-')
		{
            		if (str[i] == '-')
               			sign *= -1;
            		i++;
        	}
        	temp = return_index_ornot(str[i], base);
        	while (temp != -1) 
        	{
           		result = (result * len) + temp;
            		i++;
            		temp = return_index_ornot(str[i], base);
        	}
        	 return result * sign;
        }
        
      	return(0);
}
/*
#include <stdio.h>

int main(void)
{
    // Test avec une base décimale
    printf("42 en base décimale: %d\n", ft_atoi_base("42", "0123456789"));
    // Test avec une base binaire
    printf("101010 en base binaire: %d\n", ft_atoi_base("101010", "01"));
    // Test avec une base hexadécimale
    printf("2A en base hexadécimale: %d\n", ft_atoi_base("2A", "0123456789ABCDEF"));
    // Test avec une base octale personnalisée
    printf("52 en base 'poneyvif': %d\n", ft_atoi_base("52", "poneyvif"));
    // Test avec une base invalide (contient des espaces)
    printf("Test base invalide (espaces): %d\n", ft_atoi_base("42", "012 3456789"));
    // Test avec une base invalide (taille 1)
    printf("Test base invalide (taille 1): %d\n", ft_atoi_base("42", "0"));
    // Test avec une base invalide (caractères répétés)
    printf("Test base invalide (répétition): %d\n", ft_atoi_base("42", "01234456789"));
    // Test avec une chaîne vide
    printf("Chaîne vide: %d\n", ft_atoi_base("", "0123456789"));
    
    return 0;
}
*/
