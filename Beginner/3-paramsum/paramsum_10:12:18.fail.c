/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 14:25:18 by exam              #+#    #+#             */
/*   Updated: 2018/10/12 14:49:21 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int n)
{
	int temp = n;
	if (n < 9)
		ft_putchar(n + '0');
	while (temp > 9 && temp < 100)
	{
		temp = temp / 10;
		n = n % 10;
		if (temp <= 9)
			ft_putchar(temp + '0');
		ft_putchar(n + '0');
	}
	if (temp == 100)
		ft_putchar('1');ft_putchar('0');ft_putchar('0');
	if (temp > 100 && temp < 110)
	{
		ft_putchar('1');
		ft_putchar('0');
		temp = temp % 10;
		ft_putchar(temp);
	}
	if (temp > 110)
	{
	ft_putchar('F');ft_putchar('U');
	ft_putchar('C');ft_putchar('K');
	ft_putchar(' ');ft_putchar('I');
	ft_putchar(' ');ft_putchar('F');
	ft_putchar('O');ft_putchar('R');
	ft_putchar('G');ft_putchar('O');
	ft_putchar('T');ft_putchar(' ');
	ft_putchar('H');ft_putchar('O');
	ft_putchar('W');ft_putchar(' ');
	ft_putchar('T');ft_putchar('O');
	ft_putchar(' ');ft_putchar('R');
	ft_putchar('E');ft_putchar('C');
	ft_putchar('U');ft_putchar('R');
	ft_putchar('S');ft_putchar('I');
	ft_putchar('O');ft_putchar('N');
	}
}

int main(int ac, char **av)
{
	av[1] = "2";
	if (ac > 1)
		ft_putnbr(ac - 1);
	else
		ft_putnbr(0);
	write(1, "\n", 1);


return 0;
}
