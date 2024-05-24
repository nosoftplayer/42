// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	reverse;

	i = 0;
	while (i < size / 2)
	{
		reverse = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = reverse;
		i++;
	}
}

/* int main()
{
	int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size = sizeof(tab) / sizeof(tab[0]);
	printf("%d\n", size);
	ft_rev_int_tab(tab, size);
	return 0;
} */
