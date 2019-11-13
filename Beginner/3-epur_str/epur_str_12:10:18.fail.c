/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 12:09:08 by exam              #+#    #+#             */
/*   Updated: 2018/10/12 12:27:46 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	epur_str(char *s)
{
	int i = 0;
	while (s[i] == ' ' || s[i] == '\t')
		i++;
	while (s[i])
	{
		while ((s[i] == ' ' || s[i] == '\t') && \
		   	(s[i + 1] == ' ' || s[i + 1] == '\t') && s[i + 1] != '\0')
			i++;
		if ((s[i] == ' ' || s[i] == '\t') && s[i + 1] == '\0')
			break;
		ft_putchar(s[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		epur_str(av[1]);
	ft_putchar('\n');
	return (0);
}
