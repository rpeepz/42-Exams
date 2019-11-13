#include <unistd.h>

char	is_upper(char c){
	if (c >= 'A' && c <= 'Z')
		return (c);
	return (0);
}

char	is_lower(char c){
	if (c >= 'a' && c <= 'z')
		return (c);
	return (0);
}

void	ft_putchar(char c){
	write(1, &c, 1);
}

void	str_cap(char **av)
{
	int 	wd = 1;
	int 	i = 0;
	
	while (av[wd])
	{
		while (av[wd][i])
		{
			while (av[wd][i] == ' ' || av[wd][i] == '\t')
			{
				ft_putchar(av[wd][i]);
				i++;
				if (!av[wd][i])
					break ;
			}
			if (!av[wd][i])
				break ;
			if (is_lower(av[wd][i]))
				ft_putchar(av[wd][i] - 32);
			else
				ft_putchar(av[wd][i]);
			i++;
			while (av[wd][i] && av[wd][i] != ' ' && av[wd][i] != '\t')
			{
				if (is_upper(av[wd][i]))
					ft_putchar(av[wd][i] + 32);
				else
					ft_putchar(av[wd][i]);
				i++;
			}
			if (!av[wd][i])
				break ;
		}
		ft_putchar('\n');
		i = 0;
		wd++;
	}
}

int		main(int ac, char **av){
	if (ac < 2)
		return (write(1, "\n", 1));
	str_cap(av);
}
