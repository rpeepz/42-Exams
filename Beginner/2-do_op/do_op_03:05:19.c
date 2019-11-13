#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
void do_op(char *n1, char *op, char *n2)
{
	int a = atoi(n1);
	int b = atoi(n2);
	int	res = 0;
	if (op[0] == '+')
		res = a + b;
	if (op[0] == '-')
		res = a - b;
	if (op[0] == '*')
		res = a * b;
	if (op[0] == '/')
		res = a / b;
	if (op[0] == '%')
		res = a % b;
	printf("%d\n", res);
}

int main(int av, char **ac)
{
	if (av == 4)
		do_op(ac[1], ac[2], ac[3]);
	else 
		write (1, "\n", 1);
	return 0;
}
