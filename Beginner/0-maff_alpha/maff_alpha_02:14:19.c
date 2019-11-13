/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 09:04:41 by exam              #+#    #+#             */
/*   Updated: 2019/02/14 09:16:38 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <unistd.h>

void	ft_putchar(c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (c[i])
		i++;
	while (j < i)
		ft_putchar(c[j++]);
}

int		main(void)
{
	char *c;

	c = "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n";
	ft_putstr(c);
	return (0);
}

