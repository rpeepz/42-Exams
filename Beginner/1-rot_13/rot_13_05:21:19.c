#include <unistd.h>
void	ft_char(char c) {
	write(1, &c, 1);
}
char	plus13(char c) {
	if (c >= 'a' && c <= 'm')
		return (c + 13);
	if (c >= 'A' && c <= 'M')
		return (c + 13);
	return (0);
}
char	minus13(char c) {
	if (c >= 'n' && c <= 'z')
		return (c - 13);
	if (c >= 'N' && c <= 'Z')
		return (c - 13);
	return (0);
}
int		main(int ac, char **av) {
	int i = -1;
	if (ac == 2) {
		while (av[1][++i]) {
			if (plus13(av[1][i]))
				ft_char(plus13(av[1][i]));
			else if (minus13(av[1][i]))
				ft_char(minus13(av[1][i]));
			else
				ft_char(av[1][i]);
		}
	}
	ft_char('\n');
	return (0);
}
