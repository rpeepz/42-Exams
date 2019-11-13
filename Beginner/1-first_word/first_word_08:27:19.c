#include <unistd.h>
void ft_putchar(char c){
	write(1, &c, 1);
}
int main(int ac, char **av){
	if (ac != 2)
		return (write(1, "\n", 1));
	av++;
	while (**av == ' ' || **av == '\t')
		(*av)++;
	while (**av && **av != ' ' && **av != '\t'){
		ft_putchar(**av);
		(*av)++;
	}
	return (write(1, "\n", 1));
}
