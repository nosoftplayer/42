#include <unistd.h>

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	write(1, str, a);
}

/* int main()
{
	char *str = "Hello World!";
	ft_putstr(str);
	return 0;
} */
