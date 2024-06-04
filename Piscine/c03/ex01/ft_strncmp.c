int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i <= n)
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int main()
{
	unsigned int n = 3;
	printf("%d\n", ft_strncmp("qwertyuiop", "qwerty", n));
}*/
