#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(1, argv[0], 7);
		write(1, "\n", 1);
	}
	return (0);
}
