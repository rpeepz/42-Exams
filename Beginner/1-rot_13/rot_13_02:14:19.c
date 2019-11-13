/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 09:18:48 by exam              #+#    #+#             */
/*   Updated: 2019/02/14 10:00:54 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rot_13(char *c)
{
	int		i;

	i = 0;
	while (c[i])
	{
		if (c[i] <= 'm' && c[i] >= 'a')
			ft_putchar(c[i++] + 13);
		else if (c[i] <= 'M' && c[i] >= 'A')
			ft_putchar(c[i++] + 13);
		else if (c[i] <= 'z' && c[i] >= 'n')
			ft_putchar(c[i++] - 13);
		else if (c[i] <= 'Z' && c[i] >= 'N')
			ft_putchar(c[i++] - 13);
		else
			ft_putchar(c[i++]);
	}	
}

int		main(int av, char **ac)
{
	if (av != 2 || ac[1][0] == '\0')
		ft_putchar('\n');
	else
	{
		rot_13(ac[1]);
		ft_putchar('\n');
	}
	return (0);
}
