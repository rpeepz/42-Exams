#include <unistd.h>
#include <stdlib.h>
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
int	count_words(char *s){
	int r = 0;
	int i = 0;
	while (s[i]){
		while (s[i] == ' ' || s[i] == '\t')
			i++;
		if (s[i])
			r++;
		while (s[i] && s[i] != ' ' && s[i] != '\t')
			i++;
	}
	return (r);
}
void rostring(char *s){
	char **str = malloc(sizeof(char *) * count_words(s) + 1);
	str[count_words(s)] = NULL;
	int c = 0;
	int i = 0;
	int t = 0;
	int p = 0;
	while (s[i]){
		while (s[i] == ' ' || s[i] == '\t')
			i++;
		if (s[i] && s[i] != ' ' && s[i] != '\t'){
			t = i;
            while (s[i] && s[i] != ' ' && s[i] != '\t')
				i++;
			p = i - t;
			str[c] = malloc(sizeof(char) * (p + 1));
			str[c][p] = '\0';
			for (int x = 0; x < p; x++){
				str[c][x] = s[t];
				t++;
			}
			c++;
		}
	}
	i = 1;
	while (i < c){
		write(1, str[i], ft_strlen(str[i]));
		free(str[i]);
		i++;
		ft_putchar(' ');
	}
	write(1, str[0], ft_strlen(str[0]));
	free(str[0]);
	free(str);
}
int main(int ac, char **av){
	if (ac == 2)
		rostring(av[1]);
	ft_putchar('\n');
	return 0;
}
