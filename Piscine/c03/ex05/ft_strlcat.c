// #include <stdio.h>
// #include <string.h>
int	src_length(char *src, int i)
{
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	dest_length(char *dest, int k)
{
	while (dest[k] != '\0')
	{
		k++;
	}
	return (k);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	k = 0;
	j = 0;
	i = src_length(src, i);
	k = dest_length(dest, k);
	if (i >= size)
		return (k + i);
	while (src[j] != '\0' && i < size)
	{
		dest[k] = src[j];
		k++;
		j++;
	}
	return (k + i);
}
/*
int main()
{
	char dest[13] = "Hello";
	char src[] = " ,world!";
	unsigned int size = sizeof(dest) / sizeof(dest[0]);
	printf("my function d = %d\n", ft_strlcat(dest, src, size));
	size_t result = strlcat(dest, src, size);
	printf("strlcat d = %zu\n", result);
	printf("%s\n", dest);
} */
