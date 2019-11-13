/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 09:47:08 by exam              #+#    #+#             */
/*   Updated: 2019/05/14 09:55:13 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	do_op(int a1, int a2, char op) {
	if (op == '+')
		printf("%d", a1 + a2);
	else if (op == '-')
		printf("%d", a1 - a2);
	else if (op == '*')
		printf("%d", a1 * a2);
	else if (op == '/')
		printf("%d", a1 / a2);
	else
		;
}

int		main (int ac, char **av) {
	if (ac != 4) {
		printf("\n");
	}
	else {
		do_op(atoi(av[1]), atoi(av[3]), av[2][0]);
		printf("\n");
	}
	return (0);
}

