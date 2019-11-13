char    *ft_strrev(char *str)
{
	char	tmp;
	int		i;
	int		len;
	
	len = 0;
	while (str[len])
		len++;
	len--;
	i = 0;
	while (i < len - i) {
		tmp = str[i];
		str[i] = str[len - i];
		str[len - i] = tmp;
		i++;
	}
	return (str);
}
