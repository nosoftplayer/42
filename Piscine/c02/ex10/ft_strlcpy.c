unsigned int	ft_srcsize(char *src)
{
	int	k;

	k = 0;
	while (src[k] != '\0')
	{
		k++;
	}
	return (k);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;

	j = ft_srcsize(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (j);
}
/*
#include <stdio.h>
int main()
{
	char src[] = "Hello, world!";
	char dest[20];
	int size = 5;
	ft_strlcpy(dest, src, size);
	printf("%s", dest);
}*/
