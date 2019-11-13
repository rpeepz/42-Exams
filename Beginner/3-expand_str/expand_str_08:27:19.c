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
int		main(int ac, char **av){
	if (ac != 2)
		return (write(1, "\n", 1));
	char *s = av[1];
	int i = 0;
	while (s[i] == ' ' ||  s[i] == '\t')
		i++;
	while (s[i]){
		while (s[i] && s[i] != ' ' && s[i] != '\t'){
			ft_putchar(s[i]);
			i++;
		}
		while (s[i] == ' ' || s[i] == '\t')
			i++;
		if (!s[i])
			break ;
		write(1, "   ", 3);
	}	
	return (write(1, "\n", 1));
}
