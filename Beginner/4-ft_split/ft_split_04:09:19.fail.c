/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 10:58:25 by exam              #+#    #+#             */
/*   Updated: 2019/04/09 11:56:58 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_space(char c)
{
	return(c == ' ' || c == '\t' || c == '\n' ? 1 : 0);
}

int		is_print(char c)
{
	return(c > 32 && c < 127 ? 1 : 0);
}

int     ft_strlen(char *str)
{
    int i = 0;
    while (*str)
    {
        str++;
        i++;
    }
    return (i);
}

int		word_count(char *str)
{
	int words = -1;
	int i = 0;
	while (str[i])
	{
		words++;
		while (is_space(str[i]))
			i++;
		while (is_print(str[i]))
			i++;
	}
	return (words);
}

char    **ft_split(char *str)
{
	int i;
	int j;
	int len;
	int	k;
	char **s;

	i = 0;
	if (!str[i])
		return (NULL);
	int words = word_count(str);
	if (!(s = (char**)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	s[words + 1] = 0;
	j = 0;
	while (i < words && str[j]){
		while (is_space(str[j]))
			j++;
		len = 0;
		while (is_print(str[j+len]))
			len++;
		if (!(s[i] = (char *)malloc(sizeof(char) * len + 1)))
			return (NULL);
		s[i][len + 1] = '\0';
		k = 0;
		while (k < len && str[j])
			s[i][k++] =  str[j++];
		i++;
	}
	return (s);
}
