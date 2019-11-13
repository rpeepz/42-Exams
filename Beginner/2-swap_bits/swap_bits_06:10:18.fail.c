/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 21:24:24 by exam              #+#    #+#             */
/*   Updated: 2018/10/05 21:26:56 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	int div;
	int oct;
	unsigned char result;

	octet = oct;
	div = 128;

	if (!(oct))
		return ;
	else
	{
	   while (div > 0)
	   {
           if (oct < div)
           {
               div = div / 2;
               result = result * 10;
           }
		   if (oct >= div)
		   {
			   oct = oct % div;
			   div = div / 2;
			   result = result * 10 + 1;
		   }
	   }

	}
	return (result);
}
