#include <stdlib.h>
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int		ft_strlen(char *str){
	int i = 0;
	while (str[i])
		i++;
	return (i);
}
int		is_upper(char c){
	return ((c >= 'A' && c <= 'Z') ? 1 : 0);
}
int		is_lower(char c){
	return ((c >= 'a' && c <= 'z') ? 1 : 0);
}
void	camel_snake(char *str){	
	int i = 0;
	if (str[i]){
		if (is_upper(str[i]))
			return ;
		while (is_lower(str[i])){
			ft_putchar(str[i]);
			i++;
		}
		if (!str[i])
			return ;
		ft_putchar('_');
		while (str[i]){
			if (is_upper(str[i])){
				ft_putchar(str[i] + 32);
				i++;
			}
			while (is_lower(str[i])){
				ft_putchar(str[i]);
				i++;
			}
			if (str[i])
				ft_putchar('_');
		}
	}
}
int		main(int ac, char **av){
	if (ac == 2)
		camel_snake(av[1]);
	ft_putchar('\n');
	return (0);
}
