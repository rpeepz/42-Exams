#include <unistd.h>
void	inter(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int tmp;
	while (s1[i] && s2[j])
	{
		if (s1[i] == s2[j])
		{
			if (1)
			{
				tmp = 0;
				while (tmp < i)
				{
					if (s1[tmp] == s1[i])
						break ;
					else
						tmp++;
				}
				if (tmp == i)
					write(1, &s1[i], 1);
				i++;
			}
			j = -1;
		}
		j++;
	}
}

int		main(int ac, char **av)
{
	if (ac != 3)
		;
	else
		inter(av[1], av[2]);
	write(1, "\n", 1);
	return 0;
}
