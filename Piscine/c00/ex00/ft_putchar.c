#include <unistd.h>
// #include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* int main()
{	
	char c;
	c = 'g';
	ft_putchar(c);
	printf("\nProgram executed successfully!\n");
	return 0;
} */
