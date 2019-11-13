#include <unistd.h>
int		ft_strlen(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return (i);
}

void	mirror(char *s)
{
	int i;
	int len = ft_strlen(s);
	if (s)
	{
		for (i = 0; i < len; i++)
		{
			if (s[i] >= 'a' && s[i] <= 'm')
			{
				if (s[i] == 'a')
					write(1, "z", 1);
				else if (s[i] == 'b')
					write(1, "y", 1);
				else if (s[i] == 'c')
					write(1, "x", 1);
				else if (s[i] == 'd')
					write(1, "w", 1);
				else if (s[i] == 'e')
					write(1, "v", 1);
				else if (s[i] == 'f')
					write(1, "u", 1);
				else if (s[i] == 'g')
					write(1, "t", 1);
				else if (s[i] == 'h')
					write(1, "s", 1);
				else if (s[i] == 'i')
					write(1, "r", 1);
				else if (s[i] == 'j')
					write(1, "q", 1);
				else if (s[i] == 'k')
					write(1, "p", 1);
				else if (s[i] == 'l')
					write(1, "o", 1);
				else if (s[i] == 'm')
					write(1, "n", 1);
			}
			else if (s[i] >= 'A' && s[i] <= 'M')
			{
				if (s[i] == 'A')
					write(1, "Z", 1);
				else if (s[i] == 'B')
					write(1, "Y", 1);
				else if (s[i] == 'C')
					write(1, "X", 1);
				else if (s[i] == 'D')
					write(1, "W", 1);
				else if (s[i] == 'E')
					write(1, "V", 1);
				else if (s[i] == 'F')
					write(1, "U", 1);
				else if (s[i] == 'G')
					write(1, "T", 1);
				else if (s[i] == 'H')
					write(1, "S", 1);
				else if (s[i] == 'I')
					write(1, "R", 1);
				else if (s[i] == 'J')
					write(1, "Q", 1);
				else if (s[i] == 'K')
					write(1, "P", 1);
				else if (s[i] == 'L')
					write(1, "O", 1);
				else if (s[i] == 'M')
					write(1, "N", 1);
			}
			else if (s[i] >= 'n' && s[i] <= 'z')
			{
				if (s[i] == 'n')
					write(1, "m", 1);
				else if (s[i] == 'o')
					write(1, "l", 1);
				else if (s[i] == 'p')
					write(1, "k", 1);
				else if (s[i] == 'q')
					write(1, "j", 1);
				else if (s[i] == 'r')
					write(1, "i", 1);
				else if (s[i] == 's')
					write(1, "h", 1);
				else if (s[i] == 't')
					write(1, "g", 1);
				else if (s[i] == 'u')
					write(1, "f", 1);
				else if (s[i] == 'v')
					write(1, "e", 1);
				else if (s[i] == 'w')
					write(1, "d", 1);
				else if (s[i] == 'x')
					write(1, "c", 1);
				else if (s[i] == 'y')
					write(1, "b", 1);
				else if (s[i] == 'z')
					write(1, "a", 1);
			}
			else if (s[i] >= 'N' && s[i] <= 'Z')
			{
				if (s[i] == 'N')
					write(1, "M", 1);
				else if (s[i] == 'O')
					write(1, "L", 1);
				else if (s[i] == 'P')
					write(1, "K", 1);
				else if (s[i] == 'Q')
					write(1, "J", 1);
				else if (s[i] == 'R')
					write(1, "I", 1);
				else if (s[i] == 'S')
					write(1, "H", 1);
				else if (s[i] == 'T')
					write(1, "G", 1);
				else if (s[i] == 'U')
					write(1, "F", 1);
				else if (s[i] == 'V')
					write(1, "E", 1);
				else if (s[i] == 'W')
					write(1, "D", 1);
				else if (s[i] == 'X')
					write(1, "C", 1);
				else if (s[i] == 'Y')
					write(1, "B", 1);
				else if (s[i] == 'Z')
					write(1, "A", 1);
			}
			else
				write(1, &s[i], 1);
		}
	}
}

int		main(int ac, char **av)
{
	if (ac != 2)
		;
	else
		mirror(av[1]);
	write(1, "\n", 1);
	return 0;
}
