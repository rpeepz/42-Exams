#include <stdlib.h>
#include <unistd.h>

int		solve(char **bo, int i, int j, int bounds)
{	
	int c;
	while (bo[i])
	{
		j = 0;
		while (bo[i][j])
		{
			if (bo[i][j] == 'P')
			{
				if (i - 1 >= 0)
				{
					if (j - 1 >= 0)
						if (bo[i-1][j-1] == 'K')
							return (1);
					if (j + 1 < bounds)
						if (bo[i-1][j+1] == 'K')
							return (1);
				}
			}
			else if (bo[i][j] == 'B')
			{
				c = 1;
				while (i - c >= 0)
				{
					if (j - c >= 0)
						if (bo[i-c][j-c] == 'K')
							return (1);
					if (j + c < bounds)
						if (bo[i-c][j+c] == 'K')
							return (1);
					c++;
				}
				c = 1;
				while (i + c < bounds)
				{
					if (j - c >= 0)
						if (bo[i+c][j-c] == 'K')
							return (1);
					if (j + c < bounds)
						if (bo[i+c][j-c] == 'K')
							return (1);
					c++;
				}
			}

			j++;
		}
		i++;
	}
	return 1;
}

char	**makebord(char **bo, char **av, int ac, int i, int j)
{
	while (av[i])
	{
		bo[i - 1] = (char *)malloc(sizeof(char) * ac);
		bo[i - 1][ac] = '\0';
		j = 0;
		while (av[i][j])
		{
			bo[i - 1][j] = av[i][j];
			j++;
		}
		i++;
	}
	return (bo);
}
int		validate(char **av, int i, int j)
{
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			j++;
		}
		i++;
	}
	i -= 1;
	if (i <= 8 && j <= 8 && i == j)
		return (1);
	else
		return (0);
}
int		main(int ac, char **av)
{
	char **board;
	if (ac > 1) {
		if (validate(av, 1, 0)) {	
			board = (char **)malloc(sizeof(char *) * ac);
			board[ac] = 0;
			board = makebord(board, av, ac, 1, 0);
			if (solve(board, 0, 0, ac))
				write(1, "Success\n", 8);
			else
				write(1, "Fail\n", 5);
		}
		else
			write(1, "Fail\n", 5);
	}
	else
		write(1, "\n", 1);
	return 0;
}
