#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
int main()
{
	int x, y;
	x = 0;
	y = 1;
	
	printf("Before x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("After x = %d, y = %d\n", x, y);
	return 0;
} */
