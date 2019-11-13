#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int main(int ac, char **av)
{
	if (av[0][0])
		ac += 0;
	if (ac < 2){
		write(1, "0\n", 2);
	}
	if (ac >= 2){
		ac -= 1;
		while (ac % 10 > 9){
			ft_putchar((ac / 10) + '0');
			ac /= 10;
		}
		if (ac % 10 == 0){
			ft_putchar((ac / 10) + '0');
		}
		ft_putchar ((ac % 10) + '0');
	}
	write(1, "\n", 1);
	return (0);
}
