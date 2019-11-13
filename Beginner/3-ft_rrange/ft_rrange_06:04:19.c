#include <stdlib.h>
int		*ft_rrange(int start, int end)
{
	int		*arr;
	int		i;
	int		c;

	i = end - start;
	if (i < 0)
		i *= -1;
	i++;
	arr = malloc(sizeof(int) * i+1);
	c = 0;
	while (end != start)
	{
		arr[c] = end;
		if (start < end)
			end--;
		else
			end++;
		c++;
	}
	arr[c] = start;
	return (arr);
}
