#include <unistd.h>
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
void wdmatch(char *s1, char *s2){
	if (!s1 || !s2 || !*s1 || !*s2)
		return ;
	int i = 0;
	int j = 0;
	while (s2[j]){
		if (s1[i] == s2[j]){
			i++;
			j++;
		}
		else
			j++;
	}
	if (!s1[i])
		write(1, s1, ft_strlen(s1));
}
int main(int ac, char **av){
	if (ac == 3)
		wdmatch(av[1], av[2]);
	write(1, "\n", 1);
	return 0;

}
