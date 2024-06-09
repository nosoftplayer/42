char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	if (to_find[k] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while (str[i + k] == to_find[k])
		{
			if (to_find[k + 1] == '\0')
			{
				return (str + i);
			}
			k++;
		}
		k = 0;
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	char to_find[] = "";
	char str[] = "qweryqwerty";
	printf("%s", ft_strstr(str,to_find));
}*/
