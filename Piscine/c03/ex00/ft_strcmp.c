int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_strcmp("qwerty", "qwerty"));
	printf("%d\n", ft_strcmp("qwertyu", "qwerty"));
	printf("%d\n", ft_strcmp("qwerty", "qwertyu"));
	printf("%d\n", ft_strcmp("qwe rty ", "qwerty"));
}*/
