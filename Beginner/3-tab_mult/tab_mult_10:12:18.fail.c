/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 12:36:36 by exam              #+#    #+#             */
/*   Updated: 2018/10/12 13:47:29 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int r)
{
	int temp;

	temp = 0;
	while (r > 9)
	{
		temp = r / 10;
		if (temp <= 9)
			ft_putchar(temp + '0');
		if (temp >= 10)
		{
			r = r /10;
		}
	//	r = r % 10;

	}
	ft_putchar(r + '0');
}

void	atoi_multi(char *s)

{
	int i;
	int r;
	int temp;

	i = 0;
	r = 0;
	while (s[i])
	{
		r = (r * 10) + (s[i] - '0');
		i++;
	}
	i = 1;
	while (i <= 9)
	{
		temp = i * r;
		ft_putchar(i + '0');
		ft_putchar(' ');
		ft_putchar('x');
		ft_putchar(' ');
		ft_putnbr(r);
		ft_putchar(' ');
		ft_putchar('=');
		ft_putchar(' ');
		ft_putnbr(temp);
		ft_putchar('\n');
		i++;
	}
}

int main(int ac, char **av)
{
	int i = 0;
	while (av[1][i])
		i++;
	int j = 0;
	while (j < i)
	{
		if (av[1][j] >= '0' && av[1][j] <= '9')
			j++;
		else
			break;
	}
	if (ac == 2)
	{
		if (j == i)
			atoi_multi(av[1]);
	}
	else
		ft_putchar('\n');
	return (0);
}
