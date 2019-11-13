#include <stdlib.h>
#include <stdio.h>
#incldue <unistd.h>

int main(int ac, char **av){
	if (ac != 2)
		return (printf("Error\n"));
	int n1;
	int n2;
	int i = 0;
	while (av[1][i])
	{
		n1 = atoi(&av[1][i]);
		while(av[1][i] && av[1][i] != ' ')
			i++;
		if (!av[1][i])
			break ;
		i++;
		if (!av[1][i])
			break ;
		n2 = atoi(&av[1][i]);

	}
}
