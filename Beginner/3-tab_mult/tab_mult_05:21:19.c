#include <unistd.h>
void	ft_putchar(char c) {
	write(1, &c, 1);
}
void	ft_putnbr(int n) {
	const char nums[] = "0123456789";

	if (n / 10)
		ft_putnbr(n/10);
	ft_putchar(nums[n % 10]);
}
void	tab_mult(int n) {
	int i = 0;
	while (++i < 10) {
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(n);
		write(1, " = ", 3);
		ft_putnbr(i * n);
		write(1, "\n", 1);
	}
}
int		to_pos_int(char *str) {
	int i = 0;
	int n = 0;
	while (str[i]) {
		n *= 10;
		n += str[i] - '0';
		i++;
	}
	return (n);
}
int		main(int ac, char **av) {
	if (ac == 2) {
		tab_mult(to_pos_int(av[1]));
	}
	else
		ft_putchar('\n');
	return 0;	
}
