#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] == str2[i] && str1[i] != '\0')
	{
		i++;
	}
	return (str1[i] - str2[i]);
}

void	ft_swapstr(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

void	ft_swap(int a, char **b)
{
	int	k;
	int	i;
	int	comparsion;

	k = 1;
	i = 0;
	while (k < a)
	{
		i = 0;
		while (i + 1 < a)
		{
			comparsion = ft_strcmp(b[i], b[i + 1]);
			if (comparsion > 0)
			{
				ft_swapstr(&b[i], &b[i + 1]);
			}
			i++;
		}
		k++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	k;

	ft_swap(argc, argv);
	k = 1;
	while (k < argc)
	{
		i = 0;
		while (argv[k][i] != '\0')
		{
			ft_putchar(argv[k][i]);
			i++;
		}
		ft_putchar('\n');
		k++;
	}
	return (0);
}
