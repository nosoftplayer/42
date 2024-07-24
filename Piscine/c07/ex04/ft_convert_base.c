#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	if (str[i] == ' ' || str[i] >= '\t' && str[i] <= '\r')
		return	(0);
	if (str[i] == '+')
		return (0);
	if (str[i] == '-')
	{
		i++;
		if (str[i] >= '0' && str[i] <= '9')
			sign = -sign;
		if (str[i] == '-')
			return (0);
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + (str[i] - '0');
			i++;
		}
		else
			return (result * sign);
	}
	return (result * sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
}

int main()
{
	char nbr[] = "-5472bcd1234";
	int a = ft_atoi(nbr);
	// printf("%d\n", a);
}
