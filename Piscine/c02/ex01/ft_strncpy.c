// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
/* int	main()
{
	unsigned int	n = 5;
	char	src[] = "Hello, World";
	int	size = sizeof(src) / sizeof(src[0]);
	char	dest[size];
	ft_strncpy(dest, src, n);
	printf("%s", dest);
} */
