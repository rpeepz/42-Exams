#include <stdlib.h>
int     *ft_rrange(int start, int end)
{
	int range;
	int *type;
	if (!start && !end){
		type = malloc(1 * sizeof(int));
		*type = 0;
		return type;
	}
	start < 0 ? end < 0 ? start < end ? (range = (start * -1) + end) : (range = (end * -1) + start) :
				(range = end - start) :
			end < 0 ? 
		(range = end - start) : start < end ?
	(range = end - start) : (range = start - end);
	type = malloc(range * sizeof(int));
	int i = 0;
	int tmp;
	start < end ? (tmp = 1) : (tmp = -1);
	while (i <= range){
		type[i] = start;
		start += tmp;
		i++;
	}
	return (type);
}
