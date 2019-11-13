#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int main(int ac, char **av){
	const char *nums = "0123456789";
	ac--;
	if (ac = 0)
		ft_putchar('\n');
	else
	{
		while (ac / 10)
		{
			ft_putchar(nums[ac - 1 % 10]);
			ac /= 10;
		}
		ft_putchar('\n');
	}
	return (0);
}
