/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 11:09:23 by exam              #+#    #+#             */
/*   Updated: 2019/02/14 11:32:43 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	alpha_mirror(char *c)
{
	int		i;

	i = 0;
	while (c[i])
	{
		if (c[i] == 'a' || c[i] == 'A')
			ft_putchar(c[i++] + 25);
		else if (c[i] == 'b' || c[i] == 'B')
			ft_putchar(c[i++] + 23);
        else if (c[i] == 'c' || c[i] == 'C')
        	ft_putchar(c[i++] + 21);
        else if (c[i] == 'd' || c[i] == 'D')
            ft_putchar(c[i++] + 19);
        else if (c[i] == 'e' || c[i] == 'E')
            ft_putchar(c[i++] + 17);
        else if (c[i] == 'f' || c[i] == 'F')
            ft_putchar(c[i++] + 15);
        else if (c[i] == 'g' || c[i] == 'G')
            ft_putchar(c[i++] + 13);
        else if (c[i] == 'h' || c[i] == 'H')
            ft_putchar(c[i++] + 11);
        else if (c[i] == 'i' || c[i] == 'I')
            ft_putchar(c[i++] + 9);
        else if (c[i] == 'j' || c[i] == 'J')
            ft_putchar(c[i++] + 7);
        else if (c[i] == 'k' || c[i] == 'K')
            ft_putchar(c[i++] + 5);
        else if (c[i] == 'l' || c[i] == 'L')
            ft_putchar(c[i++] + 3);
        else if (c[i] == 'm' || c[i] == 'M')
            ft_putchar(c[i++] + 1);
        else if (c[i] == 'n' || c[i] == 'N')
            ft_putchar(c[i++] - 1);
		else if (c[i] == 'z' || c[i] == 'Z')
			ft_putchar(c[i++] - 25);
		else if (c[i] == 'y' || c[i] == 'Y')
            ft_putchar(c[i++] - 23);
        else if (c[i] == 'x' || c[i] == 'X')
            ft_putchar(c[i++] - 21);
        else if (c[i] == 'w' || c[i] == 'W')
            ft_putchar(c[i++] - 19);
        else if (c[i] == 'v' || c[i] == 'V')
            ft_putchar(c[i++] - 17);
        else if (c[i] == 'u' || c[i] == 'U')
            ft_putchar(c[i++] - 15);
        else if (c[i] == 't' || c[i] == 'T')
            ft_putchar(c[i++] - 13);
        else if (c[i] == 's' || c[i] == 'S')
            ft_putchar(c[i++] - 11);
        else if (c[i] == 'r' || c[i] == 'R')
            ft_putchar(c[i++] - 9);
        else if (c[i] == 'q' || c[i] == 'Q')
            ft_putchar(c[i++] - 7);
        else if (c[i] == 'p' || c[i] == 'P')
            ft_putchar(c[i++] - 5);
        else if (c[i] == 'o' || c[i] == 'o')
            ft_putchar(c[i++] - 3);
		else
			ft_putchar(c[i++]);
	}
}

int		main (int av, char **ac)
{
	if (av != 2 || ac[1][0] == '\0')
		ft_putchar('\n');
	else
	{
		alpha_mirror(ac[1]);
		ft_putchar('\n');
	}
	return (0);
}

