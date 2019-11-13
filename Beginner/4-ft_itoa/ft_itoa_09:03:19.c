#include <stdlib.h>
int		intlen(int nbr){
	int i = 1;
	while (nbr / 10){
		i++;
		nbr /= 10;
	}
	return i;
}

char	*ft_itoa(int nbr){
	char *s;
	int neg = 1;
	int len = 0;
	int i = 0;
	if (nbr == 2147483647){
		s = malloc(11);
		s[0] = 2 + 48;
		s[1] = 1 + 48;
		s[2] = 4 + 48;
		s[3] = 7 + 48;
		s[4] = 4 + 48;
		s[5] = 8 + 48;
		s[6] = 3 + 48;
		s[7] = 6 + 48;
		s[8] = 4 + 48;
		s[9] = 7 + 48;
		s[10] = 0;
		return (s);
	}
	if (nbr - 1 == 2147483647){

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
	if (nbr == 0){
		s = malloc (2);
		s[0] = 0 + 48;
		s[1] = 0;
		return (s);
	}
	if (nbr < 0){
		neg = -1;
		nbr *= -1;
	}
	len = intlen(nbr);
	if (neg == -1)
		len += 1;
	s = malloc(len + 1);
	s[len] = 0;
	if (neg  == -1){
		s[i] = '-';
		i++;
	}
	len--;
	while (len > i){
		s[len] = (nbr % 10) + 48;
		nbr /= 10;
		len--;
	}
	s[len] = (nbr % 10) + 48;
	return s;

}
