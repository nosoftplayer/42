int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 1)
	{
		i = i * nb;
		power--;
	}
	return (i);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_iterative_power(2, 3));
} */
