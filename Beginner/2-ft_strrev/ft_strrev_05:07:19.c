/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 09:33:46 by exam              #+#    #+#             */
/*   Updated: 2019/05/07 10:06:57 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	tmp;
	int		i;
	int 	j;

	if (str){
		i = 0;
		j = 0;
		while (str[i]){
			i++;
		}
		while (i-- > j){
			tmp = str[j];
			str[j++] = str[i];
			str[i] = tmp;
		}
	}
	return (str);
}
