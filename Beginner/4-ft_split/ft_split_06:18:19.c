#include <stdlib.h>

int		count_words(char *str)
{
	int words = 0;
	int i = 0;
	while(str[i])
	{
		while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (str[i])
			words++;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
	}
	return (words);
}

char	*get_word(char **string)
{
	int i = 0;
	char *str = *string;
	while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
		i++;
	char *p = &str[i];
	int tmp = i;
	while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		i++;
	tmp = i - tmp;
	char *ret = malloc(sizeof(char) * tmp + 1);
	ret[tmp] = '\0';
	int j = 0;
	while (j < tmp)
	{
		ret[j] = p[j];
		j++;
	}
	*(string)+=i;
	return (ret);
}

char    **ft_split(char *str)
{
	char **arr;
	if (!str)
		return (arr = NULL);
	int words = count_words(str);
	arr = malloc(sizeof(char *) * words + 1);
	arr[words] = NULL;
	if (!words)
		return (arr);
	int i = 0;
	while (i < words)
	{
		arr[i] = get_word(&str);
		i++;
	}
	return (arr);	
}
