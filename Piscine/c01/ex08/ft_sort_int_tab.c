// #include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	k;
	int	tmp;

	k = size;
	while (k > -1)
	{
		i = 0;
		while (i <= size)
		{
			if (tab[k] > tab[size - i - 1])
			{
				tmp = tab[size - 1 - i];
				tab[size - 1 - i] = tab[k];
				tab[k] = tmp;
			}
			i++;
		}
		k--;
	}
}

/* int main()
{
	int tab[] = {1, 4, 5, 2, 3, 8, 7, 9, 6, 0};
	int size = sizeof(tab) / sizeof(tab[0]);
	printf("%d\n", size);
	ft_sort_int_tab(tab, size);
	for(int i = 0; i < size; i++)
	{
        printf("%d ", tab[i]);
    	}
	return 0;
} */
