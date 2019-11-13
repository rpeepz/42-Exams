#include <unistd.h>
void	ft_putchar(char c){
	write(1, &c, 1);
}
void	print_bits(unsigned char octet){
	int		bit_num;
	int		i;

	bit_num = 256;
	i = 0;
	if (octet){
		while (bit_num > 2){
			if (octet % bit_num < 2){
				ft_putchar('0');
			}
			else if (octet % bit_num >= 2 && bit_num == 4){
				ft_putchar('1');
			}
			else if (octet % bit_num >= 4 && bit_num == 8){
				ft_putchar('1');
			}
			else if (octet % bit_num >= 8 && bit_num == 16){
				ft_putchar('1');
            }
			else if (octet % bit_num >= 16 && bit_num == 32){
				ft_putchar('1');
            }
			else if (octet % bit_num >= 32 && bit_num == 64){
				ft_putchar('1');
            }
			else if (octet % bit_num >= 64 && bit_num == 128){
				ft_putchar('1');
			}
			else if (octet % bit_num >= 128 && bit_num == 256){
				ft_putchar('1');
			}
			else
				ft_putchar('0');
			bit_num /= 2;
		}
		if (octet % bit_num == 1)
			ft_putchar('1');
		else
			ft_putchar('0');
	}
	else{
		write(1, "00000000", 8);
	}
}
