#include <unistd.h>
void	ft_putstr(char *str){
	int i = 0;
	while (str[i]){
		write(1, &str[i], 1);
		i++;
	}
}
int		main (int ac, char **av){
	if (ac < 2)
		return (write(1, "\n", 1));
	ft_putstr(av[ac - 1]);
	return (write(1, "\n", 1));
}
