/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 10:09:34 by exam              #+#    #+#             */
/*   Updated: 2019/05/14 10:42:39 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>



#include <unistd.h>

int		convert(char *str) {
	int		result = 0;
	int		len = 0;
	int		tmp;
	while (str[len] >= '0' && str[len] <= '9') {
		len++;
	}
	tmp = len;
	if (len > 1)
	{
		while (tmp--)
			result *= 10;
		while (tmp < len)
			result = (str[tmp] - 48) * result;
	}
	else
		result = str[0] - 48;
	printf("%d\n", result);
	return (result);
}

void	print_hex(char *str) {
	if (str[0] == '0') {
		write(1, "0", 1);
		return ;
	}
	convert(str);
}

int		main(int ac, char **av) {
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	print_hex(av[1]);
	write(1, "\n", 1);
	return (0);
}
