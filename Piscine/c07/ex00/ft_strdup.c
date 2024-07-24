#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *ptr, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;

	i = ft_strlen(src);
	ptr = (char *)malloc((i + 1) * sizeof(char));
	if (ptr == NULL)
		return (0);
	ptr = ft_strcpy(ptr, src);
	return (ptr);
}
/*
#include <stdio.h>

int	main(void)
{	
	char *dup_str;
	dup_str = ft_strdup("Hello, World!");
	printf("%s\n", dup_str);
}*/
