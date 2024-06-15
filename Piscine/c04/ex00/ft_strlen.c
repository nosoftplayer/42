int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char str[] = "sd5f6h7j8yexuhqntbyfdxgqnuiymxhneb7fq6xwbghex";
	size_t result = strlen(str);
	printf("%zu\n", result);
	printf("%d\n", ft_strlen(str));
}*/
