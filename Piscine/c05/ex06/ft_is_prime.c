int	ft_is_prime(int nb)
{
	int	i;

	i = 2;

	if (nb < 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main()
{
	int nb = 11;
	int i = 2;
	printf("%d\n", ft_is_prime(17));
	printf("%d\n", nb % i);
} */
