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
int ft_atoi(char *s)
{
	int ret = 0;
	int i = 0;
	while(s[i])
	{
		ret *= 10;
		ret += s[i] - 48;
		i++;
	}
	return (ret);
}
void print_hex(int num){
	char *wer = "0123456789abcdef";
	if (num >= 16){
		print_hex(num/16);
	}
	ft_putchar(wer[num % 16]);
}
int main(int ac, char **av){
	if (ac == 2)
		print_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
	return (0);
}
