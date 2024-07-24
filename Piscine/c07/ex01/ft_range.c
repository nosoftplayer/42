#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*array;
	int	i;

	if (min >= max)
		return (0);
	size = max - min;
	array = (int *)malloc(size * sizeof(int));
	if (array == NULL)
		return (0);
	i = 0;
	while (i < size)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
/*
#include <stdio.h>

int	main(void)
{
	int	min;
	int	max;
	int	*array;
	int	i;

	min = -8;
	max = 8;
	array = ft_range(min, max);
	i = 0;
	while (min < max)
	{
		printf("%d ", array[i]);
		i++;
		min++;
	}
	int	a;
	a = sizeof(array);
	printf("\n%d", a);
	return 0;
}*/
