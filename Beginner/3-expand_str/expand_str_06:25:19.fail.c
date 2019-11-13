#include <unistd.h>
#define IS_SPACE(x) (x == ' ' || x == '\t')
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int		ft_strlen(char *s)
{
	int i = 0;
	if (!s || !*s)
		return (-1);
	while (s[i])
		i++;
	return (i);
}
void	ft_putstr(char *s)
{
	write(1, s, ft_strlen(s));
}
int		expand_str(char **str){
	char *s;
	s = *str;
	if (!s || !(*s))
		return (0);
	while (s){
		while (IS_SPACE(*s))
			s++;
		while (*s && !(IS_SPACE(*s))){
			ft_putchar(*s);
			s++;
		}
		if (!(*s)){
			str++;
			s = *str;
			if (s){
				int i = 0;
				while (IS_SPACE(s[i]))
					i++;
				if (s[i])
					ft_putstr("   ");
			}
			continue ;
		}
		else
			ft_putstr("   ");
	}
	return (0);
}
int		main(int ac, char **av)
{
	if (ac > 1){
		int ret = 0;
		if (!av || !av[1] || !av[1][0]){
			ft_putchar('\n');
			return (0);
		}
		av++;
		expand_str(av);
	}
	ft_putchar('\n');
	return (0);
}
