#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		while (av[1][i])
		{
			char ltr = av[1][i];
			if ((ltr >= 'a' && ltr <= 'm') || (ltr >= 'A' && ltr <= 'M'))
				ltr += 13;
			else if ((ltr >= 'n' && ltr <= 'z') || (ltr >= 'N' && ltr <= 'Z'))
				ltr -= 13;
			write(1, &ltr, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}	
