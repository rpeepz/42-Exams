/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 09:40:20 by exam              #+#    #+#             */
/*   Updated: 2019/03/19 10:24:30 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_epur_str(char *str)
{
	int i;

	i = 0;
	while(str[i] && (str[i] == ' ' || str[i] == '\t'))
		i++;
	while(str[i])
	{
		ft_putchar(str[i++]);
		while (str[i] && (str[i] == ' ' || str[i] == '\t'))
			i++;
		if (str[i] != '\0' && (str[i - 1] == ' ' || str[i - 1] == '\t'))
			ft_putchar(' ');
	}
}
int		main(int ac, char **av)
{
	if (ac != 2){
		ft_putchar('\n');
		return (1);
	}
	else{
		ft_epur_str(av[1]);
		ft_putchar('\n');
	}
	return (0);
}
