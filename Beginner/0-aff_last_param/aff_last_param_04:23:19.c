#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	int		param_num;
	int		i;

	param_num = 0;
	i = param_num;
	if (ac >= 2)
	{
		while (av[param_num])
			param_num++;
		param_num -= 1;
		while (av[param_num][i])
			ft_putchar(av[param_num][i++]);
	}
	ft_putchar('\n');
	return (0);
}
