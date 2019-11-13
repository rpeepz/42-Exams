/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 13:55:28 by exam              #+#    #+#             */
/*   Updated: 2018/10/12 14:20:23 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int 	*arr;
	int		sz;
	int		i = 0;
	int 	j = 0;
	int		tmp;

	if (start < 0)
		i = start * -1;
	if (start >= 0)
		i = start;
	if (end < 0)
		j = end * -1;
	if (end >= 0)
		j = end;
	sz = i + j;

	arr = malloc(sizeof(int) * sz);
	
	tmp = 0;
	while (tmp < sz)
	{
		if (end >= 0)
		{
			while (end != 0)
			{
				arr[tmp] = end;
				tmp++;
				end--;	
			}
			arr[tmp] = end;
			tmp++;
		}
		else if (end <= 0)
		{
			while (end != 0)
			{
				arr[tmp] = end;
				tmp++;
				end++;
			}
			arr[end] = end;
			tmp++;
		}
		if (start >= end)
		{
			while (start != 0)
			{
				arr[tmp] = start;
				tmp++;
				start--;
			}
			arr[tmp] = start;
			tmp++;
		}
		else if (start <= end)
		{
			while (start != 0)
			{
				arr[tmp] = start;
				tmp++;
				start++;
			}
			arr[tmp] = start;
			tmp++;
		}
	}
	
	return (arr)
}
