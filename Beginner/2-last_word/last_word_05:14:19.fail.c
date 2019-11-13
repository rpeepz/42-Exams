/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 09:20:21 by exam              #+#    #+#             */
/*   Updated: 2019/05/14 09:44:01 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c) {
	write(1, &c, 1);
}
int		ft_strlen(char *s) {
	int i = 0;
	if (*s && s)
	{
		while (s[i])
		{
			i++;
		}
	}
	return (i);
}
void	last_word(char *s)
{
	if (!s[0])
		return ;
	int j = 0;
	while (s[j] && (s[j] == ' ' || s[j] == '\t')) {
		j++;
		if (!s[j])
			return ;
	}
	int i = ft_strlen(s) - 1;
	while ((s[i]) && (i > 0) && (s[i] == ' ' || s[i] == '\t')) {
		i--;
		if (i == 0)
			return;
	}
	j = i;
	while (s[i] != ' ' && s[i] != '\t') {
		i--;
	}
	while (i++ < j)
	   ft_putchar(s[i]);
}
int		main(int ac, char **av)
{
	if (ac != 2) {
		ft_putchar('\n');
	}
	else {
		last_word(av[1]);
		ft_putchar('\n');
	}
	return (0);
}
