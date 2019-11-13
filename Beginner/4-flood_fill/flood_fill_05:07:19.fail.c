/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 10:58:56 by exam              #+#    #+#             */
/*   Updated: 2019/05/07 12:52:46 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"

void	rev_floodfill(char **tab, t_point size, t_point begin)
{
	if (!tab)
		return ;
	 if (begin.x <= 0 || begin.x > size.x || begin.y <= 0 || begin.y > size.y)
        return ;
	 if (tab[begin.y - 1][begin.x - 1] == '1' || tab[begin.y - 1][begin.x - 1] == 'F')
        return ;
	else{
		if (begin.x > 1)
		{
			tab[begin.y - 1][begin.x - 1] = 'F';
			begin.x -= 1;
			rev_floodfill(tab, size, begin);
		}
		if (begin.y > 1)
		{
			tab[begin.y - 1][begin.x - 1] = 'F';
			begin.y -= 1;
			rev_floodfill(tab, size, begin);
		}
	}
}
void	flood_fill(char **tab, t_point size, t_point begin)
{
	if (!tab)
		return ;
	if (begin.x - 1 <= 0 || begin.x >= size.x || begin.y - 1 <= 0 || begin.y >= size.y)
		return ;
	if (tab[begin.y - 1][begin.x - 1] == '1' || tab[begin.y - 1][begin.x - 1] == 'F')
		return ;
	else {
		tab[begin.y - 1][begin.x - 1] = 'F';
		if (begin.x < size.x){
			begin.x++;
			flood_fill(tab, size, begin);
		}
		if (begin.y < size.y){
			begin.y++;
			flood_fill(tab, size, begin);
		}
		rev_floodfill(tab, size, begin);
	}
}
