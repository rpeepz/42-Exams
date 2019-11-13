#include <unistd.h>
void	ft_putchar(char c){
	write(1, &c, 1);
}
int		main(int ac, char **av){
	if (ac != 2)
		return (write(1, "\n", 1));
	av++;
	int i = 0;
	while (av[0][i])
		i++;
	if (!i)
		return (write(1, "\n", 1));
	i--;
	while (av[0][i] == ' ' || av[0][i] == '\t')
		i--;
	if (!i)
		return (write(1, "\n", 1));
	while (i > 0 && av[0][i] != ' ' && av[0][i] != '\t')
		i--;
	if (!i)
		;
	else
		i++;
	while (av[0][i] && av[0][i] != ' ' && av[0][i] != '\t'){
		ft_putchar(av[0][i]);
		i++;
	}
	return (write(1, "\n", 1));
}
