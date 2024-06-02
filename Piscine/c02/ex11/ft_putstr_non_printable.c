#include <unistd.h>

void	print_hexa(unsigned char c)
{
	char *hexa;

	hexa = "0123456789abcdef";
	write(1, &hexa[c / 16], 1);
	write(1, &hexa[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < ' ' || *str > '~')
		{
			write(1, "\\", 1);
			print_hexa(*str);
		}
		else
			write(1, str, 1);
		++str;
	}
}

#include <stdio.h>

int main()
{
	char string[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(string);
}
