int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb > 1)
	{
		i = ft_recursive_factorial(nb - 1) * nb;
		nb--;
	}
	return (i);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_recursive_factorial(10));
} */
