/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/19 09:19:20 by exam              #+#    #+#             */
/*   Updated: 2019/03/19 09:31:33 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
		return(ft_strcmp(s1 + 1, s2 + 1));
	else
		return (*s1 - *s2);
}

