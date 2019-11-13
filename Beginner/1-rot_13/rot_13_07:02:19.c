#include <unistd.h>
void ft_putchar(char c){
	write(1, &c, 1);
}
int	ft_strlen(char *str){
	int i = 0;
	if (!str || !str[0])
		return (0);
	while (str[i])
		i++;
	return (i);
}
void rot13(char *str){
	if (!str || !*str)
		return ;
	int len = ft_strlen(str);
	for (int i = 0; i < len; i++){
		if ((str[i] >= 'a' && str[i] <= 'm') ||
			(str[i] >= 'A' && str[i] <= 'M'))
			ft_putchar(str[i]+13);
		else if ((str[i] >= 'n' && str[i] <= 'z') ||
			(str[i] >= 'N' && str[i] <= 'Z'))
			ft_putchar(str[i]-13);
		else
			ft_putchar(str[i]);
	}
}
int main(int ac, char **av){
	if (ac == 2)
		rot13(av[1]);
	write(1, "\n", 1);
	return 0;
}
