#include <stdio.h>

void	print_doublon(int *a, int na, int *b, int nb) {
	int		*tmp;
	int		n;
	int		n2;
	if (nb < na) {
		n = na;
		tmp = a;
		na = nb;
		a = b;
		nb = n;
		b = tmp;
	}
	tmp = a;
	n = 0;
	n2 = 0;
	while (n < na) {
		if (a[n] > b[n2]) {
			++n2;
			if (n2 == nb)
				break ;
			continue ;
		}
		if (a[n] == b[n2]) {
			if (!tmp)
				printf(" ");
			else
				tmp = 0x0;
			printf("%d", a[n]);
			++n2;
		}
		++n;
	}
	printf("\n");
}
