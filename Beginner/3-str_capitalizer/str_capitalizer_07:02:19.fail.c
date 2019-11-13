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
char is_alpha(char c){
	if (c >= 'a' && c <= 'z')
		return (c);
	if (c >= 'A' && c <= 'Z')
		return (c);
	return (0);
}
void capitalize(char **str){
	if (!str || !*str || !**str)
		return ;
	int i = 0;
	while (str[0][i]){
		while (str[0][i] == ' ' || str[0][i] == '\t'){
			ft_putchar(str[0][i]);
			i++;
		}
		if (str[0][i] >= 'a' && str[0][i] <= 'z'){
			ft_putchar(str[0][i] - 32);
			i++;
		}
		else if (str[0][i] >= 'A' && str[0][i] <= 'Z'){
			ft_putchar(str[0][i]);
			i++;
		}
		while (str[0][i] && str[0][i] != ' '  && str[0][i] != '\t'){
			if (str[0][i] >= 'A' && str[0][i] <= 'Z')
				ft_putchar(str[0][i] + 32);
			else
				ft_putchar(str[0][i]);
			i++;
		}	
	}
	write(1, "\n", 1);
	return (capitalize(&str[1]));
}
int main(int ac, char **av){
	if (ac != 1)
		capitalize(&av[1]);
	return 0;
}
