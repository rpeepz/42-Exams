#include <unistd.h>
int		ft_strlen(char *s)
{
	int i = 0;
	if (s)
	{
		while (s[i])
			i++;
	}
	return (i);
}
int		main (int ac, char **av)
{
	if (ac < 2)
		;
	else
	{
		int i = ft_strlen(av[ac - 1]);
		write(1, av[ac - 1], i);
	}
	write(1, "\n", 1);
	return 0;
}
