/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 20:49:38 by exam              #+#    #+#             */
/*   Updated: 2018/10/05 21:18:42 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{

	int div;
	int oct;

	div = 128;
	oct = octet;

	if (!(oct))
		return ;	
	else
	{
	   while (div > 0)
	   {
           if (oct < div)
           {
               div = div / 2;
               write (1, "0", 1);
           }
		   if (oct >= div)
		   {
			   oct = oct % div;
			   div = div / 2;
			   write (1, "1", 1);
		   }
	   }

	}
}
