/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 09:57:41 by exam              #+#    #+#             */
/*   Updated: 2019/05/14 10:08:18 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char new = 0;
	int i = 0;
	int g = 8;
	while (i < 8) {
		g--;
		if (octet & 1UL << i)
			new |= 1UL << g;
		i++;
	}
	return (new);
}