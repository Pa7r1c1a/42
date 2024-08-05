#include <stdlib.h>

int ft_strlen(char *str)
{
    int len;
    
    len = 0;
    while (*str != '\0')
    {
        len++;
        str++;
    }
    return len;
}

void concatenate_strings(char **strs, char *sep, char *result, int size) 
{
    int i;
    int index;
    
    i = 0;
    index = 0;
    while (i < size && strs[i])
    {
        char *current_str = strs[i];
        while (*current_str != '\0') 
        {
            result[index++] = *current_str++;
        }
        if (i < size - 1 && sep)
        {
            char *current_sep = sep;
            while (*current_sep != '\0')
            {
                result[index++] = *current_sep++;
            }
        }
        i++;
    }
    result[index] = '\0';
}

char *ft_strjoin(int size, char **strs, char *sep) 
{
    int total_len;
    int i;
    
    i = 0;
    total_len = 0;
    
    while (i < size && strs[i]) 
    {
        total_len += ft_strlen(strs[i]);
        i++;
    }

    if (size > 0 && sep != NULL) 
    {
        total_len += ft_strlen(sep) * (size - 1);
    }

    char *result = (char *)malloc(total_len + 1);
    if (result == NULL)
        return NULL; 

    concatenate_strings(strs, sep, result, size);

    return result;
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
