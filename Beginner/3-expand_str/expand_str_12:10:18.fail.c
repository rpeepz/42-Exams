/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 14:57:15 by exam              #+#    #+#             */
/*   Updated: 2018/10/12 15:08:03 by exam             ###   ########.fr       */
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
	while (s[i] == ' ' || s[i] == 9)
		i++;
	while (s[i])
	{
		while ((s[i] == ' ' || s[i] == 9) && \
		   	(s[i + 1] == ' ' || s[i + 1] == 9) && s[i + 1] != '\0')
			i++;
		if ((s[i] == ' ' || s[i] == 9) && s[i + 1] == '\0')
			break;
		if ((s[i] >= 33 && s[i] <= 127) && (s[i + 1] >= 33 && s[i + 1] <= 127))
			ft_putchar(s[i]);
		else
		{
			ft_putchar(' ');
			ft_putchar(' ');
		}
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
