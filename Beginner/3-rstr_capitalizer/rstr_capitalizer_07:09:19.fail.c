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
void	ft_putstr(char *str){
	int i = 0;
	while (str[i]){
		write(1, &str[i], 1);
		i++;
	}
}
int		count_wd(char *str){
	int i = 0;
	int wd = 0;
	while (str[i]){
		while (str[i] && (str[i] == ' ' || str[i] == '\t'))
			i++;
		while (str[i] && str[i] != ' ' && str[i] != '\t')
			i++;
		wd++;
	}
	return (wd);
}
void	rstr_cap(char **str){
	int i = 0;
	int j = 0;
	while (str[j]){
		while (str[j][i] && (str[j][i] == ' ' || str[j][i] == '\t')){
			ft_putchar(str[j][i]);
			i++;
		}
		if (!str[j][i]){
			j++;
			i = 0;
			ft_putchar('\n');
			continue ;
		}
		while (str[j][i] && str[j][i + 1] != ' ' && str[j][i + 1] != '\t' && str[j][i + 1] != '\0'){
			if (is_upper(str[j][i]))
				ft_putchar(str[j][i] + 32);
			else
				ft_putchar(str[j][i]);
			i++;
		}
		if (str[j][i]){
			if (is_lower(str[j][i]))
				ft_putchar(str[j][i] - 32);
			else
				ft_putchar(str[j][i]);
			i++;
		}
		if (!str[j][i]){
			j++;
			i = 0;
			ft_putchar('\n');
		}
	}
}
int		main(int ac, char **av){
	if (ac > 1)
		rstr_cap(&av[1]);
	return (0);
}

