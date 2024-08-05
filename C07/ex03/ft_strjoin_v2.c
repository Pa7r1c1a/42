#include <stdlib.h>

int	ft_strslen(int size, char**strs, char *sep)
{
	int	i;
	int	k;
	int	len;

	i = 0;
	len = 0;
	while (i < size && strs[i])
	{
		k = 0;
		while (strs[i][k])
		{
			k++;
			len++;
		}
		if (i != size - 1)
		{
			k = 0;
			while (sep[k++])
				len++;
		}
		i++;
	}
	return (len);
}

void ft_strscat(char **strs, char *sep, char *result, int size)
{
    int str_index;  // Index for iterating through the array of strings (strs)
    int char_index; // Index for iterating through each individual string
    int result_index; // Index for iterating through the result string

    str_index = 0;
    result_index = 0;

    while (str_index < size && strs[str_index])
    {
        char_index = 0;
        while (strs[str_index][char_index])
            result[result_index++] = strs[str_index][char_index++];

        // If not the last string and sep is not NULL
        if (str_index != size - 1 && sep)
        {
            char_index = 0;
            while (sep[char_index])
            {
                result[result_index] = sep[char_index];
                char_index++;
                result_index++;
            }
        }
        str_index++;
    }
    result[result_index] = '\0'; // Add null terminator at the end of the result string
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int	total_len;

	total_len = ft_strslen(size, strs, sep);
	tab = malloc((total_len + 1) * sizeof(char));
	if (tab)
	{
		tab[0] = '\0';
		ft_strscat(strs, sep, tab, size);
	}
	else
	{
		free(tab);
	}
	return (tab);
}
/*
#include <stdio.h>

int main()
{
    char *strs[] = {"Hello", "world", "!", NULL};
    char *sep = ", ";

    char *result = ft_strjoin(3, strs, sep); // Assuming size is 3 for this example

    printf("Concatenated string: %s\n", result);

    free(result);

    return (0);
}
*/
