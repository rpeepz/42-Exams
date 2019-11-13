/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 19:57:32 by exam              #+#    #+#             */
/*   Updated: 2018/10/05 20:11:31 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	int div;
	int oct;
	unsigned char result;

	octet = oct;
	div = 128;
	while (octet)
	{
		if (oct < div)
		{
			div = oct % div;
			result
			
		}	
	}
	return (result);
}
