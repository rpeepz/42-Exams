#include <unistd.h>
void	rev_print(char *s)
{
	int i = 0;
	if (s)
	{
		while (s[i])
			i++;
		while (--i > -1)
			write(1, &s[i], 1);
	}
}

int		main(int ac, char **av)
{
	if (ac != 2)
		;
	else
		rev_print(av[1]);
	write(1, "\n", 1);
	return 0;
}
