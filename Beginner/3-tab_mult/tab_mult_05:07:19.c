/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 10:09:44 by exam              #+#    #+#             */
/*   Updated: 2019/05/07 10:48:43 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(const char *av)
{
	int val = 0;
	int i = 0;
	while (av[i]){
		if (av[i] >= '0' && av[i] <= '9'){
			val = (val * 10) + av[i] - '0';
		}
		else
			return (val);
		i++;
	}
	return (val);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int num)
{
	char *s = "0123456789";

	if (num / 10)
		ft_putnbr(num / 10);
	ft_putchar(s[num % 10]); 
}

int		ft_strlen(char *str)
{
	int i = 0;
	if (str){
		while (str[i]){
			i++;
		}
	}
	return (i);
}

void	tab_mult(char *av)
{
	int i = 1;
	int num = ft_atoi(av);
	while (i < 10){
		ft_putnbr(i);
		write(1, " x ", 3);
		write(1, av, ft_strlen(av));
		write(1, " = ", 3);
		ft_putnbr(num * i);
		write(1, "\n", 1);
		i++;
	}
}

int		main(int ac, char **av){
	if (ac != 2)
		write(1, "\n", 1);
	else
		tab_mult(av[1]);
	return (0);
}
