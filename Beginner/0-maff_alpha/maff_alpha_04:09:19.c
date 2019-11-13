/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 09:03:18 by exam              #+#    #+#             */
/*   Updated: 2019/04/09 09:43:07 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c + 32);
	return (c);
}

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c - 32);
	return (c);
}

char	ft_case(char c)
{
	if (c % 2 == 0)
		return (to_upper(c));
	if (c % 2 == 1)
		return (to_lower(c));
	return (c);
}

int		main(void)
{
	char *c;

	c = "aBcDeFgHiJkLmNoPqRsTuVwXyZ";
//	while (c >= 'A' && c <= 122){
//		ft_putchar(ft_case(c));
//		c++;
//	}
	while (*c)
		ft_putchar(*c++);
	ft_putchar('\n');
	return (0);
}
