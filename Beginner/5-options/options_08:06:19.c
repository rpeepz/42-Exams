#include <unistd.h>
void	ft_putchar(char c){
	write(1, &c, 1);
}

void	ft_putnbr(int n){
	char *nums = "0123456789";
	if (n / 10)
		ft_putnbr(n / 10);
	ft_putchar(nums[n % 10]);
}

int		main(int ac, char **av){
	if (ac < 2)
		return (write(1, "options: abcdefghijklmnopqrstuvwxyz\n", 36));
	int res = 0;
	int i = 1;
	int	j;
	while (i < ac){
		j = 1;
		while (av[i][j] && av[i][0] == '-'){
			if (av[i][j] == 'h')
				return (write(1, "options: abcdefghijklmnopqrstuvwxyz\n", 36));
			if (av[i][j] < 97 || av[i][j] > 122)
				return (write(1, "Invalid Option\n", 15));
			if (av[i][j] >= 'a' && av[i][j] <= 'z')
				res |= 1 << (av[i][j] - 97);
			j++;
		}
		i++;
	}
	ft_putnbr(res);
	ft_putchar('\n');
	return (0);
}
