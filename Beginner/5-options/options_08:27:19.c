#include <unistd.h>

void	ft_putchar(char c){
	write(1, &c, 1);
}

int		ft_strlen(char *s){
	int i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putstr(char *s){
	if (s || *s)
		write(1, s, ft_strlen(s));
}

void	ft_putnbr(unsigned int n){
	char *s = "0123456789";
	if (n / 10)
		ft_putnbr(n/10);
	ft_putchar(s[n % 10]);
}

int		ft_usage(int no){
	char *s;
	if (no)
		s = "options: abcdefghijklmnopqrstuvwxyz\n";
	else
		s = "Invalid Option\n";
	ft_putstr(s);
	return (1);
}

void	options(char **av, int i, int j){
	unsigned int	result = 0;
	while (av[i]){
		if (av[i][j] == '-'){
			j++;
			while(av[i][j]){
				if (av[i][j] < 'a' || av[i][j] > 'z'){
					ft_usage(0);
					return ;
				}
				if (av[i][j] == 'h'){
					ft_usage(1);
					return ;
				}
				result |= 1 << (av[i][j] - 'a');
				j++;
			}
			j = 0;
		}
		i++;
	}
	ft_putnbr(result);
	ft_putchar('\n');
}

int		main(int ac, char **av){
	if (ac < 2)
		ft_usage(1);
	else
		options(av, 1, 0);
	return (0);
}
