#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	i;

	i = 122;
	while (i >= 97)
	{
		write(1, &i, 1);
		i--;
	}
}

/* 
int main()
{
	ft_print_reverse_alphabet();
	return(0);
}
*/
