char	*ft_strpbrk(const char *s1, const char *s2){
	int i = 0;
	int j;
	if (!s1 || !s1[i])
		return (0);
	if (!s2 || !s2[i])
		return (0);
	while (s1[i]){
		j = 0;
		while (s2[j]){
			if (s1[i] == s2[j])
				return ((char *)&s1[i]);
			j++;
		}
		i++;
	}
	return (0);
}
