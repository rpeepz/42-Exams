#include <unistd.h>

void			ft_putchar(char c)
{
	write(1, &c, 1);
}
void		ft_putnbr(unsigned int num)
{
	char *nums = "0123456789";
	int len = 1;
	int len2;
	unsigned int tmp = num;
	while (tmp /= 10)
		len++;
	while (len > 0)
	{
		tmp = num;
		len2 = len;
		while (len2 > 1)
		{
		   tmp /= 10;
		   len2--;
		}
		ft_putchar(nums[tmp % 10]);
		len--;
	}
}

unsigned int	get_options(char **str)
{
	int i = 0;
	int j = 0;
	unsigned int output = 0;
	while (str[j] && str[j][i] == '-')
	{
		i++;
		if (str[j][i] == 'h')
			return (2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2);
		while (str[j][i] >= 'a' && str[j][i] <= 'z')
		{
			if (str[j][i] == 'h')
   				return (2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2);
			output |= 1 << (str[j][i] - 'a');
			i++;
		}
		if (!str[j][i])
		{
			j++;
			i = 0;
		}
		else
			return (0);
	}
	if (!str[j])
		return (output);
	else
		return (0);
}

int			main(int ac, char **av)
{
	if (ac == 1)
		write(1, "options: abcdefghijklmnopqrstuvwxyz", 35);
	else
	{
		unsigned int ret = get_options(&av[1]);
		if (ret == 2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2*2)
			write(1, "options: abcdefghijklmnopqrstuvwxyz", 35);
		else if (!ret)
			write(1, "Invalid Option", 14);
		else
			ft_putnbr(ret);
	}
	write(1, "\n", 1);
	return 0;
}
