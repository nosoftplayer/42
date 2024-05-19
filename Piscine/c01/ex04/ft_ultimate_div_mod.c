// #include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;	

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/* int main()
{
	int a, b;

	a = 10;
	b = 3;

	ft_ultimate_div_mod(&a, &b);

	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
	
} */
