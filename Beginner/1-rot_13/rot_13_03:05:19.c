#include <unistd.h>
void putchar(char c)
{
	write (1, &c, 1);
}

void rot13(char *c)
{
	int i = -1;
	while (c[++i])
	{
		if (c[i] >= 'A' && c[i] <= 'M')
			putchar(c[i] + 13);
		else if (c[i] >= 'a' && c[i]<= 'm')
			putchar(c[i] + 13);
		else if (c[i] >= 'n' && c[i] <= 'z')
			putchar(c[i] - 13);
		else if (c[i] >='N' && c[i] <= 'Z')
			putchar(c[i] - 13);
		else
			putchar(c[i]);
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		rot13(av[1]);
	}
	write(1, "\n", 1);
	return 0;
}
