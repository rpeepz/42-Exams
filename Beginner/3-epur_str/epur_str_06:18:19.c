#include <unistd.h>

void	eup(char *word)
{
	int i = 0;
	int j = 0;
	while (word[j])
		j++;
	j--;
	while (word[j] == ' ' || word[j] == '\t')
		j--;
	while (word[i] && i < j)
	{
		while ((word[i]) && (word[i] == ' ' || word[i] == '\t'))
		{
			i++;
		}
		while ((word[i]) && (word[i] != ' ' || word[i] != '\t'))
		{
			write(1, &word[i], 1);
			i++;
			if (word[i] == ' ' || word[i] == '\t')
				break ;
		}
		if (word[i] && i < j)
			write(1, " ", 1);
	}
}

int		main(int ac, char **av)
{
	if (ac != 2)
		return (write(1, "\n", 1));
	eup(av[1]);
	write(1, "\n", 1);
	return 0;
}
