#include <stdlib.h>
int		intlen(unsigned int nbr, int base){
	int i = 1;
	while (nbr / base){
		i++;
		nbr /= base;
	}
	return i;
}

char	*intminbase(unsigned int value, int base){
	char *s;
    int len;
    int i = 0;
    len = intlen(value, base);
    s = malloc(len + 1);
    s[len] = 0;
    len--;
    char nums[16] = "0123456789ABCDEF";
    while (len > i){
        s[len] = nums[(value % base)];
        value /= base;
        len--;
    }
    s[len] = nums[(value % base)];
    return s;
}

char	*ft_itoa_base(int value, int base){
	if (base != 10 && value - 1 == 2147483647)
		return (intminbase(value, base));
	char *s;
	int neg = 1;
	int len = 0;
	int i = 0;
	if (value - 1 == 2147483647 && base == 10){
			s = malloc(12);
			s[0] = '-';
			s[1] = 2 + 48;
			s[2] = 1 + 48;
			s[3] = 4 + 48;
			s[4] = 7 + 48;
			s[5] = 4 + 48;
			s[6] = 8 + 48;
			s[7] = 3 + 48;
			s[8] = 6 + 48;
			s[9] = 4 + 48;
			s[10] = 8 + 48;
			s[11] = 0;
		   return (s);
	}
	if (value < 0){
		value *= -1;
		if (base == 10)
			neg = -1;
	}
	len = intlen(value, base);
	if (neg == -1)
		len += 1;
	s = malloc(len + 1);
	s[len] = 0;
	if (neg  == -1){
		s[i] = '-';
		i++;
	}
	len--;
	char nums[16] = "0123456789ABCDEF";
	while (len > i){
		s[len] = nums[(value % base)];
		value /= base;
		len--;
	}
	s[len] = nums[(value % base)];
	return s;
}
