int	ft_sqrt(int nb)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (k != nb)
	{
		if (k > nb)
		{
			return (0);
		}
		i++;
		k = i * i;
	}
	return (i);
}

/* int main(void)
{
	printf("%d\n", ft_sqrt(625));
} */
