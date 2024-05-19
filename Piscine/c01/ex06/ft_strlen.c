// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

/* int main()
{
	char *str = "Hello World";
	printf("%d", ft_strlen(str));
	return 1;
} */
