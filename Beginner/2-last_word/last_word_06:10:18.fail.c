/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 21:43:55 by exam              #+#    #+#             */
/*   Updated: 2018/10/05 21:56:38 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{	int i;
	i = 0;
	int j;
	char *last;
	j = 0;
	if (argc != 2){
		write (1, "\n", 1);
		return (0);
	}
	while (argv[1][j] != '\0')
	{
		if ((argv[1][j] == ' ' || argv[1][j] == '\t') && argv[1][j] != '\0')
			j++;
		while (argv[1][j] >= 33 && argv[1][j] <= 127)
		{
			i = 0;
			last = &argv[1][j];
			while (argv[1][j] >= 33 && argv[1][j] <= 127)
			{
				j++;
				i++;

			}
		}
			




	write (1, &last, i);
	}
return (0);
}
