int	ft_find_text_prime(int nb)
{
	int	k;

	k = 2;
	if (nb < 1)
		return (0);
	while (k < nb)
	{
		if (nb % k == 0)
		{
			nb = ft_find_text_prime(nb + 1);
		}
		k++;
	}
	return (nb);
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_find_text_prime(84));
}
*/
