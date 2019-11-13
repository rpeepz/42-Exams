#include <unistd.h>
#include <stdlib.h>
void	ft_putchar(char c){
	write(1, &c, 1);
}
int		ft_strlen(char *s){
	int i = 0;
	while (s[i] && s[i] != ' ' && s[i] != '\t')
		i++;
	return (i);
}
int		wd_count(char *s){
	int i = 0;
	int wd = 0;
	while (s[i]){
		if (s[i] == ' ' || s[i] == '\t')
			wd++;
		i++;
	}
	return (wd + 1);
}
int		main(int ac, char **av){
	if (ac != 2)
		return (write(1, "\n", 1));
	char *s = av[1];
	int wd = wd_count(s);
	char **wstr = malloc(sizeof(char *) * (wd + 1));
	wstr[wd] = 0;
	int x = 0;
	int y = 0;
	int i = 0;
	int len = 0;
	while (s[x]){
		len = ft_strlen(&s[x]);
		wstr[y] = malloc(len + 1);
		wstr[y][len] = 0;
		i = 0;
		while (i < len){
			wstr[y][i] = s[x];
			i++;
			x++;
		}
		if (s[x])
			x++;
		y++;
	}
	wd--;
	while (wd >= 0){
		i = 0;
		while (wstr[wd][i]){
			ft_putchar(wstr[wd][i]);
			i++;
		}
		if (wd)
			write(1, " ", 1);
		wd--;
	}
	write(1, "\n", 1);
	return 0;
}
