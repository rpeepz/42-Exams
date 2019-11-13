/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 10:47:53 by exam              #+#    #+#             */
/*   Updated: 2018/10/12 11:31:58 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putshit(char c)
{
	write(1, &c, 1);
}

int		find_me(char *s1, char *s2, int i, int max)
{
	while (i < max && *s1)
	{
		if (*s1 == s2[i])
		{
		   return (find_me(s1 + 1, s2, i + 1, max));
		}
		if (*s1 != s2[i])
			return (find_me(s1, s2, i + 1, max));
	}
	if (*s1 == '\0')
		return (1);
	return (0);
}

int		hidden(char *s1, char *s2)
{
	int j;
	int m;

	m = 0;
	while (s2[m])
		m++;
	j = find_me(s1, s2, 0, m);
	return (j);
}

int main (int ac, char **av)
{
	int pass;

	pass = 0;
	if (ac == 3)
		pass = hidden(av[1], av[2]);
	pass += '0';
	ft_putshit(pass);
	ft_putshit('\n');
	return (0);
}
