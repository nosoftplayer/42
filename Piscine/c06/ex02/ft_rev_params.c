#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	k;

	i = argc - 1;
	k = 0;
	while (i > 0)
	{
		while (argv[i][k] != '\0')
		{
			ft_putchar(argv[i][k]);
			k++;
		}
		ft_putchar('\n');
		k = 0;
		i--;
	}
	return (0);
}
