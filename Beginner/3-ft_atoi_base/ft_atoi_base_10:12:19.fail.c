/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 11:39:25 by exam              #+#    #+#             */
/*   Updated: 2018/10/12 12:05:45 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_base(const char *str, int str_base)
{
	int r;
	int i;
	int sign;

	r = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <=13))
		i++;
		
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'f') || \
			(str[i] >= 'A' && str[i] <= 'F'))
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			r = (r * 10) + (str[i] - '0');
			i++;
		}
		else if (str[i] >= 'A' && str[i] <= 'F')
		{
			r = r + (str[i] - 54);
			i++;
		}
		else if (str[i] >= 'a' && str[i] <= 'f')
		{
			r = r + (str[i] - 86);
			i++;
		}
		else
			break;
	}
	return (r * sign);
}

