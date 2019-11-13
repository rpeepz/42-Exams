/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 10:04:11 by exam              #+#    #+#             */
/*   Updated: 2019/02/14 11:07:57 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_seen(char *s1, char c, int i)
{
	int		seen;

	seen = 0;
	while (s1[i] != '\0')
	{
		if (s1[i + 1] == c && i != 0)
		{
			seen = 1;
			return (seen);
		}
		i++;
	}
	return (seen);
}

void	inter(char *s1, char *s2)
{
	int		i;
	int		j;
	int		x;

	i = 0;
	j = 0;
	x = 1;
	while (s2[j])
	{
		if (x == ft_seen(s1, s1[i], i) && s1[i+1] != '\0')
		{
				
			i++;
		}
		if (s1[i] != s2[j])
			j++;
		if (s1[i] == s2[j] && s1[i] != '\0')
		{
			ft_putchar(s1[i++]);
			j++;		
		}
		
	}


}

int		main(int av, char **ac)
{
	if (av != 3 || ac[1][0] == '\0')
		ft_putchar('\n');
	else
	{
		inter(ac[1], ac[2]);
		ft_putchar('\n');
	}
	return (0);
}
