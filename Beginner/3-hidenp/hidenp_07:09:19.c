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
void	hidenp(char *s1, char *s2){
	int i1 = 0;
	int i2 = 0;
	while (s2[i2]){
		if (s1[i1] == s2[i2]){
			i1++;
			i2++;
		}
		else
			i2++;
	}
	ft_putchar(s1[i1] ? '0' : '1');
}
int		main(int ac, char **av){
	if (ac == 3)
		hidenp(av[1], av[2]);
	ft_putchar('\n');
	return (0);
}
