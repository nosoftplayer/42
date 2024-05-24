// #include <stdio.h>

int	ft_str_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
	printf("%d\n", ft_str_numeric("0123456789"));
	printf("%d\n", ft_str_numeric("01a2 3 %4 -56789"));
} */
