#include <unistd.h>
int		is_upper(char c){
	return (c >= 'A' && c <= 'Z') ? 1 : 0;
}
int		is_lower(char c){
	return (c >= 'a' && c <= 'z') ? 1 : 0;
}
void	ft_putchar(char c){
	write(1, &c, 1);
}
int main(int ac, char **av){
	if (ac < 2)
		return (write(1, "\n", 1));
	int i = 0;
	if (av[1][i]){
		if (is_upper(av[1][i]))
			ft_putchar(av[1][i] + 32);
		else
			ft_putchar(av[1][i]);
		i++;
	}
	while(av[1][i]){
		if (av[1][i] == '_'){
			i++;
			if (av[1][i]){
				if (is_lower(av[1][i]))
					ft_putchar(av[1][i] - 32);
				else
					ft_putchar(av[1][i]);
				i++;
			}
		}
		if (is_upper(av[1][i]))
			ft_putchar(av[1][i] + 32);
		else
			ft_putchar(av[1][i]);
		i++;
		if (av[1][i] == '_'){
			i++;
			if (av[1][i]){
				if (is_lower(av[1][i]))
					ft_putchar(av[1][i] - 32);
				else
					ft_putchar(av[1][i]);
				i++;
			}
		}
	}
	return (write(1, "\n", 1));
}
