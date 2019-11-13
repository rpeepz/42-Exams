#include <unistd.h>
void	ft_putchar(char c){
	write(1, &c, 1);
}
void	rot13(char *str){
	while (*str){
		if ((*str >= 'A' && *str < 'N') || (*str >= 'a' && *str < 'n')){
			ft_putchar(*str + 13);
			str++;
		}
		else if ((*str >= 'N' && *str <= 'Z') || (*str >= 'n' && *str <= 'z')){
			ft_putchar(*str - 13);
			str++;
		}
		else {
			ft_putchar(*str);
			str++;
		}
	}
}
int		main(int ac, char **av){
	if (ac == 2){
		rot13(av[1]);
	}
	ft_putchar('\n');
	return (0);
}
