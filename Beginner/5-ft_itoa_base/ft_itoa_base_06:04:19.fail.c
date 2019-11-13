#include <stdlib.h>

char	*ft_itoa_base(int value, int base)
{
	const char	nums[16] = "0123456789ABCDEF";
	char		*s;
	int			tmp = value;
	int			len = 1;
	int neg = 0;
	if (value == 0)
		return ("0");
	if (base < 2 || base > 16)
		return(NULL);
	if (base != 10){
		if (value < 0){
			value *= -1;
		}
	}
	if (base == 10 && value < 0){
		len++;
		value *= -1;
		neg = 1;
	}
	while (tmp /= base)
		len++;
	s = malloc(sizeof(char) * len + 1);
	s[len] = '\0';
	len--;
	while (value){
		s[len] = nums[value % base];
		len--;
		value /= base;
	}
	if (base == 10 && neg == 1){
		s[0] = '-';
	}
	return (s);
}



#include <stdio.h>
int main(int ac, char **av)
{
	ac = 100;
	int i = atoi(av[1]);
	char *s = ft_itoa_base(i, 10);

	printf("%s\n", s);
	return 0;
}
