/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 11:47:23 by exam              #+#    #+#             */
/*   Updated: 2019/05/14 12:32:43 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int		word_count(char *s)
{
	int count = 0;
	int i = 0;
	while (s[i])
	{
		while (s[i] == ' '|| s[i] == '\t' || s[i] == '\n')
			i++;
		if (!s[i])
			break ;
		count++;
		while (s[i] > 32 && s[i] < 127)
			i++;
	}
	return (count);
}
char	*word_make(char **s, char *tmp)
{
	char *str;

	int len = 0;
	while (**s == ' '|| **s == '\t' || **s == '\n')
	{
		(*s)++;
		tmp++;
	}
	while (**s)
	{
		(*s)++;
		len++;
		if (**s == ' '|| **s == '\t' || **s == '\n' || **s == '\0')
			break ;
	}
	int i = -1;
	str = malloc(sizeof(char) * len + 1);
	while (++i < len){
		str[i] = *tmp;
		tmp++;
	}
	str[i] = '\0';
	return (str);
}
char    **ft_split(char *str)
{
	char **res;
	int count = word_count(str);
	res = malloc(sizeof(char *) * count + 1);
	res[count] = NULL;
	int i = 0;
	while (i < count)
	{
		char *tmp = str;
		res[i] = word_make(&str, tmp);
		i++;
	}
	return (res);
}	
