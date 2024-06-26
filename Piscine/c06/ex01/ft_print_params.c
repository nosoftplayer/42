#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	k;
	int	i;

	i = 1;
	k = 0;
	if (argc > 0)
	{
		while (i < argc)
		{
			while (argv[i][k] != '\0')
			{
				ft_putchar(argv[i][k]);
				k++;
			}
			ft_putchar('\n');
			i++;
			k = 0;
		}
	}
	return (0);
}
