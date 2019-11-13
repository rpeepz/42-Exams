#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int		xlen(char *s)
{
	int i = 0;
	if (!s || !*s)
	   return (-1);
	while (s[i])
		i++;
	return (i);
}	
int		rot_13(char *s)
{
	int len;
	len = xlen(s);
   	if (len == -1)
		return (1);
	for (int i = 0; i < len; i++){
		if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
			ft_putchar(s[i] + 13);
		else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
			ft_putchar(s[i] - 13);
		else
			ft_putchar(s[i]);
	}
	return (0);
}
int		main(int ac, char **av)
{
	if (ac == 2)
		rot_13(av[1]);
	write(1, "\n", 1);
	return (0);
}
