#include <unistd.h>

int	brackets(char **av)
{
	char buf[2048];
	for(int i = 0; i < 2048; i++)
	{
		buf[0] = '\0';
	}
	int i, j;
	i = 0;
	j = 0;
	int position = -1;
	if(!av[j][i])
		return (0);
	while (av[j][i])
	{
		if (av[j][i] == '{' || av[j][i] == '[' || av[j][i] == '(')
		{
			buf[++position] = av[j][i];
			i++;
		}
		else if (av[j][i] != '}' && av[j][i] != ']' && av[j][i] != ')')
			i++;
		if (av[j][i] == '}' || av[j][i]== ']' || av[j][i] == ')')
		{
			if ((buf[position] == '{' && av[j][i] == '}') ||
				(buf[position] == '[' && av[j][i] == ']') ||
				(buf[position] =='(' && av[j][i] == ')'))
			{
				buf[position] = '\0';
				position--;
				i++;
			}
			else
				return (1);
		}
		if (!av[j][i])
		{
			j++;
			i = 0;
			if (!av[j])
				break ;
		}
	}
	return (position + 1);
}

int main(int ac, char **av)
{
	if (ac < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (!brackets(&av[1]))
		write(1, "OK\n", 3);
	else
		write (1, "Error\n", 6);
	return (0);	
}
