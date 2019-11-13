#include <stdio.h>

void	print_doublon(int *a, int na, int *b, int nb)
{
	int i = -1;
	int j = -1;
	int tmp = j;
	char sp = 0;
	while (++i < na)
	{
		if (tmp + 1 == nb)
			break ;
		j = tmp;
		while (++j < nb)
		{
			if (a[i] < b[j])
			{
				tmp = j - 1;
				break ;
			}
			if (a[i] == b[j])
			{
				if (!sp)
				{
					printf("%d", a[i]);
					sp = 1;
				}
				else
					printf(" %d", a[i]);
				tmp = j;
				break ;
			}
		}
	}
	printf("\n");
	
}
