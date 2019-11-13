#include <unistd.h>
int		is_space(char c){
	if (c == ' ' || c == '\t')
		return (1);
	else
		return (0);
}
void	put_upper(char c){
	char	up;

	up = c - 32;
	write(1, &up, 1);
}
void	put_lower(char c){
	char	low;

	low = c + 32;
	write(1, &low, 1);
}
void	ft_putchar(char c){
	write(1, &c, 1);
}
int		ft_strlen(char *str){
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
int		main(int ac, char **av){
	int		letter;
	int		word;
	int		len;
	int		i;

	word = 1;
	if (ac > 1){
		while (word < ac){
			letter = 0;
			while (av[word][letter]){
				while (is_space(av[word][letter])){
					ft_putchar(av[word][letter]);
					letter++;
				}
				if (!av[word][letter]){
					word++;
					break ;
				}
				len = 0;
				while ((av[word][letter] > 32 && av[word][letter] < 127) && !is_space(av[word][letter])){
					letter++;
					len++;
				}
				if (len == 1){
					if (av[word][letter- len] >= 'a' && av[word][letter - len] <= 'z')
                        put_upper(av[word][letter - len]);
                    else
                        ft_putchar(av[word][letter - len]);
				}
				else{
					i = 0;
					while (i < len - 1){
						if (av[word][letter - len  + i] >= 'A' && av[word][letter -len + i] <= 'Z')
							put_lower(av[word][letter - len + i]);
						else
							ft_putchar(av[word][letter - len + i]);
						i++;
					}
					if (av[word][letter - len + i] >= 'a' && av[word][letter - len + i] <= 'z')
						put_upper(av[word][letter - len + i]);
					else
						ft_putchar(av[word][letter - len + i]);
				}
			}
			ft_putchar('\n');
			word++;
		}
	}
	else
		ft_putchar('\n');
	return (0);
}
















