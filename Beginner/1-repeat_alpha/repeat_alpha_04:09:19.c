/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 09:45:51 by exam              #+#    #+#             */
/*   Updated: 2019/04/09 10:03:04 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_repeat(char *s)
{
	int		i;
	i = 0;
	while (*s != '\0')
	{
		if (*s >= 'A' && *s <= 'Z')
		{
			i = -1;
			while (i < *s - 65)
			{
					ft_putchar(*s);
					i++;
			}
		}
		else if (*s >= 'a' && *s <= 'z')
		{
			i = -1;
			while (i < *s - 97)
			{
				ft_putchar(*s);
				i++;
			}
		}
		else
			ft_putchar(*s);
		s+=1;
	}
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	if (ac != 2)
		ft_putchar('\n');
	else
		ft_repeat(av[1]);
	return (0);
}
