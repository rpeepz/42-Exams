/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 10:52:55 by exam              #+#    #+#             */
/*   Updated: 2019/05/14 11:42:24 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int		is_space(char c){
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}
int		is_upper(char c){
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
int		is_lower(char c){
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
int		is_print(char c){
	if (c > 32  && c < 127)
		return (1);
	return (0);
}
char	to_lower(char c){
	if (is_upper(c))
		return (c + 32);
	else
		return (c);
}
char	to_upper(char c){
	if (is_lower(c))
		return (c - 32);
	return (c);
}

void	str_cap(char **str){
	if (!**str || !*str || !str)
		return ;
	int i, j;
	i = 1;
	while (str[i]){
		j = 0;
		while (str[i][j]){
			while (is_space(str[i][j])){
				ft_putchar(str[i][j]);
				j++;
			}
			if (!str[i][j])
				break ;
			while (is_print(str[i][j]))
			{
				if (is_space(str[i][j + 1]) || !str[i][j + 1]){
					ft_putchar(to_upper(str[i][j]));
					j++;
					break ;
				}
				ft_putchar(to_lower(str[i][j]));
				j++;
			}
		}
		ft_putchar('\n');
		i++;
	}
}

int		main(int ac, char **av){
	if (ac < 2)
		write(1, "\n", 1);
	else{
		str_cap(av);
	}
	return (0);
}
