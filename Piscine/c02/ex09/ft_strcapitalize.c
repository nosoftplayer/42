char	*ft_strlowercase(char *str, int i)
{
	if (str[i] >= 97 && str[i] <= 122)
	{
		i--;
		if (str[i] >= 97 && str[i] <= 122)
		{
			i++;
		}
		else if (str[i] >= 65 && str[i] <= 90)
		{
			i++;
		}
		else if (str[i] >= 48 && str[i] <= 57)
		{
			i++;
		}
		else
		{
			i++;
			str[i] = str[i] - 32;
		}
		i++;
	}
}

char	*ft_struppercase(char *str, int i)
{
	if (str[i] >= 65 && str[i] <= 90)
	{
		i--;
		if (str[i] >= 65 && str[i] <= 90)
		{
			i++;
			str[i] = str[i] + 32;
		}
		else if (str[i] >= 97 && str[i] <= 122)
		{
			i++;
			str[i] = str[i] + 32;
		}
		else if (str[i] >= 48 && str[i] <= 57)
		{
			i++;
			str[i] = str[i] + 32;
		}
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] = str[0] - 32;
		i++;
	}
	while (str[i] != '\0')
	{
		ft_strlowercase(str, i);
		ft_struppercase(str, i);
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char str[] = "salut, coMMeNt tu CAS ? 42MOtS quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
} */
