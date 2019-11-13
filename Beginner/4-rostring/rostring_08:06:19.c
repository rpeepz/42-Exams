#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c){
	write(1, &c, 1);
}

void	ft_putstr(char *str){
	int i = 0;
	while (str[i]){
		ft_putchar(str[i]);
		i++;
	}
}

int		count_wd(char *str){
	int ct = 0;
	int i = 0;

	while(str[i]){
		while(str[i] == ' ' || str[i] == '\t')
			i++;
		if (str[i])
			ct++;	
		while (str[i] && str[i] != ' ' && str[i] != '\t')
			i++;
	}
	return (ct);
}

char	**put_words(char *str, int wd_count, int i, int len, int tmp){
	if (!wd_count)
		return (0);
	char	**words = malloc(sizeof(char *) * wd_count + 1);
	int		tmp2;
	words[wd_count] = 0;
	while (i < wd_count){
		while (str[tmp] == ' ' || str[tmp] == '\t')
			tmp++;
		len = 0;
		while (str[tmp + len] && str[tmp + len] != ' ' && str[tmp + len] != '\t')
			len++;
		words[i] = malloc(sizeof(char) * len + 1);
		words[i][len] = '\0';
		tmp2 = 0;
		while (tmp2 < len){
			words[i][tmp2] = str[tmp + tmp2];
			tmp2++;
		}
		tmp += len;
		i++;
	}
	return (words);
}

void	rostring(char *str){
	int		i;
	char	**words;
	if (!(words = put_words(str, count_wd(str), 0, 0, 0)))
		return ;
	i = 1;
	while (words[i]){
		ft_putstr(words[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putstr(words[0]);
}

int		main(int ac, char **av){
	if (ac > 1)
		rostring(av[1]);
	ft_putchar('\n');
	return (0);
}
