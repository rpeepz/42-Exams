#include <unistd.h>
void putchar (char c)
{
	write (1, &c, 1);
}
void ft_putstr(char *c)
{
	int i = 0;
	while (c[i] != '\0')
		{
			putchar(c[i++]);

		}
}
int main (int n, char **ac)
{
	if (n > 1)
		ft_putstr(ac[n - 1]);
	write(1, "\n", 1);
	return 0;
}
