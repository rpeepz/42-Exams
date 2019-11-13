#include <unistd.h>
#include <stdlib.h>
int		ft_strlen(char *s){
	int i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strndup(char *s, int n){
	int i = 0;
	char *new;
	new = malloc(sizeof(char) * n + 1);
	new[n] = '\0';
	while (i < n){
		new[i] = s[i];
		i++;
	}
	return (new);
}

int		count_words(char *s){
	int i = 0;
	int count = 0;
	while (s[i]){
		while (s[i] && s[i] != ' ' && s[i] != '\t')
			i++;
		count++;
		while (s[i] == ' ' || s[i] == '\t')
			i++;
	}
	return (count);
}

void	rostring(char *s){
	int i = 0;
	int j = 0;
	int count = 0;
	int pos = 0;
	char **words;
	if (s[i] == '\0')
		return ;
	while (s[i]){
		if (s[i] == ' ' || s[i] == '\t')
			i++;
		else
			break ;
	}
	count = count_words(&s[i]);
	words = malloc(sizeof(char *) * count + 1);
	words[count] = NULL;
	while (s[i] && pos < count){
		j = i;
		while (s[i] && s[i] != ' ' && s[i] != '\t')
			i++;
		words[pos] = ft_strndup(&s[j], i - j);
		pos++;
		while (s[i] == ' ' || s[i] == '\t')
			i++;
	}
	pos = 1;
	while (words[pos]){
		write(1, words[pos], ft_strlen(words[pos]));
		write(1, " ", 1);
		pos++;
	}
	write(1, words[0], ft_strlen(words[0]));
	while (pos >= 0){
		free(words[pos]);
		pos--;
	}
	free(words);
		
}


int		main(int ac, char **av){
	if (ac < 2)
		;
	else
		rostring(av[1]);
	write(1, "\n", 1);
	return 0;
}
