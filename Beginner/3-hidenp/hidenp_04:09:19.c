/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 10:37:20 by exam              #+#    #+#             */
/*   Updated: 2019/04/09 10:54:22 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *s)
{
	if (*s)
		write(1, s, ft_strlen(s));
}

int		hidenp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	if (!s1[i] && *s2)
		return (1);
	while (s1[i] && s2[j]){
		while (s1[i] && s2[j] && (s1[i] == s2[j])){
			i++;
			j++;
		}
		if (s1[i] && s2[j] && (s1[i] != s2[j]))
			j++;
	}
	if (s1[i] == '\0' && (s1[i-1] == s2[j-1]))
		return (1);
	return (0);
}

int		main(int ac, char **av)
{
	if (ac != 3){
		ft_putchar('\n');
		return (1);
	}
	else{
		if(!(hidenp(av[1], av[2]))){
			ft_putchar('0');
		}
		else {
			ft_putchar('1');
		}
	}
	ft_putchar('\n');
	return (0);
}
