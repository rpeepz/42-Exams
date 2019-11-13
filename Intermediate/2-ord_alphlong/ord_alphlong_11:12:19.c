#include <stdlib.h>
#include <unistd.h>

void	ft_putnstr(char *s, int n) {
	write(1, s, n);
}
int		count_word(char *s) {
	int i = 0, count = 0;
	if (!s || !(*s))
		return (0);
	while (s[i]) {
		while (s[i] == ' ' || s[i] == '\t')
			++i;
		if (s[i]) {
			while (s[i] && s[i] > ' ' && s[i] <= '~')
				++i;
			++count;
		}
	}
	return (count);
}
int		ft_strlen(char *s) {
	int i = 0;
	while (s && s[i])
		++i;
	return (i);
}
int		len_s(char *s) {
	int len = 0;
	while (*s && *s != ' ' && *s != '\t') {
		++s;
		++len;
	}
	return (len);
}
char	**split_to(char *s, int count) {
	char **words = malloc((sizeof(char *) * (count + 1)));
	words[count] = 0;
	int pre = 0;
	for (int i = 0; i < count; i++) {
		while (s[pre] == ' ' || s[pre] == '\t')
			++pre;
		int len = len_s(&s[pre]);
		words[i] = malloc(len + 1);
		words[i][len] = 0;
		for (int j = 0; j < len; j++) {
			words[i][j] = s[pre + j];
		}
		pre += len;
	}
	return (words);
}

int		to_lower(int c) {
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

#define LEN(x) ft_strlen(x)
#define SAME(x) to_lower(x)
void	sort_words(char ***words, int count) {
	char	**word = *words;
	char	*tmp;
	char	*tok;
	int		i = 0;
	int		j;
	while (i < count) {
		tok = word[i];
		j = i + 1;
		while (j < count) {
			if (LEN(tok) > LEN(word[j])) {
				tmp = word[j];
				word[j] = tok;
				tok = tmp;
			}
			else if (LEN(tok) == LEN(word[j])) {
				for (int n = 0; n < LEN(tok); n++) {
					if (SAME(tok[n]) < SAME(word[j][n])){
					//	printf("%c, %c\n",SAME(tok[n]), SAME(word[j][n]));
						break ;
					}
					if (SAME(tok[n]) > SAME(word[j][n])) {
					//	printf("%c, %c\n",SAME(tok[n]), SAME(word[j][n]));
						tmp = word[j];
						word[j] = tok;
						tok = tmp;
						break ;
					}
				}
			}
			j++;
		}
		word[i] = tok;
		i++;
	}
	*words = word;
}

void	ord(char *s) {
	int count = count_word(s);
	char **word = split_to(s, count);
	for (int i = 0; i < count; i++) {
		sort_words(&word, count);
	}
	for (int i = 0; i < count; i++) {
		ft_putnstr(word[i], LEN(word[i]));
		if (LEN(word[i]) == LEN(word[i + 1]))
			write(1, " ", 1);
		else if (word[i + 1])
			write(1, "\n", 1);
	}
}

int		main(int ac, char **av) {
	if (ac == 2)
		ord(av[1]);
	write(1, "\n", 1);
	return (0);
}
