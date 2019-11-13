/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 10:04:31 by exam              #+#    #+#             */
/*   Updated: 2019/04/09 10:35:56 by exam             ###   ########.fr       */
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

//s1 = target to find
//s2 = cache to search
int		wd_match(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	while (s1[i] && s2[j])
	{
		if (s1[i] != s2[j])
			j++;
		while ((s1[i] == s2[j])  && s2[j] && s1[i]){
			i++;
			j++;
		}
	}
	if (!s1[i])
		return (0);
	return (1);
}
int		main(int ac, char **av)
{
	int i = 1;
	if (ac != 3){
		ft_putchar('\n');
		return (i);
	}
	else
		if(!(i = wd_match(av[1], av[2])))
			ft_putstr(av[1]);
	ft_putchar('\n');
	return (i ? i : i);
}
