#include <unistd.h>

typedef unsigned char byte_t;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// convert byte in hexa
void	byteInHex(byte_t Byte)
{
	int	_4_upper_bits;
	int	_4_lower_bits;
	
	_4_upper_bits = (Byte & 0b11110000) >> 4;
	if(_4_upper_bits > 9)
		ft_putchar(_4_upper_bits + 87);
	else
		ft_putchar(_4_upper_bits + 48);
	_4_lower_bits = Byte & 0b00001111;
	if (_4_lower_bits > 9)
		ft_putchar(_4_lower_bits + 87);
	else
		ft_putchar(_4_lower_bits + 48);			
}

// 1) Print the address in Hexa
void	printAddressHex(void *addr)
{
	byte_t	*ptrByte;
	int	littleEnd;
	
	littleEnd = 7;
	
	ptrByte = (byte_t *) &addr;
	while (littleEnd >= 0)
	{
		byteInHex(*(ptrByte + littleEnd));
		--littleEnd;
	}
	ft_putchar(':');
}


// 2) Print the content in hex
void	printContentHex(void *str, unsigned int size)
{
	int 	i;
	short	limit;
	
	i = 0;
	limit = 16;
	while (--size && limit--)
	{
		if(!(i % 2))
			write(1, " ", 1);
		byteInHex(*((byte_t *)str));
		++str;
		++i;		
	}
	//padding
	if ( i % 2)
		write(1, "  ", 2);
	else	
		write(1, " ", 1);	
}
// 3) Print the string itself with dots if non printable
void	printContentDot(void *str, unsigned int size)
{
	short limit;
	
	limit = 16;
	while(--size && limit--)
	{
		if(*(char *)str >= 32 && *(char *)str < 127)
			write(1, str, 1);
		else
			write(1, ".", 1);
		++str;		
	}
	write(1, "\n", 1);
}

//  main function all together. 
void	*ft_print_memory(void *addr, unsigned int size)
{
	if (size == 1)
		return(addr);
	// Divide and Conquer
	// 1) Print the address in hexadecimal
	printAddressHex(addr);

	// 2) Print the content in hexa
	printContentHex(addr, size);

	// 3) Print the string, dots if non-printable
	printContentDot(addr, size);

	return(addr);
}

int main()
{
   //char str[] = "Bonjour les aminches\t\n\tc  est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n "; 
    
    char str[] = "u\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n ";
    ft_print_memory(str, sizeof(str));
    return 0;
}

