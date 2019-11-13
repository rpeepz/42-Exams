#include <unistd.h>


void	brackets(char *str){
	int i = 0;
	int b = 0;
	char buf[4096];
	
	while (str[i]){
		if (str[i] == '(' || str[i] == '[' || str[i] == '{'){
			b++;
			buf[b] = str[i];
			i++;
		}
		if ((str[i] == ')' && buf[b] == ')') ||
			(str[i] == ']' && buf[b] == ']') ||
			(str[i] == '}' && buf[b] == '}')){
			buf[b] = '\0';
			b--;
			i++;
		}
		else
			i++;	
		if (b < 1)
			break ;
	}
	if (b == 1 || !str)
		write(1, "OK\n", 3);
	else
		write(1, "Error\n", 6);
}
void	test(char **str){
	int i = 0;
	while (str[i]){
		brackets(str[i]);
		i++;
	}
}
int 	main(int ac, char **av){
	if (ac == 1){
		write(1, "\n", 1);
		return (0);
	}
	test(&av[1]);
}
