#include <stdlib.h>
#include <unistd.h>
void	equation(int n);
int		main(int ac, char **av){

	if (ac != 2)
		return (write(1, "need arg\n", 9));
    equation(atoi(av[1]));

	return (0);
}
